#include <bits/stdc++.h>
using namespace std;
struct s
{
    int a,b;
};
bool cmp(s a,s b)
{
    if(a.a==b.a)
    {
        return a.b<b.b;
    }
    return a.a<b.a;
}
s k[1000001];
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>k[i].a>>k[i].b;
    }
    sort(k+1,k+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<k[i].a<<" "<<k[i].b<<endl;
    }
    return 0;
}

