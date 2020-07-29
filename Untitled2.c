#include<stdio.h>
int main()
{
    int marks[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0 ;  i<10 ; i++){
        printf("%d th element is : %d\n",i+1,marks[i]);
    }
    return 0;

}
