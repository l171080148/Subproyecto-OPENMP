#include <omp.h>
#include <stdio.h>

int main()
{
    int p;
    p =omp_get_num_procs();
	omp_set_num_threads(p);
	#pragma omp parallel
	{
		printf("soy un procesador\n");
	}

	return 0;
}

