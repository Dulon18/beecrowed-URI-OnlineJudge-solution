#include<stdio.h>
int main()
{
      int t,i,x;
      scanf("%d",&t);

      for(i=0 ; i< t;i++)
      {
          scanf("%d",&x);
          if(x==0)
            printf("NULL\n");
          else if (x>0){
                if(x%2==0)
            printf("EVEN POSITIVE\n");
          else
            printf("ODD POSITIVE\n");}
          else if(x<0)
          {
              if(x%2==0)
            printf("EVEN NEGATIVE\n");
          else
            printf("ODD NEGATIVE\n");
          }
      }

return 0;
}
