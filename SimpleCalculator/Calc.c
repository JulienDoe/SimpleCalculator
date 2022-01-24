#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



long long pgcd(long long a, long long b)
{
	long long res= a % b;
	while (res != 0)
	{
		a = b;
		b = res;
		res = a % b;
	}

	return b;
}


int main(int argc, char* argv[])
{
	long long a = 12, b = 15;
	double res = pgcd(a,b);
	printf("%f", res);
	return 0;
}
