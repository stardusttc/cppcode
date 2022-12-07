#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char x;
    scanf("%c",&x);
    if(65<=x&&x<=90)
    {
        printf("upper");
    }
    else if(97<=x&&x<=122)
    {
        printf("lower");
    }
    else if(48<=x&&x<=57)
    {
        printf("number");
    }
    else
    {
        printf("other");
    }
    return 0;
}