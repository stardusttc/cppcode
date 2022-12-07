#include <iostream>

#include <cstdio>

using namespace std;
int main()
{
    int a[11],b[11],c[11],a1=0,b1=0,c1=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        a1=a1+a[i];
        b1=b1+b[i];
        c1=c1+c[i];
    }
    a1=a1/n;
    b1=b1/n;
    c1=c1/n;
    cout<<a1<<" "<<b1<<" "<<c1;
    return 0;
}

