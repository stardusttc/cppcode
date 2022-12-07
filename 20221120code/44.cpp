#include <iostream>
#include <cstdio>
using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int n,m,sx,sy,a[105][105],book[105][105],sum=1;
void dfs(int x,int y)
{
    book[x][y]=1;
    for(int i=1;i<4;i++)
    {
        int nextx=x,nexty=y;
        nextx=nextx+dx[i];
        nexty=nexty+dy[i];
        if(nextx>n || nextx<1 || nexty>m || nexty<1)    continue;
        if(a[nextx][nexty]!=0 && book[nextx][nexty]==0)
        {
            sum++;
            dfs(nextx,nexty);
        }
    }
}
int main()
{
    cin>>n>>m>>sx>>sy;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(sx,sy);
    cout<<sum;
    return 0;
}
