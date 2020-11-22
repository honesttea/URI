#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string entrada;
    int qtd, qtd2;
    int total;
    cin>>qtd2;

    for(int i = 0;i<qtd2;i++){
        cin>>entrada;
        cin>>qtd;
        printf("%d",total);
        for(int j = 0;j<entrada.size();j++){
            if(entrada[j]+qtd>90){
                total=(entrada[j]+qtd+65)%90;
                printf("%c",total);
            }
            else{
                printf("%c",entrada[j]+qtd);
            }
        }
    }

    printf("%d,%d,%d", entrada[0],entrada[1],entrada[2]);

    return 0;
}