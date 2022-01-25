#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



long Pgcd(long a, long b)
{
	if (b == 0)
		return 0;
	long res= a % b;
	while (res != 0)
	{
		a = b;
		b = res;
		res = a % b;
	}

	return b;
}

long  Ppcd( long a, long b)
{
	if (a == 0 || b == 0)
		return 0;
	long res = Pgcd(a, b);
	res = (a * b) / res;

}

long  Facto(long a)
{
	long  res = a;
	if (res == 0)
		return 1;
	for (int i = 1; i < a; i++)
		 res = res * i;
	return res;
}

int main(int argc, char* argv[])
{
	double res = 0;
	printf("==== Calculatrice utilisant la notation polonaise inversée ====\n"
		"Elle permet de faire des operations simples avec 2 nombres.\n"
		"Par exemple pour calculer l'addition de 2 et de 1, il faudra taper :\n"
		"\t2 1 +  TOUCHE ENTREE\n"
		"Ci-dessous la liste des operations utilisables :\n"
		"\taddition : +\n"
		"\tsoustraction : -\n"
		"\tmultiplication : *\n"
		"\tdivision : / \n"
		"\treste de la division entière : %\n"
		"\tpuissance : ^\n"
		"\tfactorielle : !\n"
		"\tPGCD : g\n"
		"\tPPCD : p\n"
		"==== POUR QUITTER TAPER q a la place de l'operation ====\n");
		
	while (1)
	{
		long  a = 0, b = 0;
		char op = NULL;
		double res = 0;
		printf("\n Taper les 2 nombres et l'operation souhaitee : \n> ");
		int n = scanf("%ld %ld %c", &a, &b, &op);
		if (n <= 1)
		{
			scanf("%c", &op);
			b = a;
			a = res;
		}
		if (op == 'q')
			break;
		switch (op)
		{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			res = a / b;
			break;
		case '%':
			res = a % b;
			break;
		case '^':
			res = pow(a, b);
			break;
		case '!':
			res = Facto(a);
			break;
		case 'g':
			res = Pgcd(a, b);
			break;
		case 'p':
			res = Ppcd(a, b);
			break;
		}
		printf(" = %f", res);
		
	}
	return 0;
}
