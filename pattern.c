#include <stdio.h>
int main()
{
  int n, i, j,m;

  printf("Enter number of rows\n");
  scanf("%d", &n);
   for(i=1;i<=2*n-1;i++)
   {
       for(j=1;j<=2*n-1;j++)
        {
            for(m=1;m<=5;m++)
            if(i==m || i==2*n-1-m || j==m || j==2*n-1-m)
                printf("%d ",i);
        }
   }

  return 0;
}
