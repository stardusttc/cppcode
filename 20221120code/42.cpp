#include <iostream>
#include <cstdio>
using namespace std;
int a[15][15],n,y[15],place[15],d1[30],d2[30],ans;
void dfs(int x)//��x��
{
    //�жϱ߽�
    if(x==n+1)
    {
        ans++;
        if(ans<=3)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<place[i]<<" ";
            }
            cout<<endl;
        }
    }
    //�������н��
    for(int i=1;i<=n;i++)//��y��
    {
        if(y[i]==0 && d1[x+i]==0 && d2[i-x+n]==0)
        {
            place[x]=i;
            y[i]=1;
            d1[x+i]=1;
            d2[i-x+n]=1;
            dfs(x+1);
            y[i]=0;
            d1[x+i]=0;
            d2[i-x+n]=0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<ans;
    return 0;
}
