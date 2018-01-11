#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i,j,dif,a,t,n,sum1,sum2;
    cin>>t;
    for(i=0;i<t;i++){
            sum1=0;
            sum2=0;
        cin>>n;
        for(j=1;j<=n;j++){
            sum1=sum1+(j*j);
            sum2=sum2+j;
        }
        sum2=sum2*sum2;
        dif=sum2-sum1;
        cout<<dif<<endl;
    }
    return 0;
}
