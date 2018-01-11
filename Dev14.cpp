#include<bits/stdc++.h>
using namespace std;
int main()
{
    float ab,bc,cd,ad,a,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
    scanf("%f%f%f",&ab,&bc,&cd);
    a=(ab*ab)+(bc*bc)+(cd*cd);
    ad=sqrt(a);
    printf("%0.2f\n",ad);
    }
    return 0;
}
