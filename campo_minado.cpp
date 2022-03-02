#include <iostream>

using namespace std;

int main(){
    int campo_minado[50], num_celulas, num_minas = 0;

    cin >> num_celulas;

    for(int i = 0; i < num_celulas; i++)
        cin >> campo_minado[i];

    for(int i = 0; i < num_celulas; i++){
        num_minas = 0;

        if(campo_minado[i] == 1)
            num_minas++;
        if(i > 0)
            if(campo_minado[i-1] == 1)
                num_minas++;
        if(i < num_celulas - 1)
            if(campo_minado[i+1] == 1)
                num_minas++;
                
        cout << num_minas << endl;
    }
    return 0;
}