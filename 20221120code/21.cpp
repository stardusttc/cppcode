#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,w[1001];
    //n宝石个数 m重量限定 w宝石重量
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(w[i]>w[j])
            {
                //从小到大排序
                swap(w[i],w[j]);
            }
        }
    }
    int sum=0,m2=0;
    //sum背包里装的重量 m2背包里的宝石
    for(int i=1;i<=n;i++)
    {
        if(sum+w[i]<=m)
        {
            sum=sum+w[i];
            m2++;
        }
    }
    cout<<m2;
    return 0;
}
