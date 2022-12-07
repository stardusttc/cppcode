#include <bits/stdc++.h>
using namespace std;
struct h
{
    char a[11],b[9],n[501],m[501];
    //a年月日 b时分秒 n名字 m内容
};
bool cmp(h a,h b)
{
    if(strcmp(a.a,b.a)==0)
    {
        return strcmp(a.b,b.b)<0;
    }
    return strcmp(a.a,b.a)<0;
}
int main()
{
    h k[1001];
    char n2[501];
    cin>>n2;
    int i=1;
    while(cin>>k[i].a)
    {
        cin>>k[i].b;
        cin>>k[i].n;
        gets(k[i].m);
        i++;
    }
    sort(k+1,k+i,cmp);
    for(int j=1;j<=i-1;j++)
    {
        if(strcmp(k[j].n,n2)==0)
        {
            cout<<k[j].m<<endl;
        }
    }
    return 0;
}
