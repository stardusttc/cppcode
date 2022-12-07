#include <iostream>
#include <cstdio>
using namespace std;
long long h[51][51]={0},n;
int aha(int a,int b)//a–– b¡–
{
    if(a<1||b<1)
    {
        return 0;
    }
    if((b==1)||(a==b))
    {
        h[a][b]=1;
    }
    else
    {
        h[a][b]=aha(a-1,b-1)+aha(a-1,b);
    }
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            aha(i,j);
            cout<<h[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}