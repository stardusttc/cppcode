#include <bits/stdc++.h>
using namespace std;
int n,m,sx,sy;
char a[1005][1005];
char color='0';
int ans;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
void dfs(int x,int y)
{
    a[x][y]=color;
    for(int i=0;i<4;i++)
    {
        int nextx=x,nexty=y;
        nextx=nextx+dx[i];
        nexty=nexty+dy[i];
        if(nextx>n || nextx<1 || nexty>=m || nexty<0)
        {
            continue;
        }
        if(a[nextx][nexty]!='0')
        {
            dfs(nextx,nexty);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int j=1;j<=n;j++)
    {
        cin>>a[j];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!='0')
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans;
    return 0;
}
