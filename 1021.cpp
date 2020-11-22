#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    
    int notas[7], moedas[7];
    int entrada=0, contador=0,entrada1=0;
    for(int i=0;i<7;i++){
        notas[i]=0;
        moedas[i]=0;
    }
    scanf("%d.%d",&entrada,&entrada1);
    if(entrada>=100){
        while(entrada>=100){
            entrada=entrada-100;
            notas[0]+=1;
        }
    }

    if(entrada>=50){
        while(entrada>=50){
            entrada=entrada-50;
            notas[1]+=1;
        }
    }

    if(entrada>=20){
        while(entrada>=20){
            entrada=entrada-20;
            notas[2]+=1;
        }
    }
    if(entrada>=10){
        while(entrada>=10){
            entrada=entrada-10;
            notas[3]+=1;
        }
    }
    if(entrada>=5){
        while(entrada>=5){
            entrada=entrada-5;
            notas[4]+=1;
        }
    }
    if(entrada>=2){
        while(entrada>=2){
            entrada=entrada-2;
            notas[5]+=1;
        }
    }
//*********************************************************************************
    if(entrada>=1){
        for(int i=1;i<=entrada;i++){
            if(i%1==0){
                moedas[0]+=1;
            }
        }
        entrada=entrada-(moedas[0]*1.0);
    }
    if(entrada1>=50){
        while(entrada1>=50){
            entrada1=entrada1-50;
            moedas[1]+=1;
        }
    }
    if(entrada1>=25){
        while(entrada1>=25){
            entrada1=entrada1-25;
            moedas[2]+=1;
        }
    }
    if(entrada1>=10){
        while(entrada1>=10){
            entrada1=entrada1-10;
            moedas[3]+=1;
        }
    }
    if(entrada1>=5){
        while(entrada1>=5){
            entrada1=entrada1-5;
            moedas[4]+=1;
        }
    }


    cout<<"NOTAS:"<<endl;
    cout<<notas[0]<<" nota(s) de R$ 100.00"<<endl;
    cout<<notas[1]<<" nota(s) de R$ 50.00"<<endl;
    cout<<notas[2]<<" nota(s) de R$ 20.00"<<endl;
    cout<<notas[3]<<" nota(s) de R$ 10.00"<<endl;
    cout<<notas[4]<<" nota(s) de R$ 5.00"<<endl;
    cout<<notas[5]<<" nota(s) de R$ 2.00"<<endl;

    cout<<"MOEDAS:"<<endl;
    cout<<moedas[0]<<" moeda(s) de R$ 1.00"<<endl;
    cout<<moedas[1]<<" moeda(s) de R$ 0.50"<<endl;
    cout<<moedas[2]<<" moeda(s) de R$ 0.25"<<endl;
    cout<<moedas[3]<<" moeda(s) de R$ 0.10"<<endl;
    cout<<moedas[4]<<" moeda(s) de R$ 0.05"<<endl;
    cout<<entrada1<<" moeda(s) de R$ 0.01"<<endl;
}