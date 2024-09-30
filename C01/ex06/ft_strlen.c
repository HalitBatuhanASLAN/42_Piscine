#include <unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
	int uzunluk;
	
	uzunluk=0;
	while(str[uzunluk] != '\0')
	{
		uzunluk++;
	}
	return(uzunluk);
}

int main()
{
    char *a= "Angarali";
	
    printf("%d",ft_strlen(a));
}
