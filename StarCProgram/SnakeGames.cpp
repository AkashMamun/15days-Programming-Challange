//kbhit(),random()
#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>

int width=20,height=20,gameover;
int x,y,fruitx,fruity,score;

void setup()
{
    gameover=0;
    score=0;
    x=width/2;
    y=height/2;

    label1:
    fruitx=rand()%20;
    if(fruitx==0)
    goto label1;

    label2:
    fruity=rand()%20;
    if(fruity==0)
    goto label2;

}

void draw()
{
    int i,j;
    for(i=0;i<width;i++)
    {
       for(j=0;j<height; j++)
    {
        if(i==0||i==height-1|| j==0||j==width-1){

        printf("*");
        }
        else{
            if(i==x && j==y){
                printf("0");
            }
            else if(i==fruitx && j==fruity){
                printf("F");
            }

            else
            printf(" ");
        }
    }
    printf("\n");
    }

}


int main()
{
    setup();
    draw();


   /* int a=rand()%20;
    printf("%d",a);
    */


    /*char ch;
    while(1)
    {
        if( kbhit() )
        {
            ch=getch();
           printf("Character=%c",ch);
        }
    }
    */

    return 0;
}
