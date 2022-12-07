#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;
int main()
{
    int a,b,c,d,s1,s2,s3,min=999999;
    cin>>a>>b>>c>>d;
    s1=abs(b-a);
    s2=abs(a-d)+abs(c-b);
    s3=abs(a-c)+abs(d-b);
    if(s1>min) min=s1;
    if(s2>min) min=s2;
    if(s3>min) min=s3;
    return 0;
}

