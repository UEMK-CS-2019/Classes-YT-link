#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n];
    int i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int last=-1,first=-1;
    for(i=1;i<=n;i++)
    {
        if(x!=a[i])
        continue;
        if(first==-1)
        first=i;
        last=i;
    }
    if(first!=-1)
    printf("%d",last);
    else
    printf("%d",-1);
}
