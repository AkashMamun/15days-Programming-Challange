
/*#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter any positive number-");
    scanf("%d",&num);
    for(i=2 ; i<num ; i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("Number is a prime number\n");
    }
    else{
        printf("Number is not a prime number\n");
    }
    return 0;
}
*/
/*
#include <stdio.h>
int is_prime(int n)
{
    int i;
    if(n<2){
        return 0;
    }
    for(i=2 ; i<n ; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    while(1){
        printf("Please Enter a number (enter 0 to exit): ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(1== is_prime(n)){
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}
*/
/*
 #include<stdio.h>
 int is_prime(int n)
 {
     int i;
     if(n<2){
        return 0;
     }
     if(n==2){
        return 1;
     }
     if(n%2==0){
        return 0;
     }
     for(i=3 ; i<=n/2 ; i=i+2){
        if(n%i==0){
            return 0;
        }
     }
     return 1;
 }
int main()
{
    int n;
    while(1){
        printf("Enter a positive number:");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(is_prime(n)==1){
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}
*/
/*
#include<stdio.h>
int is_prime(int n)
{
    int i,root;
    if(n<2){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n%2==0){
        return 0;
    }
    root = sqrt(n+1);
    for( i=3 ; i<=root ; i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    while(1){
        printf("Enter a positive number:");
        scanf("%d",&n);
       if(n==0){
        break;
       }
        if(1== is_prime(n)){
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n",n);
        }
       }
    return 0;
}
*/

#include<stdio.h>
#include<math.h>
const int size=40;
int ara[size];
void print_ara()
{
    int i;
    for(i=2 ; i<size ; i++){
        printf("%4d",ara[i]);
    }
    printf("\n");
    for(i=2 ; i<size ; i++){
        printf("----");
    }
    printf("\n");
    for(i=2 ; i<size ; i++){
        printf("%4d",i);

    }
    printf("\n\n\n");
}

void sieve()
{
    int i,j,root;
    for(i=2 ; i<size ; i++){
        ara[i]=1;

    }
    root = sqrt(size);
    print_ara();
    for(i=2 ; i<=root ; i++){
        if(ara[i]==1){
            for(j=2 ; j<=size ; j++)
            {
                ara[i*j]=0;
            }
            print_ara();
        }
    }

}
int is_prime(int n)
{
    int i;
    if(n<2){
        return 0;
    }
    return ara[n];
}
int main()
{
    int n,m;
    sieve();
    while(1){
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(n>=size){
            printf("The number should be less than %d\n",size);
            continue;
        }
        if(1== is_prime(n)){
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n";)
        }
    }
    return 0;
}







