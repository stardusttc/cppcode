#include <bits/stdc++.h>
using namespace std;
int zs(int t)
{
    for(int i=2;i<=sqrt(t);i++)
    {
        if(t%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string a;
    getline(cin,a);
    int m=0,n=0;
    for(int i=0;i<a.size();i++)
    {
        if('a'<=a[i]&&a[i]<='z')
        {
            m++;
        }
        else if('A'<=a[i]&&a[i]<='Z')
        {
            n++;
        }
    }
    if(zs(abs(n-m))==0)
    {
        cout<<"Correct option"<<endl<<n-m;
    }
    else
    {
        cout<<"No Answer"<<endl<<"0";
        
    }
    return 0;
}
