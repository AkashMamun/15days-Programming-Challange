//HELLOW PROGRAMMER TODAY WE LEARN ABOUT CONDITIONAL LOGIC.LET'S WRITE CODE!

//A program is about Find a number is positive or negative?
/*
#include<stdio.h>
int main()
{
    int n;
    n=-10;
    if(n>=0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is negative\n");
    }
    return 0;
}
*/

//IT'S TOO MUCH EASY ,ISN'T IT? WRITE OUR NEXT PROGRAM!

//SAME PROGRAM WITHOUT USE OF =SYYMBOL IN CONDITION
/*
#include<stdio.h>
int main()
{
    int n;
    n=-5;
    if(n<0){
        printf("The number is Negative\n");
    }
    else{
        printf("The number is Positve\n");
    }
    return 0;
}
*/
/* Here if you have any question is that actually 0 is not positive or negative!
Then see the next program */
/*
#include<stdio.h>
int main()
{
    int n=10;
    if(n<0){
        printf("The number is Negative\n");
    }
    else if(n>0){
        printf("The number is Positive\n");
    }
    else if(n == 0){
        printf("The number is Zero!\n");
    }
    return 0;
}
*/

/*
Now we write a program with input value, and tell you that
our last condition is not need bcz
if two condition is wrong then work last one,Understand!
*/

/*
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("THe number is Positive\n");
    }
    else if(n<0){
        printf("The number is Negative\n");
    }
    else{
            printf("THe number is Zero!\n");
    }
    return 0;
}
*/
//BOOM YOU CAN DO IT!NOW SEE ANOTHER PROGRAM,WRITE NOW!!!

// A PROGRAM ABOUT GRATER THAN WITH ANY NUMBER

#include<stdio.h>
int main()
{
    int n=15;
    if(n>10){
        printf("The number is greater than 10\n");
    }
    return 0;
}


//Now compare  with this program!

/*
#include<stdio.h>
int main()
{
    int n=10;
    if(n<30){
        printf("n is less than 30.\n");
    }
    else if(n<50){
        printf("n is less than 50.\n");
    }
    return 0;
}
*/
//Both wre two but compiler see the first one!

//BOOOM now we write a program for add or evn number is it?

/*
#include<stdio.h>
int main()
{
    int number ,remainder;
    printf("Enter a positive or negative value\n");
    scanf("%d",&number);
    remainder= number%2;
    if(remainder == 0){
        printf("THe number is even\n");
    }
    else {
        printf("The number is odd\n");
    }
    return 0;
}
*/
//Now we write same program without using remainder!
/*
#include<stdio.h>
int main()
{
    int number=9;
    if(number%2 ==0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}
*/

//Now we use && operator  to find our lower case letter or upper case letter!BOOOM!

/*
#include<stdio.h>
int main()
{
    char  ch;
    printf("Enter any Upper or Lower case letter:\n");
    ch=getchar();
    if(ch>='a' && ch<='z'){
        printf("%c is lower case\n",ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c is upper case\n",ch);
    }
    return 0;
}
*/
//Now we use OR operator(||) for our next program!
/*
#include<stdio.h>
int main()
{
    int num=5;
    if(num>=1 || num<=10){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;

}
*/

// Now we use or operator to find out vowel or consonant!
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a chracter value\n");
    ch=getchar();

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("The character is vowel!\n");
    }
    else {
        printf("The character is consonant\n");
    }
    return 0;

}
*/
// If  you like my article then like,comment and share with your friends!
