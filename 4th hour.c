/*
This hour we practic some math problem. and solve with c language
with our previous knowledge;
problem1: x+y=20; x-y=38; x=?,y=?
*/

#include<stdio.h>
int main()
{
    double x,y, x_plus_y,x_minus_y;
    printf("Enter the value of x+y= ");
    scanf("%lf",&x_plus_y);
    printf("Enter the value of x-y= ");
    scanf("%lf",&x_minus_y);
    x=(x_plus_y + x_minus_y)/2;
    y=(x_plus_y - x_minus_y)/2;
    printf("x = %0.2lf ,\ny = %0.2lf\n",x,y);
    return 0;
}

/*
problem02: 5x + 7y = 14 ; 6x + 4y = 17; x=?,y=?
This problem we can solution determination law:
x = (b2*c1 - b1*c2) / (a1*b2 - a2*b1)
y =(a1*c2 - a2*c1) / (a1*b2 -a2*b1)
*/
/*
#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y;
    printf("a1 = ");
    scanf("%lf",&a1);
    printf("a2 = ");
    scanf("%lf",&a2);
    printf("b1 = ");
    scanf("%lf",&b1);
    printf("b2 = ");
    scanf("%lf",&b2);
    printf("c1 = ");
    scanf("%lf",&c1);
    printf("c2 = ");
    scanf("%lf",&c2);
    x=(b2*c1 - b1*c2) / (a1*b2 - a2*b1);
    y =(a1*c2 - a2*c1) / (a1*b2 -a2*b1);
    printf("x = %0.2lf, \ny= %0.2lf",x,y);
    return 0;

}
*/
//We can make more short this program by let d=a1*b2 - a2*b1
/*
#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("a1 = ");
    scanf("%lf",&a1);
    printf("a2 = ");
    scanf("%lf",&a2);
    printf("b1 = ");
    scanf("%lf",&b1);
    printf("b2 = ");
    scanf("%lf",&b2);
    printf("c1 = ");
    scanf("%lf",&c1);
    printf("c2 = ");
    scanf("%lf",&c2);
    d = (a1*b2 - a2*b1);
    if((int) d == 0){
        printf("Value of X and Y can not be determined.\n");
    }
    else{
        x =(b2*c1 - b1*c2) / d;
        y =(a1*c2 - a2*c1) / d;
        printf("x = %0.2lf, \ny= %0.2lf",x,y);
    }
    return 0;

}
*/
//problem Type: Suppose you lend 10,000tk,and 35% interest per month you have need to pay thhis amount within 5 years.
//And findout How much money you have total pay in 5 years? and how much money need to pay per month?
/*
#include<stdio.h>
int main()
{
    double loan_amount, interest_amount, number_of_year, total_amount,monthly_amount;
    printf("Enter the loan amount: ");
    scanf("%lf",&loan_amount);
    printf("Enter the interest amount: ");
    scanf("%lf", &interest_amount);
    printf("Number of years: ");
    scanf("%lf",&number_of_year);
    total_amount = loan_amount + (loan_amount*interest_amount*number_of_year) / 100.00;
    monthly_amount = total_amount / (number_of_year * 12);
    printf("Total amount : %0.2lf\n",total_amount);
    printf("Monthly amount : %0.2lf\n",monthly_amount);
    return 0;
}
*/

//Find out the result of 1+2+3+....+1000=?
/*
#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Summation is  %d\n",sum);
    return 0;
}
*/
//Previous problem solving with loop
/*
#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter the value of sum: ");
    scanf("%d",&n);
    for( i=1, sum=0 ; i<=n; i++){
        sum = sum+i;
    }
    printf("Total sum is : %d\n",sum);
    return 0;
}
*/
//Write a program how to convert celsius to farenheit
/*
#include<stdio.h>
int main()
{
    int celsius,farenheit;
    printf("Enter the celsius point : ");
    scanf("%d",&celsius);
    farenheit = (celsius*1.8)+32;
    printf("Today Farenheit is : %d\n",farenheit);
    return 0;
}
*/

//Find GCD or Common Divisor
/*
#include<stdio.h>
int main()
{
    int a,b,x,gcd;
    printf("Enter two value for finding GCD: ");
    scanf("%d %d",&a,&b);
    if(a<b){
        x=a;
    }
    else{
        x=b;
    }
    for( ; x>=1 ; x--){
    if(a%x==0  &&  b%x==0){
        gcd=x;
        break;
    }
    }
    printf("GCD is  %d\n",gcd);
    return 0;
}

*/
//Another way finding GCD

/*
#include<stdio.h>
int main()
{
    int a,b,t,x,gcd;
    scanf("%d %d", &a, &b);
    if(a==0) gcd=a;
    else if(b==0) gcd=b;
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd = a ;
    }
    printf("GCD is %d\n",gcd);
}
*/
