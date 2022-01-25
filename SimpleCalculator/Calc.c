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

long long Facto(long long a)
{
	long long res = a;
	if (res == 0)
		return 1;
	for (int i = 1; i < a; i++)
		 res = res * i;
	return res;
}

int main(int argc, char* argv[])
{
	long long a = 4, b = 0;
	double res = Facto(6);
	printf("%f", res);
	return 0;
}
