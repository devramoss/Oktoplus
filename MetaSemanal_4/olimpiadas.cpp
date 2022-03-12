#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Pais {
    int id, ouro, prata, bronze;
};

int funcao_comp(Pais A, Pais B) {
    if(A.ouro != B.ouro)
        return A.ouro > B.ouro;
    if(A.prata != B.prata)
        return A.prata > B.prata;
    if(A.bronze != B.bronze)
        return A.bronze > B.bronze;

    return A.id < B.id;
}

int main(){
    Pais p[105];

    int N, M;
    int O, P, B;
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        p[i].id = i + 1;
        p[i].ouro = 0;
        p[i].prata = 0;
        p[i].bronze = 0;
    }
    
    for(int i = 0; i < M; i++){
        cin >> O >> P >> B;

        p[O-1].ouro++;
        p[P-1].prata++;
        p[B-1].bronze++;
    }

    sort(p, p+N, funcao_comp);
    
    for(int i = 0; i < N; i++)
        cout << p[i].id << " ";

    cout << endl;
    return 0;
}