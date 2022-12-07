#include <bits/stdc++.h>
using namespace std;
struct aha
{
    int a,d;
    double c;
    //a攻击力 d防御力 c综合战斗力  
};
int main()
{
    int n,m;
    //n怪兽的数量 m需要消灭的怪兽数量 
    aha h[5001];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>h[i].a>>h[i].d;
        h[i].c=h[i].a*0.6+h[i].d*0.4;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(h[i].c>h[j].c||(h[i].c==h[j].c&&h[i].a>h[j].a))
            {
                swap(h[i],h[j]);
            }
        }
    }
    /*
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<=n;j++)
        {
            h[j].c=0;
			if(h[i].b<h[j].b)
            {
                h[j].c++;
            }
        }
    }
    */
    for(int i=1;i<=m;i++)
    {
        printf("%.2lf %d %d\n",h[i].c,h[i].a,h[i].d);
    }
    return 0;
}
