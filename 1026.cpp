#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int  entrada1,entrada2,tamanho1,tamanho2;  
    char saida1[32];
    char saida2[32];

    for(int i=0;i<32;i++){
        saida1[i]=0;
        saida2[i]=0;
    }    
    vector <int> saida3;    
    cin>>entrada1;    
    for(int i=31; entrada1>0; i--){    
        saida1[i]=entrada1%2;    
        entrada1/=2;
    }
    for(int i=31; entrada2>0; i--){    
        saida2[i]=entrada2%2;    
        entrada2/=2;
    }
    

    for(int i=0;i<32;i++){

    }
    return 0;
}