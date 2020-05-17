#include <stdio.h>		//for printf()
#include <stdlib.h>		//for atoi()

//ask 1: The Stairway

unsigned int result (const char * const argv[])
{
	unsigned int N,K,j,result;
	j=0;

	N = atoi(argv[1]);
	K = atoi(argv[2]);

	if (K<1){		//calculation how many stairs will he step in total
		K=1;
		result=N;
	}
	else{
		for (result=0; j<N; j=K+j){
			result++;
		}
	}

	printf("%d\n", result);		//standard output

	return 0;
}

int main(const int const argc, const char * const argv[])
{
	if (argc == 3){		//checking for two arguments
		result(argv);
	}	

	return 0;
}
