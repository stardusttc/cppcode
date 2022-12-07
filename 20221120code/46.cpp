#include <bits/stdc++.h>
using namespace std;
int n,a[255][255],book[255][255],cnt,res;
void dfs(int x,int y,int color)
{
	if (x<1 || y<1 || x>n || y>n)
		return;
	if (book[x][y]==1)
		return;
	if (a[x][y]!=color)
		return;
	cnt++;
	book[x][y]=1;
	dfs(x+1,y,color);
	dfs(x,y+1,color);
	dfs(x-1,y,color);
	dfs(x,y-1,color);
	return;
}
int main()
{
	cin >> n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			cin >> a[i][j];
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (book[i][j]==0)
			{
				cnt=0;
				dfs(i,j,a[i][j]);
				res=max(cnt,res);
			}
		}
	}
	cout << res;
	return 0;
}