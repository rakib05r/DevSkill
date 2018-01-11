#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,s,g,r,rr,t,i,bs,ss,gs,rs,max=0;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>b>>s>>g>>r;
        bs=b*1;
        ss=s*3;
        gs=g*10;
        rs=r*-5;
        rr=bs+ss+gs+rs;
        if(rr<=0){
                rr=rr*-1;
            cout<<"Player "<<i<<": 0"<<endl;
        }
        else{
        cout<<"Player "<<i<<": "<<rr<<endl;
        }
        if(rr>max){
            max=rr;
        }
    }
    cout<<"High score = "<<max<<endl;
    return 0;
}
