#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    int c=0,max=0;
    while(n>0)
        {
        if(n%2==1)
            {
                c++;
          if(c>=max)
                max=c;
            }
        else
            {

            c=0;

        }
        n/=2;
    }
    printf("%d\n",max);
    return 0;
}
