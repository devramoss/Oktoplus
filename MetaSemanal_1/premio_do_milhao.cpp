#include<iostream>
using namespace std;

int main(){
    int N, A, D = 0, S = 0, R = -1;

    cin >> N;
    while(N<1 || N > 1000)
        cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A;
        while(A < 0 || A > 1000000)
            cin >> A;
        S += A;
        D = i + 1;
        if(S>=1000000 && R == -1) // Por que o -1 aqui?
            R = D;
    }
    cout << R << endl;
    return 0;
}