#include <iostream>
 
using namespace std;
 
int main() {
 
    int x,y;
    while(1)
    {
        cin>>x;
        if(x==0) 
        break;
        else y=(x*(x+1)*((2*x)+1))/6;
     
        cout<<y<<endl;
    }
    return 0;
}
