#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string times[20];
    int entrada;
    do{
        cin>>entrada;
        for(int i=0;i<entrada;i++){
            cin>>times[i];
        }
        for(int i=0;i<20;i++){
            cout<<times[i]<<endl;
        }
    }while(entrada!=0);
    
    return 0;
}