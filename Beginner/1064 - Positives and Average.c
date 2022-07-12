
#include<stdio.h>
int main()
{
    float avg,n,m=0;
    int i,c=0;
    for(i=0; i<6; i++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            m+=n;
            c++;
        }

    }
    avg = m/c;
    printf("%d valores positivos\n%.1f\n",c,avg);

    return 0;

}
