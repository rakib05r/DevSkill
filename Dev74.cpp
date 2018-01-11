#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t,i,j,nm,n;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        nm=n*3;
        if(n%2==0){
                cout<<"Case #"<<i<<": ";
            for(j=nm;j>=nm-2;j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"Case #"<<i<<": ";
            for(j=nm-2;j<=nm;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
