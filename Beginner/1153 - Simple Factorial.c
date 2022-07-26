#include <stdio.h>
int main()
{
    int N ,i,fact;
    fact = 1;
    scanf("%d", &N);
    for(i=N;i>1;i = i-1)
    {fact = fact * i;}
    printf("%d\n", fact);
}
