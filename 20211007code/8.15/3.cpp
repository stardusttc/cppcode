#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
int main()
{
    int a;
    printf("�������������");
    scanf("%d",&a);
    for(int j=a-1;j>=0;j--)
    {
        for(int i=59;i>=0;i--)
        {
            system("cls");
            printf("%d��%d��\n",j,i);
            Sleep(1*1000);
        }
    }
    system("cls");
    printf("ʱ�䵽");
    return 0;
}



