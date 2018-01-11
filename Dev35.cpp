#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,nm,i,ck;
    cin>>t;
    for(i=1;i<=t;i++){
            ck=0;
        cin>>nm;
        for(int j=1;j<nm;j++){
            if(nm==j*j){
                ck=1;
            }
        }
        if(ck==1){
            cout<<"Case "<<i<<": "<<"YES"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<"NO"<<endl;
        }
    }
    return 0;
}
