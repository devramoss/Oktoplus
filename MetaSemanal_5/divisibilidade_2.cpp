#include <iostream>
#include <string>

using namespace std;

void divide_por_4(string num){
    if(num.length() == 1){
        if(num == "0" || num == "4" || num == "8")
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    else{
        string num_aux;
        num_aux.push_back(num[num.length()-2]);
        num_aux.push_back(num[num.length()-1]);

        if(stoi(num_aux) % 4 == 0)
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }
}

void divide_por_9(string num){
    int soma_digitos = 0;

    for(int i = 0; i < num.length(); i++)
        soma_digitos += num[i] - '0';

    if(soma_digitos % 9 == 0)
        cout << 'S' << endl;

    else
        cout << 'N' << endl;
}

void divide_por_25(string num){
    if(num.length() == 1){
        if(num == "0")
            cout << 'S' << endl;
        else
            cout << 'N' << endl;
    }
    else{
        string num_aux;
        num_aux.push_back(num[num.length()-2]);
        num_aux.push_back(num[num.length()-1]);

        if(stoi(num_aux) % 25 == 0)
            cout << 'S';
        else
            cout << 'N';
    }
    cout << endl;
}

int main(){
    string N;
    cin >> N;
    
    divide_por_4(N);
    divide_por_9(N);
    divide_por_25(N);
    return 0;
}