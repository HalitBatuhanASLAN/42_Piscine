#include<unistd.h>
#include<stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int bas;
	int son;

	bas = 0;
	son = size - 1;
	while(bas < son)
	{	
		tmp = tab[bas];
		tab[bas] = tab[son];
		tab[son] = tmp;
		bas ++;
		son --;
	}
}

int main()
{
	int tab[] = {1,2,3,4,5};
	int size = sizeof(tab)/sizeof(*tab);
	
	ft_rev_int_tab(tab, size);
	int i = 0;
	while(i < size)
	{
		printf("%d", tab[i++]);
	}
	
}
