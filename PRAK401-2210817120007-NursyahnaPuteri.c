#include <stdio.h>
int main ()
{
    char karakter [100];
    int i, j, k;

    scanf ("%d", &k);
    scanf ("%s", &karakter);

    for (i = 1; i <=50; i++) 
    {
        if (i % k==0)
        printf ("%s\t", karakter);
        else
        printf ("%d\t", i);
    }
    printf ("\n");
}