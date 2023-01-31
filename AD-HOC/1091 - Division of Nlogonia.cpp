#include <iostream>
using namespace std;
int main()
{
   int a, n, m, x, y, i;
   while(1){
             cin>>a;
             if(a == 0) 
                break;
             cin>>n>>m;
             for(i = 0; i < a;i++){
                   cin>>x>>y;
                   if(x == n || y == m)
                    cout<<"divisa"<<endl;
                   else if(x > n && y > m) 
                    cout<<"NE"<<endl;
                   else if(x > n && y < m) 
                    cout<<"SE"<<endl;
                   else if(x < n && y > m) 
                    cout<<"NO"<<endl;
                   else if(x < n && y < m) 
                    cout<<"SO"<<endl;
             }
    }
    return 0;
}
