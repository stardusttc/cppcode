#include <bits/stdc++.h>
using namespace std;
struct node
{
    int p,a;
    //p��ũ��ţ�̵��� a��ũ������ṩ��ţ����
};
int main()
{
    int n,m;
    cin>>n>>m;
    //n��Ҫ��ţ������ m��ũ����
    node s[5001];
    for(int i=1;i<=m;i++)
    {
        cin>>s[i].p>>s[i].a;
    }
    for(int i=1;i<=m-1;i++)
    {
        for(int j=i+1;j<=m;j++)
        {
            if(s[i].p>s[j].p)
            {
                swap(s[i],s[j]);
            }
        }
    }
    int n2=n,p=0;
    //n2����Ҫװ��ţ�� p�۸�
    for(int i=1;i<=m;i++)
    {
        if(n2!=0&&n2>=s[i].a)
        {
            p=p+s[i].p*s[i].a;
            n2=n2-s[i].a;
        }
        else
        {
            p=p+n2*s[i].p;
            n2=0;
            break;
        }
    }
    cout<<p;
    return 0;
}
