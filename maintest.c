#include "./ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    char c = 'z';
    char *str = "ala c bon";
    int nbr = -678826;
    unsigned int nbru = -16573;
    int nbr2 = 500;
    char **nbrptr = &str;


    printf("-----------TEST WITH NO ARG-------------\n");

    printf("%d\n", printf("IT S WORKING\n"));
    printf("%d\n", ft_printf("IT S WORKING\n"));

    printf("-----------TEST %%C-------------\n");

    printf("%d\n", printf("Yolo %c\n", c));
    printf("%d\n", ft_printf("Yolo %c\n", c));

    printf("-----------TEST %%S-------------\n");

    printf("%d\n", printf(" NULL %s NULL ", NULL));
    printf("%d\n", ft_printf(" NULL %s NULL ", NULL));

    printf("-----------TEST %%D-------------\n");

    printf("%d\n", printf("Yolo %i\n", INT_MIN));
    printf("%d\n", printf("Yolo %d\n", INT_MIN));
    printf("%d\n", ft_printf("Yolo %d\n", INT_MIN));
    printf("%d\n", ft_printf("Yolo %i\n", INT_MIN));

    printf("-----------TEST %%U-------------\n");

    printf("%d\n", printf("Yolo %u\n", nbru));
    printf("%d\n", ft_printf("Yolo %u\n", nbru));

    printf("-----------TEST %%x-------------\n");

    printf("%d\n", printf("%x\n", nbr));
    printf("%d\n", ft_printf("%x\n", nbr));

    printf("-----------TEST %%X-------------\n");

    printf("%d\n", printf("%X et le deuxieme %x\n", nbr, nbr2));
    printf("%d\n", ft_printf("%X et le deuxieme %x\n", nbr, nbr2 ));

    printf("-----------TEST %%P-------------\n");

    printf("%d\n", printf("%p  %p\n", LONG_MIN ,LONG_MAX));
    printf("%d\n", ft_printf("%p  %p\n", LONG_MIN,LONG_MAX));

    printf("-----------TEST A VIDE -------------\n");


    return 0;
}