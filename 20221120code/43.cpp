#include <iostream>
#include <cstdio>
using namespace std;
int n,m,a[1005][1005],book[1005],s[1005];
int c[1005],cnt=1;
void dfs(int city)
{
	c[city]=cnt;
	cnt++;
    cout<<city<<" ";
    book[city]=1;
    for(int i=1;i<=n;i++)
    {
        if(a[city][i]==1 && book[i]==0)
        {
            dfs(i);
            // cout<<"·µ»Øµ½"<<city<<endl;
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    dfs(1);
    cout << endl;
	for (int i=1;i<=n;i++)
	{
		cout << c[i] << " ";
	}
    return 0;
}
