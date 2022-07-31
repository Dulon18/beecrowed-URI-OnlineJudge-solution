#include<stdio.h>
int main()
{
    int i, x ,N[10];
    scanf("%d", &x);
    for(i=0;i<10;i++)
    {
        N[i] = x;
        printf("N[%d] = %d\n", i , x);
        x += x ;
    }
}
