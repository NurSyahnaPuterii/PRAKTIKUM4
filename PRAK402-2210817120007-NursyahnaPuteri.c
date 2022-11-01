#include <stdio.h>
int main ()
{
    int i, j, k;
    scanf ("%d", &k);

    for (i = 1; i<=k; i++) 
    {
        if (i % 2 == 1){
        printf ("%d\t", i);}
    }
    printf("\n");
    for (i=k; i >=1; i--)
    {
        if (i % 2 == 0){
            printf ("%d\t", i);}
    }
    printf ("\n");
}