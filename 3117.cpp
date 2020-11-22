#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int entrada,b,c,d=0;
    cin>>entrada;
    cin>>b;
    d=b;
    for(int i=0;i<entrada;i++){
        cin>>c;
        if(c<=0){
            d--;
        }
    }
    if(d<=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}   