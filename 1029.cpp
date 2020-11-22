#include <bits/stdc++.h>
 
using namespace std;

int fibonacci(int n, int *k){
    *k=*k+1;
    if(n>1){
        return fibonacci(n-1,k)+fibonacci(n-2,k);
    }
    else{
        return n;
    }
}

int main() {
    int n, chamadas=0, resultadoLOL, entrada;
    cin>>entrada;
    for(int i=0;i<entrada;i++){
        resultadoLOL=0;
        cin>>n;
        chamadas = fibonacci(n,&resultadoLOL);
        cout<<"fib("<<n<<") = "<<resultadoLOL-1<<" calls = "<<chamadas<<endl;
    }
    return 0;
}