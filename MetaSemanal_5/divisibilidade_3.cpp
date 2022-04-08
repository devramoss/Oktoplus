#include <iostream>
#include <string>

using namespace std;

void ehDivisivel(string N){
    int i, somaPar = 0, somaImpar = 0;

    for(i = 0; i<N.length(); i++){
        if(i%2 == 0)
            somaPar += N[i] - '0';
        else
            somaImpar += N[i] - '0';
    }

    if((somaPar - somaImpar)%11 == 0)
        cout << "S";
    else 
        cout << "N";
}

int main(){
    string N;
    cin >> N;

    ehDivisivel(N);
    
    return 0;
}