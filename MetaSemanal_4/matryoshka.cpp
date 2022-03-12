#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int altura_bonecas[100000], vet_aux[100000], quant_bonecas, posic[100000];
    int cont = 0;

    cin >> quant_bonecas;

    for(int i = 0; i < quant_bonecas; i++){
        cin >> altura_bonecas[i];
        vet_aux[i] =  altura_bonecas[i];
    }
    sort(altura_bonecas, altura_bonecas+quant_bonecas);
    

    for(int i = 0; i < quant_bonecas; i++)
        if(vet_aux[i] != altura_bonecas[i]){
            posic[cont] = i;
            cont++;
        }

    cout << cont << endl;

    if(cont != 0)
        for(int i=0; i<cont; i++)
            cout << altura_bonecas[posic[i]] << " ";

    return 0;
}