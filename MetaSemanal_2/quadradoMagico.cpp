#include <iostream>
using namespace std;

int main(){
    int N, soma = 0, somaAux = 0;
    cin >> N;
    int quadrado[N][N];
    
    for(int i = 0; i<N; i++){
        for(int j=0; j<N; j++) 
            cin >> quadrado[i][j];  
    }

    for(int i=0; i<N; i++)
        soma += quadrado[i][i];

    somaAux = soma;
    soma = 0;
        
    for(int i=0; i<N; i++)
        soma += quadrado[i][N-1-i];
    if(soma != somaAux){
        cout << -1;
        exit(1);
    }

    for(int i = 0; i<N; i++){
            soma = 0;
            for(int j=0; j<N; j++) 
                soma += quadrado[i][j];

            if(soma != somaAux){
                cout << -1;
                exit(1);                
            } 
    }
    for(int i = 0; i<N; i++){
            soma = 0;
            for(int j=0; j<N; j++) 
                soma += quadrado[j][i]; 

            if(soma != somaAux) {
                cout << -1;
                exit(1);                
            } 
    }
    cout << soma << endl;

    return 0;
}
