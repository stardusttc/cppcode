#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,t;
    /*
    scanf("%d %d",&a,&b);
    printf("%d %d",b,a);
    */
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
    return 0;
}