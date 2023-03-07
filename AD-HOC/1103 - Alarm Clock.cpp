#include <iostream>
using namespace std;
int main()
{
        int a,b,c,d,result,m,p, s;
    
    while(1){
             
             cin>>a>>b>>c>>d;
             if(a == 0 && b == 0 && c == 0 && d == 0) break;
             
             if(a == 0) p = 24*60 + b;
             else p = a*60 + b;
             
             if(c == 0) s = 24*60 + d;
             else s = c*60 + d;
             
             if(s > p)
             {
                 cout<<s-p;
             }
             
             else{
                result=24*60-(p-s);
                cout<<result; 
             }
             
    }
    
}
