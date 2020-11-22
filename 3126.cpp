#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int entrada,total=0, valor;
    cin>>entrada;
    for(int i = 0;i<entrada;i++){
        cin>>valor;
        total+=valor;
    }
    cout<<total<<endl;
    return 0;
}