#include<bits/stdc++.h>
#include<conio.h>
int width=20,height=20,gameover;
int x,y,fruitx,fruity,score,flag;
void setup()
{
    x=width/2;
    y=height/2;
    gameover=0;

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
    system("cls");
    for(i=0;i<width;i++){
            for(j=0;j<height;j++){
                    if(i==0||i==height-1||j==0||j==width-1){
            printf("*");
            }
            else{
                    if(i==x && j==y){
                printf("0");
                    }
                    else if(i==fruitx && j==fruity){
                        printf("F");
                    }
                    else{
                        printf(" ");
                    }
            }

    }
    printf("\n");
    }
}

void input()
{
    if(kbhit()){
        switch(getch()){
    case 'a':
        flag=1;
        break;

    case 's':
        flag=2;
        break;

    case 'w':
        flag=3;
        break;

    case 'z':
        flag=4;
        break;

    case 'x':
        gameover=1;
        break;
        }
    }


}
void makelogic()
{
    switch(flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }
}

int main()
{
    setup();

    while(1)
        {
            draw();
            input();
            makelogic();

    }
    return 0;
}
