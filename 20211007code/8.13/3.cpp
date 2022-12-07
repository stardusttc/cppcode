#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int score;
    scanf("%d",&score);
    if(score>=90)
    {
        printf("Excellent");
    }
    else if(score>=60 && score<90)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
