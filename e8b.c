#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int vint;
	long vlong;
	long long vllong;
	float vfloat;
	double vdouble;
	long double vldouble;
	bool vbln;

	printf("Size of int is %lu\n", sizeof(vint));
	printf("Size of long is %lu\n", sizeof(vlong));
	printf("Size of long long is %lu\n", sizeof(vllong));
	printf("Size of float is %lu\n", sizeof(vfloat));
	printf("Size of double is %lu\n", sizeof(vdouble));
	printf("Size of long double is %lu\n", sizeof(vldouble));
	printf("Size of boolean is %lu\n", sizeof(vbln));

	return 0;
}