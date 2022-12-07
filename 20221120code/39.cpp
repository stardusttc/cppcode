#include <bits/stdc++.h>
using namespace std;
struct node {
    int u,v,w;
};
struct node e[100000];
int m=0,n,f[1000],ans,cnt;
bool cmp(node x,node y) {
    return x.w<y.w;
}
int getf(int x) {
    if(f[x]==x) return x;
    else {
        f[x]=getf(f[x]);
        return f[x];
    }
}
int main() {
    cin>>n;
    for(int i=1; i<=n; i++) {
        int w;
        cin >> w;
        m++;
        e[m].u=0;
        e[m].v=i;
        e[m].w=w;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            int w;
            cin >> w;
            if(j<i) {
                m++;
                e[m].u=i;
                e[m].v=j;
                e[m].w=w;
            }
        }
    }
    sort(e+1,e+m+1,cmp);
    for(int i=1; i<=n; i++) f[i]=i;
    for(int i=1; i<=m; i++) {
        int fu,fv;
        fu=getf(e[i].u);
        fv=getf(e[i].v);
        if(fv!=fu) {
            f[fv]=fu;
            ans+=e[i].w;
            cnt++;
            if(cnt==n) break;
        }
    }
    cout<<ans;
    return 0;
}
