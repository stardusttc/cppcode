#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a,b;
}k[1000005];
bool cmp(node p,node q)
{
    return p.b<q.b;
}
int main()
{
    int n,cnt=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k[i].a>>k[i].b;
    }
    sort(k+1,k+n+1,cmp);
    int end=k[1].b;
    for(int i=2;i<=n;i++)
    {
        if(end<=k[i].a)
        {
            cnt++;
            end=k[i].b;
        }
    }
    cout<<cnt;
    return 0;
}
