#include<stdio.h>
int main(){
    int h, m, s;
    scanf("%d", &s);
    h = 0;
    m = 0;
    h = s / 365;
    s = s % 365;
    m = s / 30;
    s = s % 30;

    printf("%d ano(s)\n", h);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", s);

}
