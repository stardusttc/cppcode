#include <bits/stdc++.h>
using namespace std;
struct aha
{
    char n[31];
    int s,m;
    //n名字 s分数 m是否满分
};
aha k[130001];
int main()
{
    //int a=0, b=0,  c=0, d=0,  e=0,  f=0,  g=0,  h=0,  j=0,  k2=0,  l=0,    o=0,    p=0,    q=0,    r=0,    t=0;
    //  1~9 10~19 20~29 30~39 40~49 50~59 60~69 70~79 80~89 90~99 100~109 110~119 120~129 130~139 140~149 150
    int z[16]={0};
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        k[i].m=0;
        cin>>k[i].n>>k[i].s;
        int x=k[i].s/10;
        z[x]++;
        if(k[i].s==150)
        {
            k[i].m=1;
        }
        /*
        if(1<=k[i].s&&k[i].s<=9)
        {
            a++;
        }
        else if(10<=k[i].s&&k[i].s<=19)
        {
            b++;
        }
        else if(20<=k[i].s&&k[i].s<=29)
        {
            c++;
        }
        else if(30<=k[i].s&&k[i].s<=39)
        {
            d++;
        }
        else if(40<=k[i].s&&k[i].s<=49)
        {
            e++;
        }
        else if(50<=k[i].s&&k[i].s<=59)
        {
            f++;
        }
        else if(60<=k[i].s&&k[i].s<=69)
        {
            g++;
        }
        else if(70<=k[i].s&&k[i].s<=79)
        {
            h++;
        }
        else if(80<=k[i].s&&k[i].s<=89)
        {
            j++;
        }
        else if(90<=k[i].s&&k[i].s<=99)
        {
            k2++;
        }
        else if(100<=k[i].s&&k[i].s<=109)
        {
            l++;
        }
        else if(110<=k[i].s&&k[i].s<=119)
        {
            o++;
        }
        else if(120<=k[i].s&&k[i].s<=129)
        {
            p++;
        }
        else if(130<=k[i].s&&k[i].s<=139)
        {
            q++;
        }
        else if(140<=k[i].s&&k[i].s<=149)
        {
            r++;
        }
        else if(k[i].s==150)
        {
            t++;
        }
        */
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(strcmp(k[i].n,k[j].n)>0)
            {
                swap(k[i],k[j]);
            }
        }
    }
    for(int i=0;i<=14;i++)
    {
        cout<<z[i]<<" ";
    }
    cout<<endl;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<j<<" "<<k2<<" "<<l<<" "<<o<<" "<<p<<" "<<q<<" "<<r<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<k[i].n<<" "<<k[i].s<<endl;
    }
    cout<<z[15]<<endl;
    if(z[15]==0)
    {
        cout<<"No";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(k[i].m!=0)
            {
                cout<<k[i].n;
            }
        }
    }
    return 0;
}
