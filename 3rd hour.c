/* Today we learn about loop! Now we want to print 1 to 10 in monitor.But how? Let's see the program */

#include<stdio.h>
int main()
{
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");

    return 0;
}

/* We can also only one printf().. function.. */
/*
#include<stdio.h>
int main()
{
    printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n");
    return 0;
}
*/
 /* We can also write this program with a integer variable. First variable n=1 and then n=n+1. let's try it..*/
/*
 #include<stdio.h>
 int main()
 {
     int n;
     n=1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;
     printf("%d\n",n);
     n=n+1;

     return 0;
 }
 */
 /* But this program takes huge code or take much time.
 For solving this problem we can use loop.
Most Popular loop is while loop and for loop. Let's write this away..*/

/*
 #include<stdio.h>
 int main()
 {
     int n=1;
     while(n<=10){
        printf("%d\n",n);
        n++;
     }
     return 0;
 }
*/
/*This away we can print any number. Now tell me what's the output of following program.. */
/*
 #include<stdio.h>
 int main()
 {
     int n=1;
     while(n<=10){
        printf("%d\n",n);
     }
     n++;
     return 0;
 }
 */
/* It's see us only 1 in monitor line... What's the problem! Beacause n++ not in while loop...! */
//Now we use break statement...Lets's see..

/*
#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100){
        printf("%d\n",n);
        n++;
        if(n>10){
            break;
        }
    }
    return 0;
}
*/
//Now we use continue statement...To print odd number
/*
#include<stdio.h>
int main()
{
    int n=0;
    while(n<10){
        n=n+1;
        if(n%2 == 0){
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}
*/
//Now without use continue statement... We print even number..
/*
#include<stdio.h>
int main()
{
    int n=10;
    int m;
    printf("Enter a number which up to see even number:");
    scanf("%d",&m);

    while(n<=m){
        n=n+1;
        if(n%2 == 0){
            printf("\n%d\n",n);
        }
    }
    return 0;
}
*/
//Write a program that print multiple of 5!

/*
#include<stdio.h>
int main()
{
    int n=5;
    int m=1;
    while(m<=10){
        printf("%d * %d = %d\n",n,m,n*m);
        m++;
    }
    return 0;
}
*/
//Write a program that print any number of multiple with user choice!
/*
#include<stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d",&m);
    for(n=1 ; n<10; n++){
        printf("%d * %d = %d\n", m,n,m*n);
    }
    return 0;
}
*/
// Now we write a program that multiple number of up to 20.Let's try it..
/*
#include<stdio.h>
int main()
{
    int n,m;
    for(n=1 ; n<=20 ; n++){
        for(m=1 ; m<=10 ; m++){
            printf("%d * %d = %d\n",n,m,n*m);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
Now we write a program permutation of three number like 1,2,3
Output like:
1,2,3
1,3,2
2,1,3
2,3,1
3,1,2
3,2,1 Let's write this program..
*/

/*
#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1 ; a<=3; a++){
        for(b=1 ; b<=3 ; b++){
            if( b!=a){
                for(c= 1; c<=3 ;c++){
                    if(c!=b && c!=a){
                        printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
    }
    return 0;
}
*/

//We can make this program more easy from this away...
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1 ; a<=3 ; a++){
        for(b=1 ; b<=3 ; b++){
            for(c=1 ; c<=3 ; c++){
                if( b!=a && c!=a && c!=b){
                    printf("%d %d %d\n",a,b,c);
                }
            }
        }
    }
    return 0;
}
*/
