#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,a[100],k=0,max=0,sum=0,s=1;
    cin>>n;
    while(n!=0)
    {
        a[s]=n%10;
        n=n/10;
        s++;
    }
    for(int i=1;i<=s-1-2;i++)
    {
        k=a[i]*a[i+1]*a[i+2];
        if(k%10>max)
        {
            max=k%10;
        }
        sum=sum+k;
    }
    cout<<max<<" "<<sum%1000;
    return 0;
}
