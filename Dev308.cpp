#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int x,t,i;
    cin>>t;
    for(i=0;i<t;i++){
    cin>>a>>b>>c>>x;
    if(b=="nobo"){
        cout<<"Shuva naya barsha "<<x+650<<endl;
    }
    else if(b=="naya"){
        cout<<"Shuva nobo borsho "<<x-650<<endl;
    }
}
    return 0;
}

