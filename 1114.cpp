#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a;
    bool b=true;
    while(b){

        cin>>a;
        
        if(a==2002){
            cout<<"Acesso Permitido"<<endl;
            b=false;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}