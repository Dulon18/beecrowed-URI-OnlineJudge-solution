#include <stdio.h>
#include<string.h>

int main()
{
    int c,i;
    char res[1000];

    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        scanf("\n");
        scanf("%[^\n]%*c",res);
        printf("gzuz\n");
    }

    return 0;
}
