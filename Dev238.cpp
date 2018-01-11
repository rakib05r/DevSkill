#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long int t,n,i,j,sum;
	cin>>t;
	for(i=0;i<t;i++)
    {   sum=0;
        cin>>n;
        for(j=2;j<=n;j=j+2){
            if(n%j==0){
                sum=sum+j;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
