#include <iostream>

#include <cstdio>

using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("yes");
    }
    else if(a<0)
    {
        printf("no");
    }
    else
    {
        printf("0");
    }
    return 0;
}

