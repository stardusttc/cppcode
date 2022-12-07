#include <bits/stdc++.h>
using namespace std;
int n,m,head=1,tail=1,book[105][105],a[105][105];
int sx,sy,ex,ey,d[4][2]={{-1.0},{1,0},{0,1},{0,-1}};
struct node
{
    int x,y,step;
}q[100005];
int bfs()
{
    q[tail].x=sx;
    q[tail].y=sy;
    q[tail].step=0;
    tail++;
    book[sx][sy]=1;//起点入队
    while(head<tail)
    {
        node h=q[head];
        //向右
        for(int i=1;i<=3;i++)
        {
            int tx,ty;
            tx=h.x+d[i][0];
            ty=h.y+d[i][1];
            //
            if(book[tx][ty]==1) continue;//
            if(a[tx][ty]==1) continue;//
            if(tx>n || tx<1 || ty>m ||ty<1) continue;//
            q[tail].x=tx;
            q[tail].y=ty;
            q[tail].step=h.step+1;
            tail++;
            book[tx][ty]=1;
            //
            if(tx==ex && ty==ey)
                return q[tail-1].step;
        }
        head++;
    }
    return -1;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    cin>>sx>>sy>>ex>>ey;
    int t=bfs();
    if(t==-1)
        cout<<"No Way!";
    else
        cout<<t;
    return 0;
}
