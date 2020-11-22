#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int p1,p2;
    bool check=false;
    cin>>p1;
    cin>>p2;
    if(p1>=6&&p2>=6){
        if(p1>=18||p2>=18){
            check=true;
        }
        else if(p1>=14&&p2>=14){
            check=true;
        }
    }
    else{
        check=false;
    }

    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}