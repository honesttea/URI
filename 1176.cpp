#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int vetor[61],a,b;
    vetor[0]=0;
    vetor[1]=1;
    for(int j=2;j<61;j++){
        vetor[j]=(j-1)+(j-2);
    }
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        cout<<"Fib("<<b<<") = "<<vetor[b]<<endl;
    }
    return 0;
}