#include<stdio.h>
#include<math.h>
int main()
{
    double mealcost;
    double tip,tippercentage;
    double tex,texpercentage;
    float totalcoast;
    //int totalcoast;

    scanf("%lf",&mealcost);
    scanf("%lf",&tippercentage);
    scanf("%lf",&texpercentage);

     tip = ((mealcost*tippercentage)*0.01);
    tex = ((mealcost*texpercentage)*0.01);

   totalcoast = (mealcost + tip + tex);

    printf("%.0f",round(totalcoast));
   // printf("%d",totalcoast);

    return 0;
}
