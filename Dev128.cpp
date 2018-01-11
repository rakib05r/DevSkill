#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        c=a*2;
        a=c*c;
        b=b*b;
        j=a-b;
        cout<<"Case "<<i<<": "<<j<<endl;
    }
    return 0;
}
