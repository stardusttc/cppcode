#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int m,a=0,t=1;
    cin>>m;
    int n=m;
    while(n!=0)
    {
        a=a+n%10*2^(t-1);
        t++;
        n=n/10;
        cout<<n<<' '<<a<<endl;
    }
    if(m%10==1)
        a=a-2;
    cout<<a;
    return 0;
}
