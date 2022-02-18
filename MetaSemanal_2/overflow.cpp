#include <iostream>
using namespace std;

int main(){
    int N, P, Q, R;
    char operador;

    cin >> N;
    while(N < 1 && N > 500.000)
        cin >> N;
    
    cin >> P;
    while(P < 0 || P > 1000)
        cin >> P;
    
    cin >> operador;
    while(operador != '*' && operador != '+')
        cin >> operador;
       
    cin >> Q;
    while(Q < 0 || Q > 1000)
        cin >> Q;    
    
    if(operador == '*')
        R = P * Q;
    else
        R = P + Q;
    if(R > N)
        cout << "OVERFLOW" << endl;
    else    
        cout << "OK" << endl;
    
    return 0;
}