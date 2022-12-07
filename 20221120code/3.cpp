#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[101],b[101];
    cin>>a;
    int len=strlen(a)-1;
    int k=len,flag=1;
    for(int i=0;i<=len;i++)
    {
        b[k]=a[i];
        k--;
    }
    for (int i=0;i<=len;i++)
    {
        if(a[i]!=b[i])
        {
            flag=0;
            break;
        }
        else if(a[i]==b[i])
        {
            flag++;
        }
    }
    if(flag==len+2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}


