#include <iostream>

using namespace std;

int main(){
    int n,p=2,q=0;
    cin>>n;
    while(p<=n){
        q=p*p;
        cout<<p<<"^2 = "<< q <<endl;
        p+=2;
    }
}