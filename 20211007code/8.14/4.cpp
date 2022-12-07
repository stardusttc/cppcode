#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n=10000;
    for(int i=1;i<=n;i++)
    {
        if(i%7==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
