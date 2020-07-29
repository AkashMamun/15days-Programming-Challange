#include<stdio.h>
int main()
{
    int a,b,c,d,gcd;
    scanf("%d%d",&a,&b);
    if(a<b){
        c=a;
    }
    else{
        c=b;
    }
    for(d=c;d>=1;d--){
        if(a%d == 0 && b%d == 0){
            gcd = d;
            break;
        }
    }
    printf("%d\n",(a*b)/gcd);
}
