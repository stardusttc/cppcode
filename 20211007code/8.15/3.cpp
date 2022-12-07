#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
int main()
{
    int a;
    printf("请输入分钟数：");
    scanf("%d",&a);
    for(int j=a-1;j>=0;j--)
    {
        for(int i=59;i>=0;i--)
        {
            system("cls");
            printf("%d分%d秒\n",j,i);
            Sleep(1*1000);
        }
    }
    system("cls");
    printf("时间到");
    return 0;
}



