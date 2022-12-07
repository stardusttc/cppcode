#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],head=0,tail=0,n;
    char s;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=='I')
        {
            int t;
            cin>>t;
            a[tail]=t;
            tail++;
        }
        else if(head<tail)
        {
            head++;
        }
    }
    for(int i=head;i<tail;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}