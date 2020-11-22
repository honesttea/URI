#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=1,k,m=0;
    int entrada;
    int passo;
    int resultada;
    vector <int> numero;
    cin>>entrada;
    cin>>passo;
    for(int i=0;i<entrada;i++){
        numero.push_back(i);
    }
    m=entrada;
    while(m>1){
        if((n%passo)==0){
            numero[n%entrada]=0;
            m--;
        }
        n++;
    }
    for(int i=0;i<entrada;i++){
        if(numero[i]>0){
            cout<<numero[i]<<endl;
        }
    }
    return 0;
}