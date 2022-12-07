#include <bits/stdc++.h>
using namespace std;
int a[150000000];
int main()
{
    int n,max1=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        max1=max(t,max1);
        a[t]++;
    }
    for(int i=1;i<=max1;i++)
    {
        if(a[i]!=0)
        {
            cout<<i<<" "<<a[i]<<endl;
        }
    }
    return 0;
}
