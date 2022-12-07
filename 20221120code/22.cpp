#include <bits/stdc++.h>
using namespace std;
struct hhh
{
    int w,v;
    double v2;
    //w装备数量 v价值 v2平均价值
};
int main()
{
    int m,n;
    //m重量限定 n种装备
    hhh k[1001];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>k[i].w>>k[i].v;
        k[i].v2=double(k[i].v)/k[i].w;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(k[i].v2<k[j].v2)
            {
                swap(k[i],k[j]);
            }
        }
    }
    int m2=m;
    double v3=0;
    //m2已装入的重量 v3已装入的价值
    for(int i=1;i<=n;i++)
    {
        if(k[i].w<=m2)
        {
            v3=v3+k[i].v;
            m2=m2-k[i].w;
        }
        else
        {
            v3=v3+k[i].v2*m2;
            m2=0;
        }
        if(m2==0)
        {
            break;
        }
    }
    printf("%.2lf",v3);
    return 0;
}
