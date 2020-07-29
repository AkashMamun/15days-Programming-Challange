

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
//USING OF BREAK STATEMENT

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

// USING OF CONTINUE STATEMENT

/*

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while (n<10){
        n++;
        if(n%2==0){
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}
*/
