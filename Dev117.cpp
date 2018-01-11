#include <iostream>
using namespace std;

int main() {
	long long int t,n;
	cin>>t;
	for(int i=1;i<=t;i++){
        cin>>n;
        n=(n*(n+1))/2;
        n=n*n;
        cout<<"Case "<<i<<": "<<n<<endl;
	}
	return 0;
}
