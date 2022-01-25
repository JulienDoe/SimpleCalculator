#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



long long Pgcd(long long a, long long b)
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

long long Ppcd(long long a, long long b)
{
	if (a == 0 || b == 0)
		return 0;
	long res = Pgcd(a, b);
	res = (a * b) / res;

}

int main(int argc, char* argv[])
{
	long long a = 255, b = 15400;
	double res = Ppcd(a,b);
	printf("%f", res);
	return 0;
}
