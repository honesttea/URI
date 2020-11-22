#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector <int> bloco;
    vector <int> organizado;
    int temp;
    int linha, coluna;
    int maior=0, menor=0;
    cin>>linha;
    cin>>coluna;
    int passada=0;
    for(int i=0;i<coluna;i++){
        cin>>temp;
        bloco.push_back(temp);
    }
    organizado = bloco;
    sort(organizado.begin(),organizado.end());
    temp=0;
    for(int i=0;i<coluna;i++){
        for(int j=coluna-1;j>-1;j--){
            if(organizado.at(i)<=bloco.at(j)){
                passada++;
                cout<<"Passada:"<<passada<<endl;
                cout<<"i="<<i+1<<endl;
                cout<<"j="<<j<<endl;
            }
        }
    }
    if(bloco.at(0)==linha){
        passada--;
    }
    if(bloco.at(coluna-1)==linha){
        passada--;
    }

    cout<<passada<<endl;
    return 0;
}