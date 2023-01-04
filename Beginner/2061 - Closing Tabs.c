#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    char temp[10];
    scanf("%d %d", &n, &m);
    int c = n;
    while(m--)
    {
        scanf("%s", temp);
        if(temp[0] == 'f') c++;
        else c--;
    }
    printf("%d\n", c);
    return 0;
}
