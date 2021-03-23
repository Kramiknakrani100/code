#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,sum;

    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {

    sum = a[i];
    a[i] = a[n-1-i];
    a[n-1-i] = sum;
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
