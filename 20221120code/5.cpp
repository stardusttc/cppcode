#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int a[101],b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
        for(int j=i+1;j<=n;j++)
        {
            while(a[i]==a[j])
            {
                for(int k=j;k<=n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }
    printf("%d\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
