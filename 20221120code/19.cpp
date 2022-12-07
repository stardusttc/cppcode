#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,a,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    printf("%.2lf",sum/n);
    return 0;
}
