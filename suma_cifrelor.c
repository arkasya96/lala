#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<errno.h>
#include <string.h>
#include <cmath>

int main(int argc, char *argv[])
{
    int numar;
    char *nr;

    if(argc < 1)
    {
        printf(stderr, "Trebuie sa introduceti un numar \n");
        exit(EXIT_FAILURE);
    }

    if(argc > 1)
    {
        printf(stderr, "Ati introdus prea multe numere \n");
        exit(EXIT_FAILURE);
    }
  
    long val_numar = strtol(argv[1], &nr, 10);

    if((errno == ERANGE || errno !=0 || val_numar = 0 || val_numar ==INT_MIN || val_numar == INT_MAX)
    {
        printf(stderr, "Numarul este invalid\n");
        exit(EXIT_FAILURE);
    }

    if(strcmp(argv[1], "")==0 ||  *nr !='\0')
    {
        printf(stderr,"String nevalid\n");
        exit(EXIT_FAILURE);

    }

    int suma = 0;
    long copie = val_numar;
    while(abs(copie) > 0)
    {
        suma += copie%10;
        copie/=10;
    }
    printf("\n");
    printf("suma cifrelor este =", suma);

}



