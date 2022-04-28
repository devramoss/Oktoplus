#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

bool ehMaior(pair<string, int> aluno_1, pair<string, int> aluno_2){
    return aluno_1.second >= aluno_2.second;
}

int main(){
    int N, T, i=0, habilidade, x=1;
    string nome;
    vector<pair<string, int>> alunos;
    vector<string> times[1005];

    cin >> N >> T;

    for(i=0; i<N; i++){
        cin >> nome >> habilidade;
        alunos.push_back(make_pair(nome, habilidade));
    }

    sort(alunos.begin(), alunos.end(), ehMaior);

    for(i=0; i<alunos.size(); i++){
        times[x].push_back(alunos[i].first);
        x++;

        if(x > T)
            x = 1;
    }

    for(i=1; i<=T; i++){
        cout << "Time " << i << endl;

        sort(times[i].begin(), times[i].end());
        
        for(int j=0; j<times[i].size(); j++)
            cout << times[i][j] << endl;

        cout << endl;
    }

    return 0;
}