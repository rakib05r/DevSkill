#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hf,m,h,a,b,c,d,e,sum;
        while((scanf("%d%d",&hf,&m)!=EOF)){
        sum=0;
        for(int i=1;i<=m;i++){
        scanf("%d",&h);
        sum=sum+h;
        }
        a=hf/sum;
        if(hf%sum==0){
                if(a==1)
        printf("Project will finish within %d day\n",a);
        else
        printf("Project will finish within %d days\n",a);
        }
        else{
        printf("Project will finish within %d days\n",a+1);
        }
    }
        return 0;
}
