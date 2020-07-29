/*
Today we learn abour function. Already we know some functon like printf(),scanf(),main() function tc..
Now we can also make some function by own... Let's see it.First we see structure of functon..

return_type function_name (parameter)
{
    function body;
    return value;

}
*/
// Now firstly see a simple program..


#include<stdio.h>
int main()
{
    double a,b,c;
    a=2.5;
    b=2.5;
    c=a+b;
    printf("Sum is %lf\n",c);
    return 0;
}


//Now here this sum work do in function....
/*
#include<stdio.h>

int add(int num1, int num2)
{
    double sum = num1+num2;
    return sum; //Here see we return sum
}
int main()
{
    double a,b,c;
    a=b=2.5;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}
*/
//Output 4.0000.We make mistake int num1,int num hobbe double num1, double num2.try again..
/*
#include<stdio.h>

int add(double num1, double num2)
{
    double sum = num1+num2;
    return sum; //Here see we return sum
}
int main()
{
    double a,b,c;
    a=b=2.5;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}
*/
/*
Output 5.00000! now it'a work. But now we make another experiment! now we takw a=2.8, b= 2.7, our output:5.5.
But if we run progran we see output 5.00000 Bcz we write function return type int ! It may be double.
Now write the program again.. correctly..
*/
/*
#include<stdio.h>
double add(double n1, double n2){
    double sum = n1+n2;
    return sum;
}
int main()
{
    double a,b,c;
    a=2.8;
    b=2.7;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}
*/
/*
From this progrma ,Can you find the difference? If, NO! Then try to understran again and again!
Now we check a function will work if we write under main() function?? let's do it..
*/

/*
#include<stdio.h>
int main()
{
    double a,b,c;
    a=2.8;
    b=2.7;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}

double add(double n1, double n2){
    double sum = n1+n2;
    return sum;
}
*/
/*
It's not work bcz main() function means it's start from it. But if we want to work it.. we have need to declare
prototype of function. SEE the program..
*/
/*
#include<stdio.h>
double add(double x, double y);
int main()
{
    double a,b,c;
    a=2.8;
    b=2.7;
    c=add(a,b);
    printf("Sum is %lf\n",c);
    return 0;

}
double add(double num1, double num2){
    double sum = num1+num2;
    return sum;
}
*/

/*Now we check more in a program .First write it your own codeblocks.. And without run just see what's can be output!!
20 10 200 !! And Now run and find out the nistake */
/*

#include<stdio.h>
int test_function(int x)
{
    int y= x;
    x = 2*y;
    return(x*y);
}
int main()
{
    int x=10, y=20, z= 30;
    z = test_function(x);
    printf("%d %d %d\n", x,y,z);
    return 0;
}
*/

//Global function and Local function
/*
#include<stdio.h>
double pi=3.14 ;//global variable
void my_func()
{
    pi=3.1416; //local variable
    return ;
}
int main()
{
    printf("%lf\n",pi);
    my_func();
    printf("%lf\n",pi);
    return 0;
}
*/
