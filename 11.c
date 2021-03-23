#include<stdio.h>
void main()
{
    int a, b, i=0, d=0;

    printf("\n Enter X :");
    scanf("%d", &a);
    printf("\n Enter Y :");
    scanf("%d", &b);

    for(i=1; i<=b; i++)
    {
        d=a*a+i;
    }

    printf("\n d : %d", d);

}
