#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,i,j,t;
    cin>>t;
    for(j=1;j<=t;j++){
            int ck=0;
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(i%a==0 && b%i==0){
        ck++;
        }
    }
    cout<<"Case "<<j<<": "<<ck<<endl;
}
    return 0;
}
