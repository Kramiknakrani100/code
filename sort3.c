#include<stdio.h>

void input(int a[])
{
    int i;
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
}
/*void display(int a[])
{
    int i;
    for(i=0;i<=4;i++)
    printf("%d \n",*(p+i));

}*/
int main()
{
  int a[5];
  input(a);
  //display(a);
  int round,t,i;
    for(round=0;round<4;round++)
    {

        if(a[i]>a[i+1])
        {
          a[i]  = a[i+1];
          t=a[i+1];
          t= a[i];
    printf("Sorted array: %d",a[i]});
 //5 display(a);
    return 0;
}
