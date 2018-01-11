#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int ar[100],a,b,c,n,sum=0,i,j,k,l,m;
    cin>>n>>a>>b;
    l=a*1;
    m=b*2;
    j=l+m;
    for(i=0;i<n;i++){
        cin>>ar[i];
        sum=sum+ar[i];
    }
    k=sum-j;
    cout<<k;
    return 0;
}
