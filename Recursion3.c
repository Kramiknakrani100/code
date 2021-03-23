#include<stdio.h>
main()
{

    int n,i,ans=1;
    scanf("%d",&n);
    {
    if(n>1 && n<13)
    {
        for(i=n;i>0;i--)
        {
            ans = (ans*i);
        }
        printf("%d",ans);
    }
    else
    {
        printf("0");
    }
    }
}
