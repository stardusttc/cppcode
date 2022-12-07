#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,a[15],max1=-1;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=x;i>=1;i--)
    {
        int t=i,n1=n,cnt=0;
        while(t!=0)
        {
            if(t-a[n1]>=0)
            {
                t=t-a[n1];
                cnt++;
            }
            else
            {
                n1--;
            }
            
        }
        max1=max(max1,cnt);
        cnt=0;
    }
    cout<<max1;
    return 0;
}
