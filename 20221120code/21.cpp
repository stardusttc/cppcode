#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,w[1001];
    //n��ʯ���� m�����޶� w��ʯ����
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(w[i]>w[j])
            {
                //��С��������
                swap(w[i],w[j]);
            }
        }
    }
    int sum=0,m2=0;
    //sum������װ������ m2������ı�ʯ
    for(int i=1;i<=n;i++)
    {
        if(sum+w[i]<=m)
        {
            sum=sum+w[i];
            m2++;
        }
    }
    cout<<m2;
    return 0;
}
