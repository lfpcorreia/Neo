





void fillR_CPU(float3 *r_cpu,int l_size){
	int k,j;
	for(j=0; j< l_size;j++){
		for(k=0; k< l_size; k++) {
			r_cpu[ k + j*l_size  ].x=(float)k;
			r_cpu[ k + j*l_size  ].y=(float)j;
			r_cpu[ k + j*l_size  ].z=0.f;
		}
	}
}
/* FUNCIONA, comentei para testar GPU antes de ver esta funcao
void fill_U2(float *u_cpu, float3 *r_h, int n_points){
	int m,n,i,j;
	for(i=0;i<n_points;i++){
		for(j = 0; j < n_points;j++){
			
			if(i==j) {
				continue;
			}
			float d[3];
			float r1=0,r2=0,r3=0;
			
			d[0]=r_h[i].x-r_h[j].x;
			r2+=d[0]*d[0];

			d[1]=r_h[i].y-r_h[j].y;
			r2+=d[1]*d[1];

			d[2]=r_h[i].z-r_h[j].z;
			r2+=d[2]*d[2];

			
			r1=sqrt(r2);
			r3=pow(r1,3);
			
			for(m=0;m<3;m++){
				for(n=0;n<3;n++){
					u_cpu[i][j][m][n]=(3* d[m]/r1 * d[n]/r1 - (m==n?1:0) )/r3;
				}
			}
		}
	}
}

*/
/*
void fill_U(float *u_cpu, float3* r_h){
	for(int i=0;i<N_POINTS;i++){
		for(int j = 0; j < N_POINTS;j++){

			if(i==j) {
				continue;
			}
			float d[3];
			float r1=0,r2=0,r3=0;

			d[0]=r_h[i].x-r_h[j].x;
			r2+=d[0]*d[0];

			d[1]=r_h[i].y-r_h[j].y;
			r2+=d[1]*d[1];

			d[2]=r_h[i].z-r_h[j].z;
			r2+=d[2]*d[2];

			r1=sqrt(r2);
			r3=pow(r1,3);

			for(int m=0;m<3;m++){
				for(int n=0;n<3;n++){
					u_cpu[i*9 * N_POINTS + j*9 + m*3 + n]=(3* d[m]/r1 * d[n]/r1 - (m==n?1:0) )/r3;
					//printf("%d\n",i*9 * N_POINTS + j*9 + m*3 + n);
				}
			}
		}
	}
}
*/


/*
for(int i=0;i<N_POINTS;i++){
	for(int j=0;j<N_POINTS;j++){
		for(int k=0;k<3;k++){
			for(int l=0;l<3;l++){
				printf("%f ",u_cpu[i*9 * N_POINTS + j*9 + k*3 + l]);
//				assert(u_h[i*9 * N_POINTS + j*9 + k*3 + l]==u_cpu[i*9 * N_POINTS + j*9 + k*3 + l]);
			}
			if(k==2)
			printf("\n ======= \n");
			else
				puts("");
		}
	}
}
*/
/*	// Faz print do u calculado no GPU
	for(int i=0;i<N_POINTS;i++){
		for(int j=0;j<N_POINTS;j++){
			for(int k=0;k<3;k++){
				for(int l=0;l<3;l++){
					printf("%f ",u_h[i*9 * N_POINTS + j*9 + k*3 + l]);
				}
				printf("\n");
			}
			printf("---------------\n");
	}
}
*/

/*
	// Faz print do U calculado no CPU
	// Assert falha devido a precsao do GPU ser maior do que CPU (?) - mais do que epsilon
	for(int i=0;i<N_POINTS;i++){
		for(int j=0;j<N_POINTS;j++){
			for(int k=0;k<3;k++){
				for(int l=0;l<3;l++){
					printf("%d\n",i*9 * N_POINTS + j*9 + k*3 + l);
					printf("%f - %f",u_h[i*9 * N_POINTS + j*9 + k*3 + l],U[i][j][k][l]);
					assert(fabs(u_h[i*9 * N_POINTS + j*9 + k*3 + l]-U[i][j][k][l]) < eps_f);
					
				}
				printf("\n");
			}
			printf("---------------\n");
	}
}
*/


/*   // Escreve em ordem incorrecta
puts("barra");

for(int i=0;i<N_POINTS*N_POINTS*3;i++){
	printf("%f %f %f\n",u_h[i],u_h[i+1],u_h[i+2]);
	if ((i+1)%3 == 0)
		puts("=======");


}

*/
