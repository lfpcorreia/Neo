void __global__ calcU_GPU(float3* r, float* u){

	//float3* r = (float3*) r_data;
	//float* u = (float*) u_data;

	//if(threadIdx.x != blockIdx.x){

	if(blockIdx.x != threadIdx.x){

		float3 r_i = r[blockIdx.x];
		float3 r_j = r[threadIdx.x];

		int pointer = blockDim.x * blockIdx.x * 9 + (threadIdx.x * 9);
		//cuPrintf("%d\n",pointer);
		//	cuPrintf("BLOCK: %d pointer= %d\n",blockDim.x,pointer);
		for(int i=0;i<blockIdx.x;i++){

			float r1 = sqrt(pow(r_i.x-r_j.x,2) + pow(r_i.y-r_j.y,2) + pow(r_i.z-r_j.z,2));

			// x
			u[pointer]     = (3 * (r_i.x - r_j.x)/r1 * (r_i.x - r_j.x)/r1 - 1) / r1*r1*r1;
			u[pointer + 1] = (3 * (r_i.x - r_j.x)/r1 * (r_i.y - r_j.y)/r1    ) / r1*r1*r1;
			u[pointer + 2] = (3 * (r_i.x - r_j.x)/r1 * (r_i.z - r_j.z)/r1    ) / r1*r1*r1;

			// y
			u[pointer + 3] = (3 * (r_i.y - r_j.y)/r1 * (r_i.x - r_j.x)/r1    ) / r1*r1*r1;
			u[pointer + 4] = (3 * (r_i.y - r_j.y)/r1 * (r_i.y - r_j.y)/r1 - 1) / r1*r1*r1;
			u[pointer + 5] = (3 * (r_i.y - r_j.y)/r1 * (r_i.z - r_j.z)/r1    ) / r1*r1*r1;

			// z
			u[pointer + 6] = (3 * (r_i.z - r_j.z)/r1 * (r_i.x - r_j.x)/r1    ) / r1*r1*r1;
			u[pointer + 7] = (3 * (r_i.z - r_j.z)/r1 * (r_i.y - r_j.y)/r1    ) / r1*r1*r1;
			u[pointer + 8] = (3 * (r_i.z - r_j.z)/r1 * (r_i.z - r_j.z)/r1 - 1) / r1*r1*r1;


			}
		}
	}
