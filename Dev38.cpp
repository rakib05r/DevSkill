#include<bits/stdc++.h>
using namespace std;
int main()
{
    char nm[50];
    int tm[50],i,j,n,max,min;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>nm>>tm[i];
    }
    sort(tm,tm+n);
    return 0;
}
