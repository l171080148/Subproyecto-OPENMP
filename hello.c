#include <omp.h>
#include <stdio.h>

int main()
{
	omp_set_num_threads(2);
	#pragma omp parallel
	{
		printf("hola mundo\n");
	}

	return 0;
}
