#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a;
    for(b=1;b<=a;b++){
        for(c=a;  c>=2*b-1; c--){
                cout<<" ";
                }
        for(d=1;d<=b;d++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
