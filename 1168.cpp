#include <iostream>

using namespace std;

//Esse aqui deu erro mas nao faco ideia do pq.
//Tentei uns jeitos diferentes mas ainda n deu.

int main(){
    string numero;
    long int led=0, teste=1;
    cin>>teste;
    for(int j = 0;j<teste;j++){
        cin>>numero;
        led = 0;
        for(int i=0;numero[i]!='\0';i++){
            if(numero[i]=='1'){
                led+=2;
            }
            else if(numero[i]=='2'){
                led+=5;
            }
            else if(numero[i]=='3'){
                led+=5;
            }
            else if(numero[i]=='4'){
                led+=4;
            }
            else if(numero[i]=='5'){
                led+=5;
            }
            else if(numero[i]=='6'){
                led+=6;
            }
            else if(numero[i]=='7'){
                led+=4;
            }
            else if(numero[i]=='8'){
                led+=7;
            }
            else if(numero[i]=='9'){
                led+=6;
            }
            else if(numero[i]=='0'){
                led+=6;
            }
            else{
                led+=0;
            }
        }
        cout<<led<<" leds"<<endl;
    }
}