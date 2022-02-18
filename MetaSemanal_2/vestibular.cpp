#include <iostream>
using namespace std;

int main(){
    int N, pontuacao = 0;
    cin >> N;
    while(N < 1 || N > 80)
        cin >> N;

    char gabarito[N], respostas[N];
    char alternativa;

    for(int i = 0; i<N; i++){
        cin >> alternativa;
        while(alternativa != 'A' && alternativa != 'B' && alternativa != 'C' && alternativa != 'D' && alternativa != 'E')
            cin >> alternativa;
        gabarito[i] = alternativa;
    }
    for(int j = 0; j<N; j++){
        cin >> alternativa;
        while(alternativa != 'A' && alternativa != 'B' && alternativa != 'C' && alternativa != 'D' && alternativa != 'E')
            cin >> alternativa;
        respostas[j] = alternativa;
        if(gabarito[j] == respostas[j])
            pontuacao++;
    }
    cout << pontuacao << endl;

    return 0;
}