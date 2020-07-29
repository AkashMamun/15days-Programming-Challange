//This all about array

/*
#include<stdio.h>
int main()
{
    int ft_marks,st_marks,final_marks;
    double total_marks;
    ft_marks= 80;
    st_marks= 74;
    final_marks= 97;
    total_marks= ft_marks/4.0+st_marks/4.0+final_marks/2.0;
    printf("Total matks is %0.0lf",total_marks);
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int ft_marks,st_marks,final_marks;
    double total_marks;
    ft_marks= 80;
    st_marks= 74;
    final_marks= 97;
    total_marks= ft_marks/4+st_marks/4+final_marks/2;
    printf("Total matks is %0.0lf",total_marks);
    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int ara[5]={1,2,3,4,5};
    printf("The frist elemet is %d \n",ara[0]);
    printf("The third element is %d \n",ara[2]);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int ara[5]={1,2,3,4,5};
    printf("%d \n",ara[-1]);
    printf("%d \n",ara[7]);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int ara[10]={10,20,30,40,50,60,70,80,90,100};
    int i;
    for(i=0 ; i<10 ; i++){
        printf("%d th element is : %d\n",i ,ara[i]);
    }
    return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
    int ara[10]={10,20,30,40,50,60,70,80,90,100};
    int i;
    for(i=9 ; i>=0 ; i--){
        printf("%d th element is : %d\n",i ,ara[i]);
    }
    return 0 ;
}
*/
//Now here exercise for you to print 3 to 8 number position o f array! Do ii it's a very easy!
/*
#include<stdio.h>
int main()
{
    int ara[]={10,20,30,40,50,60,70,80,90,100};
    int ara2[10];
    int i,j;
    for(i=0,j=9 ; i<10 ; i++,j--){
        ara2[j]=ara[i];
    }
    for(i=0 ; i<10 ; i++){
        ara[i]=ara2[i];
        printf("%d\n",ara [i]);
    }

    return 0 ;
}
*/
/*
#include<stdio.h>
int main()
{
    int ara[]={10,20,30,40,50,60,70,80,90,100};
    int i,j,temp;
    for(i=0,j=9 ; i<10 ; i++,j--){
        temp=ara[j];
        ara[j]= ara[i];
        ara[i]=temp;
    }
    for(i=0 ; i<10 ; i++){
        printf("%d\n", ara[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int ft_marks[40]={83,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,
    53,56,71,62};
    int st_marks={86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,52,48,47,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,
    63,49};
    int final_marks[40]={83,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,
    53,56,71,62};
    int i ;
    double total_marks[40];
    for(i=0 ; i<40 ; i++){
        total_marks[i]=ft_marks[i]/4.0 +st_marks[i]/4.0+final_marks[i]/2.0;
    }
    for(i=1 ; i<=40 ; i++){
        printf("Roll No: %d\t Total Marks: %0.01lf\n",i,total_marks[i-1]);
    }
    return 0 ;
}

