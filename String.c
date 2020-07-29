//string intilization and declaration
/*
#include<stdio.h>
int main()
{
    char str[6];
    str[0]='A';
    str[1]='k';
    str[2]='a';
    str[3]='s';
    str[4]='h';

    //str[5]='\0';
    // This line for ending of string,That's why we use str[6]

    printf("String is : %s\n",str);

}
*/
//Directly intilize and declaration
/*
#include<stdio.h>
int main()
{
    char str[]={'A', 'k', 'a', 's', 'h','\0'};
    printf("String is : %s\n",str);

    //or
    char str2[6]={'A','k','a','s','h'};

    //or
    char str3[]="Akash";
    printf("String 3 is : %s\n",str3);

    //or Multiple line
    char str4[]="My name  is  Akash";
    printf("Strin 4 is : %s\n\n",str4);

    //Or multiple line
    char str5[]={'M', 'y', ' ', 'n','a','m','e', ' ', 'i', 's', ' ', 'A', 'k', 'a', 's', 'h'};
    printf("String 5 is : %s\n", str5);
}
*/
/*
//Input and Display string
#include<stdio.h>
int main()
{
    char str[10];
    printf("Enter your name : ");

    //scanf("%s",str); //scanf can't take space so we use gets()function

    gets(str);
    printf("\nYour Full name is : %s\n",str);
    return 0;
}
*/
//Display string with character wise
/*
#include<stdio.h>
int main()
{
    char name[]="Akash";
    printf("The name is :%s\n",name);
    int i=0;
    while(name[i]!='\0'){
        printf("%c \n",name[i]);
        i++;
    }
}
*/
//Finding length of string use strlen() function
/*
#include<stdio.h>
int main()
{
    char name[]="Akash Mamun";
    int len = strlen(name);
    printf("length is : %d",len);
    return 0;
}
*/

//Finding length of string without using strlen() function
/*
#include<stdio.h>
int main()
{
    char name[100]="akash mamun";
    printf("Enter your Full Name : ");
    gets(name);
    int i=0,length=0;
    while(name[i]!='\0'){
        i++;
        length++;
    }
    printf("Your name length is : %d",length);
    return 0;
}
*/
//Copy string using strcpy() function
/*
#include<stdio.h>
int main()
{
    char str1[]="Akash Mamun";
    char str2[100];
    strcpy(str2,str1);
    printf("First string is : %s\n",str1);
    printf("Copy String is : %s\n",str2);
}
*/
//Concatenation using srrcat() function
/*
#include<stdio.h>
int main()
{
    char str1[]="Akash";
    char str2[] = " Mamun";
    //strcat(str1,str2); WE can write also strcat(str1,"Mamun");
    printf("con is %s\n", str1);

}
*/
//concatenation without strcat() function
/*
#include<stdio.h>
int main()
{
    char str1[50]="My name is ";
    char str2[]="Akash";

    int i=0,j=0,len=0;
    while(str1[i]!='\0'){
        i++;
        len++;
    }

    while(str2[j]!='\0'){
        str1[len+j]=str2[j];
        j++;

    }
    printf("%s",str1);
}

*/
//String compare
/*
#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter first String : ");
    gets(str1);
    printf("Enter second String : ");
    gets(str2);
    int d= strcmp(str1,str2);
    if(d==0){
        printf("String is equal!");
    }
    else{
        printf("String is not equal");
    }
}
*/
// we see string reverse!
/*
#include<stdio.h>
int main()
{
    char str[]="Bangladesh";
    printf("This String is :%s\n",str);
    strrev(str);
    printf("The reverse String is ; %s\n",str);
    return 0;
}
*/
/*
//Without Function String reverse
/*
#include<stdio.h>
int main()
{
    char str1[100]="Bangladesh";
    char str2[100];
    int i=0,j,len=0;
    while(str1[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1 ; i>=0; i--,j++){
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("The reverse string is : %s",str2);
    return 0;
}
*/

//string palindrome
/*
#include<stdio.h>
int main()
{
    char str1[100]="madam";
    printf("Input string is : %s\n",str1);
    char str2[100];
    int i=0,j,len=0;
    while((str1[i])!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1 ; i>=0 ; i--,j++){
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("Reverse string is : %s\n",str2);
    char d=strcmp(str1,str2);
    if(d==0){
        printf("String is palindrome\n");
    }
    else{
        printf("String is not palindrome\n");
    }
    getch();
}
*/
//string swapping
/*
#include<stdio.h>
int main(){
    char str1[20]="Bangladesh";
    char str2[20]="India";
    char temp[20];
    printf("Before Swapping String1 is : %s\n",str1);
    printf("Before Swapping String2 is : %s\n\n",str2);


    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("After Swapping String1 is : %s\n",str1);
    printf("After Swapping String2 is : %s\n",str2);

}
*/
//String | strupr() and strlwr()
/*
#include<stdio.h>
int main()
{
    char str1[]="Akash";
    printf("Input word is : %s\n\n",str1);
    strupr(str1);
    printf("Upper case is : %s\n",str1);
    strlwr(str1);
    printf("Lower Case is : %s\n",str1);
    return 0;
}
*/

//Number of vowels, consonants, words, digits and other

#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;
    printf("Enter a String : ");
    gets(str);
    i=vowel=consonant=digit=word=other=0;
    while((ch=str[i])!='\0'){

        if(ch =='a' || ch=='e' || ch=='i' || ch=='o' ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' ch=='U')
           vowel++;

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;

        else if( ch>='0' && ch<='9')
            digit++;

        else if( ch==' ')
            word++;

        else
            other++;

        i++;
        }
        word++;

    printf("Number of vowel is: %d\n",vowel);
    printf("Number of vowel is: %d\n",consonant);
    printf("Number of vowel is: %d\n",digit);
    printf("Number of vowel is: %d\n",word);
    printf("Number of vowel is: %d\n",other);
}

// Number of capital-small letters, digits
/*
#include<stdio.h>
int main()
{
    char str[100];
    int i,capital,small,digit;
    i=capital=small=digit=0;

    printf("Enter a string value: ");
    gets(str);

    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90)
            capital++;
        else if(str[i]>=97 && str[i]<=122 )
            small++;
        else if(str[i]>=48 && str[i]<=57)
            digit++;
        i++;
    }
    printf("Number of capital letter is : %d\n",capital);
    printf("Number of Small letter is : %d\n",small);
    printf("Number of Digit letter is : %d\n",digit);
}
*/
