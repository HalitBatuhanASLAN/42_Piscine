#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int araci;

	araci = *a;
	*a = *b;
	*b = araci;
}

int main()
{
	int x;
	int y;

	x = 6;
	y = 12;
	ft_swap(&x,&y);
	printf("%d",x);
	printf("%d",y);
}
