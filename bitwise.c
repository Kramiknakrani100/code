#include<stdio.h>
int main()
{
    int n,i,j,k,maxa=0,maxo=0,maxx=0;
    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
    {
       // printf("%d\n",i);
        //i = a[i];
    }
    for(i=1;i<=n;i++)
    {
         for(j=i+1;j<=n;j++)
         {

            // printf("%d ",(i&j));
             int x;
             x = (i&j);

              if(x>maxa && x<k)
              maxa = x;
         }
    }
     printf("%d \n",maxa);
    for(i=1;i<=n;i++)
    {
         for(j=i+1;j<=n;j++)
         {

             //printf("%d ",(i|j));
             int y;
             y = (i|j);

              if(y>maxo && y<k)
              maxo = y;
         }
    }
     printf("%d \n",maxo);
     for(i=1;i<=n;i++)
    {
         for(j=i+1;j<=n;j++)
         {

            // printf("%d ",(i^j));
             int z;
             z = (i^j);

              if(z>maxx && z<k)
              maxx = z;
         }
    }
     printf("%d \n",maxx);

     return 0;
}
