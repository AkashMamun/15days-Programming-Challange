#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2;
    double x,y;
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
    double z=(a1*b2)-(a2*b1);
    x=((b2*c1)-(b1*c2))/z;
    y=((a1*c2)-(a2*c1))/z;
    printf("x = %.3lf\t y = %lf\n",x,y);
    return 0;
}
