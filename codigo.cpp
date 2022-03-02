#include <iostream>

using namespace std;

int main(){
    int n, quant_padrao = 0, sequencia[10000];
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> sequencia[i];

    for(int i = 0; i < n - 2; i++)
        if(sequencia[i] == 1 && sequencia[i+1] == 0 && sequencia[i+2] == 0)
            quant_padrao++;

    cout << quant_padrao;

    return 0;
}