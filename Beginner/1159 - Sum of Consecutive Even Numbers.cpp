#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,w;

    while(1){
                cin >> x;
                if(x == 0)
                break;

                w = 0;
                if(x%2 == 0)
                    w += x;
                else 
                    w += ++x;

                for(int i = 0; i < 4; i++){
                        x += 2;
                       w += x;
                }
                cout << w <<endl;
    }
    }
