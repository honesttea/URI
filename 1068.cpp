#include <iostream>

using namespace std;

int main(){
    string entrada;
    int completo=0, abre=0, fecha=0,t=0;
    while(t<10000){
        cin>>entrada;
        for(int i=0;entrada[i]!='\0';i++){
            if(entrada[i]=='('){
                abre++;
            }
            if(entrada[i]==')'){
                fecha++;
            }
        }

        if(fecha==abre){
            completo=1;
        }

        if(completo==1){
            cout<<"correct"<<endl;
        }
        else{
            cout<<"incorrect"<<endl;
        }
    }
}