#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    bool exame=false;

    float a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    // a*=2;
    // b*=3;
    // c*=4;

    a=(a+b+c+d)/4;
    cout<<a<<endl;
    if(a>=7){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(a>=5&&a<7){
        exame=true;
        cout<<"Aluno em exame."<<endl;
    }
    else{
        cout<<"Aluno reprovado."<<endl;
    }


    if(exame){
        cin>>e;
        if(e>=5){
            cout<<"Aluno aprovado."<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
        }
    }
    return 0;
}