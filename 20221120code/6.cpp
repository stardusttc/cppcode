#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main()
{
    int n,m,hao[5001],fen[5001];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&hao[i],&fen[i]);
    }
    int s=m*1.5;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(fen[i]<fen[j])
            {
                swap(fen[i],fen[j]);
                swap(hao[i],hao[j]);
            }
            else if(fen[i]==fen[j])
            {
                if(hao[i]>hao[j])
                {
                    s=s+1;
                    swap(fen[i],fen[j]);
                    swap(hao[i],hao[j]);
                }
            }
        }
    }
    s=s-1;
    printf("%d %d\n",fen[s],s);
    for(int i=1;i<=s;i++)
    {
        printf("%d %d\n",hao[i],fen[i]);
    }
    return 0;
}
