#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    cin>>a;
    for(b=1;b<=a;b++){
        if(b==1){
            for(c=1;c<=2*a-1;c++){cout<<"*";}
        }
        else
        {
            cout<<"*";
            for(d=1;d<(b-1);d++){cout<<" ";}
            cout<<"*";
            for(e=2*(a-1); e>=2*b; e--){cout<<" ";}
            if(b<a)cout<<"*";
            for(f=1;f<b-1;f++){cout<<" ";}
            cout<<"*";
        }
        cout<<"\n";
    }
for(b=a-1;b>=1;b--){
        if(b==1){
            for(c=1;c<=2*a-1;c++){cout<<"*";}
        }
        else
        {
            cout<<"*";
            for(d=1;d<(b-1);d++){cout<<" ";}
            cout<<"*";
            for(e=2*(a-1); e>=2*b; e--){cout<<" ";}
            if(b<a)cout<<"*";
            for(f=1;f<b-1;f++){cout<<" ";}
            cout<<"*";
        }
        cout<<"\n";
    }
}
