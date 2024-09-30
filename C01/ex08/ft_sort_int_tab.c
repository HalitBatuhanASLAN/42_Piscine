#include<unistd.h>
#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	while(size >1)
	{
		i = 0;
		while(i < size - 1)
		{	
			if( tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				i ++;
			}
		size --;
		}	
		
	}
}

int main ()
{
	int tab[] = {12,5,3,6,56,92,98};
	int size = sizeof(tab)/sizeof(*tab);
	int i;
	
	i = 0;
	ft_sort_int_tab(tab,size);
	while(i<size)
		printf("%d, ",tab[i++]);
}


