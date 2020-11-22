#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int entrada, total=0, temp;
    cin>>entrada;
    for(int i=0;i<entrada;i++){
        cin>>temp;
        total =total + temp - (temp%3);
    }
    cout<<total<<endl;
    return 0;
}