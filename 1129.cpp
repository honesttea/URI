#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,e;
    int entrada=1, n;
    char resposta;
    while(entrada!=0){
        cin>>entrada;
        for(int i = 0;i<entrada && entrada!=0;i++){
            n=0;
            cin>>a;
            cin>>b;
            cin>>c;
            cin>>d;
            cin>>e;
            
            if(a<=127){
                n++;
                resposta = 'A';
            }
            if(b<=127){
                n++;
                resposta = 'B';
            }
            if(c<=127){
                n++;
                resposta = 'C';
            }
            if(d<=127){
                n++;
                resposta = 'D';
            }
            if(e<=127){
                n++;
                resposta = 'E';
            }

            if( n>1 || n==0 ){
                resposta='*';
            }

            cout<<resposta<<endl;
        }
    }
    return 0;
}