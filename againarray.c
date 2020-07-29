/*
#include<stdio.h>
int main()
{
    int marks[4][10]={{80,70,92,78,58,83,85,66,81,45},{75,67,55,100,91,84,79,61,90,97},{98,67,75,89,81,83,80,90,88,77}
    ,{0,0,0,0,0,0,0,0,0,0}};
    for(int col=0; col<10 ; col++){
        marks[3][col]=marks[0][col]/4.0 + marks[1][col]/4.0 +marks[2][col];
        printf("Roll NO: %d Total Number is: %d\n\n",col+1,marks[3][col]);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int namata[10][10];
    for(int r=0; r<10 ; r++){
        for(int c=0 ; c<10 ; c++){
            namata[r][c]=(r+1)*(c+1);
            printf("%d * %d = %d\n\n",r+1,c+1,namata[r][c]);
        }
        printf("\n");
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char saarc[7][100] ={"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row;
    for(row=0 ; row<7 ; row++){
        printf("%s\n", saarc[row]);
    }

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char saarc[7][100] ={"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row,col,name_length;
    for(row = 0 ; row<7 ; row++){
        name_length=strlen(saarc[row]);
        for(col=0 ; col <name_length ; col++){
            printf("%c",saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/
//some problem here
/*
#include<stdio.h>
int main()
{
    char saarc[7][100] ={"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int row,col,name_length;
    for(row=0 ; row<7 ;row++){
        name_length=strlen(saarc[row]);
        for(col=0 ; col<name_length ; col++){
            printf("(%d ,%d")=%c, ", row,col,saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int ara1[5][5]={{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500},{1000,2000,3000,4000,5000},{10000,20000,30000,40000,50000}};
    int ara2[5][5];
    int r,c;
    printf("Content of first array array (ara1):\n");
    for(r=0 ; r<5 ; r++){
        for(c=0 ; c<5 ; c++){
            printf("%d ",ara1[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    //now start copy
    for(r=0 ; r<5 ; r++){
        for(c=0 ; c<5 ; c++){
            ara2[c][r]=ara1[r][c];
        }
    }
    printf("Content of second arrray (ara2): \n");
    for(r=0 ; r<5 ; r++){
        for(c=0 ; c<5 ; c++){
            printf("%d ", ara2[r][c]);
        }
        printf("\n");
    }
    return 0;
}

