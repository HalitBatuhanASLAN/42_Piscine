#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{	
		*div = a/b;
		*mod = a%b;
	}
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	a = 12;
	b = 6;
	ft_div_mod(a,b,&c,&d);
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);
	printf("%d",d);
}
