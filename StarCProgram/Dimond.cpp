#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,g,h,i,j;
    cin>>a;
    for(b=1;b<=a; b++){
        for(c=a; c>b; c--){
            cout<<" ";
        }
        {
            for(d=1; d<=2*b-1 ;d++){cout<<"*";}
        }
        cout<<"\n";

    }

    for(b=a-1;b>=1; b--){
        for(c=a; c>b; c--){
            cout<<" ";
        }
        {
            for(d=1; d<=2*b-1 ;d++){cout<<"*";}
        }
        cout<<"\n";

    }

    return 0;

}
