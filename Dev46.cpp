#include <iostream>
using namespace std;

int main() {
	signed long long int t,i,nm1,nm2,avg,sum;
	cin>>t;
	for(i=0;i<t;i++){
        cin>>nm1>>nm2;
        sum=nm1+nm2;
        avg=sum/2;
        cout<<avg<<endl;
	}
	return 0;
}
