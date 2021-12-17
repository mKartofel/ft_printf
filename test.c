#include<stdio.h>
#include "includes/ft_printf.h"


int test_func(int a){
	return 2*a;
}

int main() 
{
ft_printf("debut format entier %d puis chaine %s pointeur : %p vient le i :%iEt un unsigned :%u\n",  3, "la chaine", test_func, 42, 789);
//ft_printf2("debut format entier %d puis chaine %s\n",  3, "la chaine");
printf("debut format entier %d puis chaine %s pointeur : %p vient le i :%iEt un unsigned :%u\n",  3, "la chaine", test_func, 42, 789);
return 0; 
}

// gcc test.c -L. -lftprintf