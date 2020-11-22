#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> impar;
    vector <int> par;
    int a=0,b,c=0,d=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        if(b%2==0){
            par.push_back(b);
        }
        else{
            impar.push_back(b);
        }
    }
    sort(par.begin(),par.end());
    sort(impar.begin(),impar.end());
    for(int i=0; i<par.size();i++){
        cout<<par.at(i)<<endl;
    }
    
    for (auto i = impar.rbegin(); i != impar.rend(); i++){
        cout << *i <<endl;
    } 
    return 0;
}