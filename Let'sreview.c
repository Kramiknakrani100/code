#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Let(char s[])
{
     for(int i=0;i<strlen(s);i++)
    {
        if(i%2 == 0)
        {
            printf("%c",s[i]);
        }
    }
    printf(" ");
    for(int i=0;i<strlen(s);i++)
    {
        if(i%2 != 0)
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n;
    char s[10000];

      scanf("%d",&n);
       for(i=0;i<n;i++)
       {
        scanf("%s",&s);
        Let(s);
       }

  return 0;
}
