#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int n,a,temp, total, maior, nmaior,tirado;
    do{
        vector <int> comprimentos;
        total=0;
        tirado=0;
        maior=0;
        cin>>n;
        cin>>a;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp>maior){
                maior=temp;
                nmaior++;
            }
            total+=temp;
            comprimentos.push_back(temp);
        }
        if(total>a){
            sort(comprimentos.begin(), comprimentos.end());
            while(tirado<a){
                for(int j=comprimentos.size()-1;comprimentos[j]==maior&&tirado<a;j--){
                    if(comprimentos[j]==maior){
                        comprimentos[j]--;
                        tirado++;
                        nmaior--;
                    }
                }
                maior--;
            }
            cout<<maior<<".0000"<<endl;
        }
        else if(total==a&&a>0){
            cout<<":D"<<endl;
        }
        else if(total<a){
            cout<<"-.-"<<endl;
        }
        for(int i=0;i<comprimentos.size();i++){
            cout<<comprimentos[i]<<endl;
        }
    }while(n!=0 && a!=0);
    return 0;
}