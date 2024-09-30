#include<stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int sayi;
	int *sayiadres;

	sayiadres = &sayi;
	ft_ft(sayiadres);
	printf("%d", sayi);
}
