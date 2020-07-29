/*
#include<stdio.h>
int main()
{
    int ara[]={10,20,20,40,50,60,70,80,90,100};
    int low_index =0;
    int high_index = 9;
    int mid_index;
    int num = 100;
    while(low_index<=high_index){
        mid_index = (low_index+high_index)/2;
        if(num == ara[mid_index]){
            break;
        }
        if(num <ara[mid_index]){
            high_index = mid_index-1;
        }
        if(num>ara[mid_index]){
            low_index = mid_index+1;
        }
    }
    if(low_index>high_index){
        printf("%d is not in the array\n",num);
    }
    else{
        printf("%d is found in the array. It is the %d th element of the array.\n",ara[mid_index], mid_index);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int ara[]={10,20,20,40,50,60,70,80,90,100};
    int low_index =0;
    int high_index = sizeof(ara)/sizeof(*ara)-1;
    printf("Low in index is 0 \n\nHigh idex is %d\n",high_index);
    printf("\nEnter a number:");
    int mid_index ;
    int num;
    scanf("%d",&num);
    while(low_index<=high_index){
        mid_index=(low_index+high_index)/2;
        if(num ==ara[mid_index]){
            break;
        }
        if(num< ara[mid_index]){
            high_index= mid_index-1;
        }
        if(num> ara[mid_index]){
            low_index = mid_index+1;
        }
    }
    if(low_index>high_index){
        printf("\n%d is not found the in array\n",num);
    }
    else{
        printf("\n%d Found in thae array and this is %d th element of the array\n",ara[mid_index],mid_index);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    char country1[6]={'B','a','n','       ','g','l','a', '\0'};
    printf("%s\n",country1);

    char country2[]={'B','a','n','g','l','a'};
    printf("%s\n",country2);

    char country3[]="Bangla";
    printf("%s\n",country3);

    char *country4= "Bangla";
    printf("%s\n",country4);


}
*/
/*
#include<stdio.h>
int main(){
   char country[] ={'B','a','n','g','l','a'};
   printf("%s\n",country);
   int i,length;
   length=6;
   for(i=0 ; i<length ; i++){
        if(country[i]>= 97 && country[i]<= 122){
            country[i]='A'+(country[i]-'a');
        }
   }
   printf("%s\n",country);
}
*/

#include<stdio.h>
inr main()
{
    char country[] ={'B','a','n','g','l','a'};
    char a = sizeof(country)/sizeof(*country);

    printf("%c",a);
    return 0;
}

/*
#include <stdio.h>
int main()
{
  char s[1000];
  int c = 0;

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0')
    c++;

  printf("Length of the string: %d\n", c);

  return 0;
}
*/
