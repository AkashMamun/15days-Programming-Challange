//Using While Loop

#include<stdio.h>
int main()
{
    int n=5;
    int i=1;
    while(i<=10){
        printf("%d * %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
    int n=5;
    int i=1;
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int m=0,n=5;
    int i;
    for(i=1;i<=10;i++){
        m=m+n;
        printf("%d * %d = %d\n",n,i,m);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int n,i;
    for(n=1;n<=20;n++){
        for(i=1; i<=10; i++){
            printf("%d * %d = %d\n",n,i,n*i);
        }
        printf("\n");
    }
    return 0;
}
*/
