#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[11][11],b[11];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

