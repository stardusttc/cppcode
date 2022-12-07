#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    printf("请输入一个整数/Please enter an integer:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("**");
        }
        printf("\n");
    }
    return 0;
}
