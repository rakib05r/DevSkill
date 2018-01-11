#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int l,i,j,ck;
    cin>>a;
    l=a.size();
    for(i=0,j=l;i<l,j>=0;i++,j--){
        if(a[i]==a[j]){
            ck++;
        }
    }
    if(ck==l){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
