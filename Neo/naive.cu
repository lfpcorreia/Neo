#include <stdio.h>
#include <stdlib.h>
#include <cuPrintf.cu>
#include <float.h>
#include "kernels.cu"
#include "naive.h"
#include <string.h>




//#define eps_f FLT_EPSILON




int main(int argc, char** argv){

	size_t buff=9999999;
	cudaPrintfInit(buff);

	if(argc < 2){
		puts("neoNbody: Usage: neoNbody numPoints");
		exit(0);
		}


	int L_SIZE = atoi(argv[1]);
	int N_POINTS = L_SIZE * L_SIZE;

	printf("%d %d\n",L_SIZE,N_POINTS);

	cudaError_t status = cudaSuccess;


// Alloc CPU memory

	float3* r_CPU;
	r_CPU = (float3*) malloc(sizeof(float3) * N_POINTS * N_POINTS);

	float* u_CPU;
	u_CPU = (float*) malloc(sizeof(float) * 3 * 3 * N_POINTS * N_POINTS);

	

	fillR_CPU(r_CPU,L_SIZE);

	
// Alloc GPU Memory


	float3 *r_GPU;
	status=cudaMalloc((void**) &r_GPU, sizeof(float3) * N_POINTS);
	if (status != cudaSuccess) 
		fprintf(stderr,"cudaMalloc: allocating r: %s\n", status);

	status=cudaMemcpy(r_GPU,r_CPU,sizeof(float3) * N_POINTS,cudaMemcpyHostToDevice);
	if (status != cudaSuccess) fprintf(stderr, "cudaMemcpy: r: copy from Host to Device\n",status);


	float *u_GPU;
	status=cudaMalloc((void**) &u_GPU, sizeof(float) * N_POINTS * N_POINTS * 3 * 3);
	if (status != cudaSuccess) 
		fprintf(stderr,"cudaMalloc: allocating u: %s\n", status);


// Calculate U

	dim3 blcsGrid(L_SIZE,1);
	dim3 thrdsBlck(L_SIZE,1);

	calcU_GPU<<<blcsGrid,thrdsBlck>>>(r_GPU,u_GPU);


	status=cudaMemcpy(u_CPU,u_GPU,sizeof(float) * N_POINTS * N_POINTS * 3 * 3, cudaMemcpyDeviceToHost);
	if (status != cudaSuccess) 
	fprintf(stderr,"cudaMemcpy: copy from Device to Host u: %s\n", status);
/*
	for(int i=0;i<N_POINTS*9;i++){
		printf("%d\n",i/9);
		printf("%f %f %f\n",u_CPU[i++],u_CPU[i++],u_CPU[i++]);
		printf("%f %f %f\n",u_CPU[i++],u_CPU[i++],u_CPU[i++]);
		printf("%f %f %f\n",u_CPU[i++],u_CPU[i++],u_CPU[i]);
		puts("");
		}
*/

	cudaPrintfDisplay(stdout, true);
	cudaPrintfEnd();
	}