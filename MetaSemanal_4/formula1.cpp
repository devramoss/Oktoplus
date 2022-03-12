#include <iostream>
#include <algorithm>

using namespace std;

struct Piloto{
    int id, colocacoes[105], pontos;
};    

int ordenar_pilotos(Piloto a, Piloto b){
    if(a.pontos != b.pontos){
        return a.pontos > b.pontos;
    }
    return a.id < b.id;
}

int main(){
    int corridas, pilotos, colocacao;
    cin >> corridas >> pilotos;

    while (corridas != 0){
        Piloto p[pilotos];

        for(int i = 0; i < corridas; i++){
            for(int j = 0; j < pilotos; j++){
                cin >> colocacao;
                p[j].id = j+1;
                p[j].pontos = 0;
                p[j].colocacoes[i] = colocacao;
            }
        }
        
        int s, k, pts;
        cin >> s;

        for(int i = 0; i<s; i++){
            cin >> k;

            for(int j = 0; j < k; j++){
                cin >> pts;

                for(int l = 0; l < pilotos; l++){
                    for(int m = 0; m < corridas; m++){
                        if(p[l].colocacoes[m] == j+1)
                            p[l].pontos += pts;
                    }
                }
            }

            sort(p, p+pilotos, ordenar_pilotos);

            int pts_aux = p[0].pontos;
            
            for(int q = 0; q < pilotos; q++){
                if(p[q].pontos == pts_aux){
                    cout << p[q].id << " ";
                }
                p[q].pontos = 0;
            }
            cout << endl;
        }
        cin >> corridas >> pilotos;
    }

    return 0;
}