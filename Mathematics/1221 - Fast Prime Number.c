#include <stdio.h>
#include <math.h>

int main(){
    int x, t, i, j;
    long p;
    
    scanf("%d", &x);
    
    for(i = 0; i <x; i++){
            t = 0;
            scanf("%ld", &p);
            
            if(p == 0){
                 printf("%s\n", "Not Prime");
                 continue;
            }
            
            if(p == 1){
                 printf("%s\n", "Not Prime");
                 continue;
            }
            
            if(p == 2){
                 printf("%s\n", "Prime");
                 continue;
            }
            
            for(j = 2; j < sqrt(p)+1; j++){
                    if(p%j == 0) t++;
                    if(t == 2) break;
            }
            
            if(t >= 1) printf("%s\n", "Not Prime");
            else printf("%s\n", "Prime");
    }
    return 0;
}
