#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50],i,n,j,sum1=0,sum2=0,dif,t;
    cin>>t;
    for(j=0;j<t;j++){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum1=sum1+arr[i];
    }
    for(i=0;i<n;i++){
        arr[i]=arr[i]-i;
    }
    for(i=0;i<n;i++){
        sum2=sum2+arr[i];
    }
    dif=sum1-sum2;
    cout<<dif<<endl;
    }
    return 0;
}
