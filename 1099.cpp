#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a,x,y,z,temp=0;
    cin>>a;
    for(int i=0;i<a;i++){
        z=0;
        cin>>x;
        cin>>y;

        if(y<x){
            temp=y;
            y=x;
            x=temp;
        }
        x+=1;
        for(int j=x;j<y;j++){
            if(j%2!=0){
                z=z+j;
            }
        }
        cout<<z<<endl;
    }
    return 0;
}