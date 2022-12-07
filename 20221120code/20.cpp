#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,a[101],sum=0,cnt=0,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    p=sum/n;
    for(int i=1;i<=n;i++)
    {
        a[i]=a[i]-p;
    }
    for(int i=1;i<=n-1;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        a[i+1]=a[i+1]+a[i];
        a[i]=0;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
