#include<stdio.h>
int main()
{
    int a[3],b[3],i,j,q=0,k=0;
{
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        scanf("%d %d %d",&b[0],&b[1],&b[2]);
}
{
for(i=0;i<3;i++)
  {
    if(a[i]>b[i])
    q = q + 1;
    if(a[i]<b[i])
    k = k + 1;
  }
   printf("%d %d",q,k);
}
return 0;
}

