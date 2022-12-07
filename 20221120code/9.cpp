#include <iostream>

#include <cstdio>

using namespace std;
int main()
{
    int m,n,x[21][21],a,b,c;
    cin>>m>>n;
    for(int i=1;i<=20;i++)
        for(int j=1;j<=20;j++)
            x[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        x[a][b]=c;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<x[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

