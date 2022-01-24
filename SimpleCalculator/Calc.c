#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



long long pgcd(long long a, long long b)
{
	if (b == 0)
		return 0;
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
	long long a = 15, b = 0;
	double res = pgcd(a,b);
	printf("%f", res);
	return 0;
}
