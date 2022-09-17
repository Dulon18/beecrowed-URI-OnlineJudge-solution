#include <iostream>
using namespace std;
int main() {
 
    int i, a, b,j = 0, k, l, n,x = 0,y = 0,z = 0;
    while(1){
        cin>>k>>l;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        j++;
        if(k > l)
            x++;
        else 
            y++;
        if(k == l)
            z++;
        cin>>n;
        if (n == 1)
            continue;
        if (n == 2)
            break;
    }
    
    cout<<j<<" grenais"<<endl;
    cout<<"Inter:"<<x<<endl;
    cout<<"Gremio:"<<y<<endl;
    cout<<"Empates:"<<z<<endl;
    
    if(x > y)
        cout<<"Inter venceu mais"<<endl;
    else if(y > x)
        cout<<"Gremio venceu mais"<<endl;
    else 
        cout<<"Não houve vencedor"<<endl;
   
    return 0;
}
