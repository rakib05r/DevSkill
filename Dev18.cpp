#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a[1000];
    int i,j,n,t,m;
    cin>>t;
    for(m=0;m<t;m++){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                }
            }
        }
        for(i=0;i<n;i++){
                if(i==n-1){
                    printf("%0.2f",a[i]);
                }
                else
            printf("%0.2f,",a[i]);
        }
        cout<<endl;
    }
    return 0;
}
