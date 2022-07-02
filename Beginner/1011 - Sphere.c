#include<stdio.h>
int main()
{   int R ;
    double pi = 3.14159;
    double v ;
     
    scanf("%d",&R);
    v = ((4.0/3) * pi * R * R * R );
    printf("VOLUME = %.3lf\n",v);
}
