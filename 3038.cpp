#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string entrada;
    while(cin>>entrada){
        for(int i=0;entrada[i]!='\0';i++){
            if(entrada[i]=='@'){
                entrada[i]='a';
            }
            else if(entrada[i]=='&'){
                entrada[i]='e';
            }
            else if(entrada[i]=='!'){
                entrada[i]='i';
            }
            else if(entrada[i]=='*'){
                entrada[i]='o';
            }
            else if(entrada[i]=='#'){
                entrada[i]='u';
            }
        }
        cout<<entrada<<endl;
    }
    return 0;
}