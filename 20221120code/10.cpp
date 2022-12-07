#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char a[10];
    int sum=0;
    cin>>a;
    for(int i=0;i<=7;i++)
    {
        if(a[i]=='1')
        {
            sum++;
        }
    }
    cout<<sum;
    return 0;
}

