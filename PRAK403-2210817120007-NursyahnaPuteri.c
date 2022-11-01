#include <stdio.h>
int main ()
{
    int i,j, k, n;
    scanf ("%d %d", &k, &n);

    if (k < n) {
    for (i=k, j=n; i <=n, j>=k; i++, j--){
        printf ("%d %d", i, j);
        if (i == n) {
            break ;}
        else {
            printf (" - ");}
        }
    }   
    else {
    for (i=k, j=n; i>=n, j<=k; i--, j++){
        printf ("%d %d", i, j);
        if (i == n){
        break ;}
        else {
        printf (" - ");}
        }   
    }
    printf ("\n");
}