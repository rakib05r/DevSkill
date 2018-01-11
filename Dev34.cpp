#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a;
        if(a<10){
            cout<<"1"<<endl;
        }
        else if(a>=10 && a<100){
            cout<<"2"<<endl;
        }
        else if(a>=100 && a<1000){
            cout<<"3"<<endl;
        }
        else if(a>=1000 && a<1002){
            cout<<"4"<<endl;
        }
    }
    return 0;
}
