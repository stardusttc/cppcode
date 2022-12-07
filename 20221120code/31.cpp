#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=1;
    cin>>n;
    string s[30000];
    for(int i=1;i<=n;i++)
    {
        string a;
        cin>>a;
        if(a=="add")
        {
            cin>>s[t];
            t++;
        }
        else if(a=="find")
        {
            int flag=0;
            string p;
            getline(cin,p);
            for(int i=1;i<=t;i++)
            {
                if(s[i]==p)
                {
                    cout<<"yes";
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"no";
            }
        }
    }
    return 0;
}