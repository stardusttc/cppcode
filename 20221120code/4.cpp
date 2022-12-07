#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[101],b[101];
    scanf("%s",&a);
    int len=strlen(a)-1;
    int k=len;
    for(int i=0;i<=len;i++)
    {
        b[k]=a[i];
        k--;
    }
    printf("%s",b);
    return 0;
}


