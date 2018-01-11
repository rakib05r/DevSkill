#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,ck,rn,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    sum=0;
    ck=0;
    cin>>n;
    while(1)
    {
        cin>>rn;
        sum=sum+rn;
        if(rn==0){
            ck++;
        }
        if(ck==n){
            cout<<"Case "<<i<<": "<<sum<<endl;
            break;
        }
    }
}
    return 0;
}
