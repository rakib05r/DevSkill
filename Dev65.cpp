#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ck,sum,t;
    cin>>t;
    for(j=0;j<t;j++)
    {
        ck=0;
        sum=0;
    cin>>n;
    for(i=1;i<=n;i++){
        ck++;
        sum=sum+i;
        if(sum>=n){
            break;
            }
        }
    cout<<ck<<endl;
    }
    return 0;
}
