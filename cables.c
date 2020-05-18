#include <stdio.h>		//for printf()
#include <stdlib.h>		//for atoi()

//Task 2: The Bridge

void result (const char * const argv[])
{
	unsigned int N,D,j,result;
	result=0;

	N = atoi(argv[1]);
	D = atoi(argv[2]);

	for (j=1; N>=j; j++){		//calculation how many stairs will he step in total
		result+=(D*j);
	}

	printf("%d\n", result);		//standard output
}

int main(const int const argc, const char * const argv[])
{
	if (argc == 3){		//checking for two arguments
		result(argv);
	}	

	return 0;
}
