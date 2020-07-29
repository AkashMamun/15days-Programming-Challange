#include<stdio.h>
int main()
{
    int a,num,count=0;
    scanf("%d",&num);
    for(a=1;a<=num;a++){
        if(a%2 == 0){
            count++;
        }
    }
    printf("%d\n",count);
}
