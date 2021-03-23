#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,count,k;
    char s[1000];
    gets(s);
    //puts(s);
    {
        for(k=48;k<=57;k++)
        {
            count=0;
            for(i=0;i<=strlen(s);i++)
           {
                if(s[i]==k)
                  count++;
            }
            printf("%d ",count);
    }
        }
        /*int i=0;
        while(i<=strlen(s)){
             if(s[i]==0)
            count++;
            i++;
        }*/


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
