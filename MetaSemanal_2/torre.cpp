#include <iostream>
using namespace std;

int main(){
    int pesos[1000], N, soma, maior = 0;
    cin >> N;
    int tabuleiro[N][N];
    int L[N], C[N];

    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            cin >> tabuleiro[i][j];

    for(int i = 0; i<N; i++){
        L[i] = 0;
        for(int j = 0; j<N; j++)
                L[i] += tabuleiro[i][j];
    }
    for(int i =0; i<N; i++){
        C[i] = 0;
        for(int j = 0; j<N; j++)
                C[i] += tabuleiro[j][i]; 
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j< N; j++){
            soma = (L[i] + C[j]) - (2*tabuleiro[i][j]);
            if(soma > maior)
                maior = soma;
        }
    }
    cout << maior << endl;
}