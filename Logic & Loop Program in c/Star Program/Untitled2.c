#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    for(b=1;b<=a;b++){
        if(b==1){
            for(c=1;c<=2*a-1;c++){printf("*");}
        }
        else
        {
            printf("*");
            for(d=1;d<(b-1);d++){printf("*");}
            printf("*");
            for(e=2*(a-1); e>=2*b; e--){printf("*");}
            if(b<a)printf("*");
            for(f=1;f<b-1;f++){printf("*");}
            printf("*");
        }
        printf("\n");
    }
for(b=a-1;b>=1;b--){
        if(b==1){
            for(c=1;c<=2*a-1;c++){printf("*");}
        }
        else
        {
            printf("*");
            for(d=1;d<(b-1);d++){printf(" ");}
            printf("*");
            for(e=2*(a-1); e>=2*b; e--){printf("*");}
            if(b<a)printf("*");
            for(f=1;f<b-1;f++){printf("*");}
            printf("*");
        }
        printf("\n");
    }
}

