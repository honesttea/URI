#include <iostream>
 
using namespace std;
 
int main() {
    int entrada;
    cin>>entrada;
    if(entrada<=800){
        cout<<"1"<<endl;
    }
    else if(entrada>800 && entrada<=1400){
        cout<<"2"<<endl;
    }
    else if(entrada>1400){
        cout<<"3"<<endl;
    }
    return 0;
}