#include<stdio.h>
int main()
{
    int n,i,ans;
    scanf("%d",&n);
    {
        for(i=1;i<=10;i++)
        {
            ans = n*i;
            printf("%d x %d = %d \n",n,i,ans);
        }

    }
}
