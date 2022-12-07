#include <bits/stdc++.h>
using namespace std;
struct node
{
    int s,e;
}k[5001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k[i].s>>k[i].e;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(k[i].s>k[j].s)
            {
                swap(k[i],k[j]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<k[i].s<<" "<<k[i].e<<endl;
    }
    return 0;
}
