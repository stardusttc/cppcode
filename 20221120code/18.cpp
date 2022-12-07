#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double n;
    cin>>n;
    for(int i=1;i<=5;i++)
    {
        printf("%.3lf\n",(n+i)*0.165);
    }
    return 0;
}
