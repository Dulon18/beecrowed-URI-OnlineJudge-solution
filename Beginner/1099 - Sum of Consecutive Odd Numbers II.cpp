#include <iostream>
 using namespace std;

int main(){

    int n,x, y, a,s;
    cin >> n;
    while(true){
                if(n == 0) break;
                cin >> x;
                cin >> y;

                if(x > y){
                     a = x;
                     x = y;
                     y = a;
                }
                s = 0;
                for(int i = x+1; i < y; i++){
                       if(i%2 != 0) s+= i;
                }
                cout << s<< endl;
                n--;
    }
    return 0;
}
