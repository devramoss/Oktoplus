#include<iostream>
using namespace std;

int main(){
    int N;
    long long int V;
    cin >> N;
    while(N < 1 || N > 10000)
        cin >> N;

    long long int S[N], aux;
    int igual = 1, igualM=0;

    for(int i = 0; i < N; i++){
        cin >> V;
        while(V < -2147483648 || V > 2147483647)
            cin >> V;
        S[i] = V;
        if(i == 0){
            aux = S[i];
        }
        else{
            if(S[i] == aux)
                igual++;
            else{
                if(igual > igualM)
                    igualM = igual;
                aux = S[i];
                igual = 1;
            }
        }
    }
    if(igual > igualM)
        igualM = igual;
    cout << igualM;
    return 0;
}