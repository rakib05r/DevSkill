#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*string s;
    int a,i,mul,t,sz;
    cin>>t;
    for(int j=0;j<t;j++)
    {
       cin>>s;
       sz=s.size();
        mul=1;
    for(i=1;i<=sz;i++){
        mul=mul*i;
    }
    cout<<mul;
    }*/
    string s;
    int i,j,ck=0;
    cin>>s;
    for(i=0;i<s.size();i++){
        for(j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                ck++;
            }
        }
    }
    cout<<ck;
    return 0;
}
