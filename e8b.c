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

	printf("Size of int is %d\n", sizeof(vint));
	printf("Size of long is %d\n", sizeof(vlong));
	printf("Size of long long is %d\n", sizeof(vllong));
	printf("Size of float is %d\n", sizeof(vfloat));
	printf("Size of double is %d\n", sizeof(vdouble));
	printf("Size of long double is %d\n", sizeof(vldouble));
	printf("Size of boolean is %d\n", sizeof(vbln));

	return 0;
}