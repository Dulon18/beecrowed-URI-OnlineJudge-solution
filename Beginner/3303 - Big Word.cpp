#include <iostream>
#include <string>
using namespace std;

int main()
{
    string w;
    cin >> w;
    if(w.length() < 10)
    {
        cout << "palavrinha"<<endl;
    }
      
    else if(w.length() >= 10 && w.length() < 20)
    {
       cout << "palavrao"<<endl;
    }      
    return 0;
}
