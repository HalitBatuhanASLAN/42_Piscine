#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	if (b!=0)
	{
		div= *a / *b;
		mod= *a % *b;
		*a = div;
		*b = mod;	
	}
}

int main()
{
	int a;
	int b;

	a= 12;
	b=6;

	ft_ultimate_div_mod(&a,&b);
	printf("%d",a);
	printf("%d",b);

}
