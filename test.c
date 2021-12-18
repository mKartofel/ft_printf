#include<stdio.h>
#include "includes/ft_printf.h"


int test_func(int a){
	return 2*a;
}

int main() 
{
int nb_char, nb_char2;
//nb_char = ft_printf("debut format entier %d puis chaine %s pointeur : %p vient le i :%iEt un unsigned :%u Un nbr en hexa : %x pourcentage : %%\n",  325, "la chaine", test_func, 42, 789, 36);
//nb_char = ft_printf("%c%s%p%d%i%u%x%x%%\n", 'Z', "bowo mak", test_func, 98756, -4587, 123456, 784, -9852);
//nb_char = ft_printf(" je suis juste une chaine ");
nb_char = ft_printf("");
//nb_char2 = printf("debut format entier %d puis chaine %s pointeur : %p vient le i :%iEt un unsigned :%u Un nbr en hexa : %x pourcentage : %%\n",  325, "la chaine", test_func, 42, 789, 36);
//nb_char2 = printf("%c%s%p%d%i%u%x%x%%\n", 'Z', "bowo mak", test_func, 98756, -4587, 123456, 784, -9852);
//nb_char2 = printf(" je suis juste une chaine ");
nb_char2 = printf("");

printf("\nnb_char=%d\n", nb_char);
printf("\nnb_char2=%d\n", nb_char2);

return 0; 
}

// gcc test.c -L. -lftprintf
// 0x0 null pointer sur mac