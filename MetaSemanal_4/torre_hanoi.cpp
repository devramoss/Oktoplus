#include <iostream>
#include <cmath>

using namespace std; 

int num_trocas(int disc){
    if(disc == 1)
        return 1;
    else    
        return pow(2, disc) - 1;
}

int main(){
    int disc = 1, test = 1;
    
    while(disc != 0){
        cin >> disc;
        if(disc == 0)
            break;
        cout << "Teste " << test << endl;
        cout << num_trocas(disc) << endl;
        test++;
    }
    return 0;
}