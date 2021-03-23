#include<stdio.h>
int main()
{
    int n,b=0,x,y,i=1,c=0,max;
    scanf("%d",&n);

    while(n>0)
        if(n%2==1)
        {
            c++;
            if(c>=max)
                max=c;

                else
                {
                    c=0;
                }
                n= n/2;

        }
    printf("%d",max);
    getch();



    return 0;
}

