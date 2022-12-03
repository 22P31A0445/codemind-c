#include<stdio.h>
int bridge(int x,int y,int z)
{
    int r;
    r=(z-y)/x;
    return r;
}
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a=bridge(x,y,z);
    printf("%d",a);
}