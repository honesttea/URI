#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a;
    double x,y;
    cin>>a;

    for(int i=0;i<a;i++){
        cin>>x;
        cin>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            printf("%.1lf\n",x/y);
        }
    }
    return 0;
}