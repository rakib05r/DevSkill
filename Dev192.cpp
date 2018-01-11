#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],arr1[100],i,j,n;
    cin>>n;
    for(i=0,j=0;i<n,j<n;i++,j++){
        cin>>arr[i]>>arr1[j];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+n);
    cout<<arr[0]<<" "<<arr1[0]<<endl;
    return 0;
}
