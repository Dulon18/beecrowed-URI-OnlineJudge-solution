#include<bits/stdc++.h>
using namespace std;
int main()
{
    float N1,N2,N3,N4,N,a,b;
    cin>>N1>>N2>>N3>>N4;
    a = ((N1*2)+(N2*3)+(N3*4)+N4)/10;
    cout<<fixed<<setprecision(1)<<"Media: "<<a<<endl;
    if(a >= 7.0)
        cout<<"Aluno aprovado."<<endl;
    else if(a<5.0)
        cout<<"Aluno reprovado."<<endl;

    else

    {    if(a>=5.0 && a<=6.9)
        {
        cout<<"Aluno em exame."<<endl;
        cin>>N;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<N<<endl;
        b = (a+N)/2;
         if(b>=5.0)
        cout<<"Aluno aprovado."<<endl;}
        else if(b<=4.9)
        cout<<"Aluno reprovado."<<endl;
        cout<<fixed<<setprecision(1)<<"Media final: "<<b<<endl;
    }

}

