#include <iostream>
#include <cstdio>
#include <windows.h>
using namespace std;
int main()
{
    for(int i=60;i>=0;i--)
    {
        system("cls");
        printf("%d\n",i);
        Sleep(1*1000);
    }
    return 0;
}


