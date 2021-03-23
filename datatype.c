#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
        int j;
        scanf("%d",&j);
        printf("%d \n",i+j);
        double y,z;
        scanf("%lf",&y);
        printf("%0.1lf\n",d+y);
        char m[50];
       scanf("%*[\n] %[^\n]",m);
        printf("%s %s",s,m);

    return 0;
}
