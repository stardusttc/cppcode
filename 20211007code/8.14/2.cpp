#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    for(int j=n;j>=1;j--)
    {
        printf("%d ",j);
    }
    return 0;
}
