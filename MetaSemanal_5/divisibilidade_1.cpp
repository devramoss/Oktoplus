#include <iostream>
#include <string>

using namespace std;

void divide_por_2(string num){
    if( (num.back() - '0') % 2 == 0)
        cout << 'S';
    else    
        cout << 'N';
    cout << endl;
}

void divide_por_3(string num){ 
    int soma_digitos = 0; 

    for(int i = 0; i < num.length(); i++) 
        soma_digitos += num[i] - '0'; 
  
   if(soma_digitos % 3 == 0)
        cout << 'S';
   else 
        cout << 'N'; 
   cout << endl;
}

void divide_por_5(string num){
    if(num.back() == '0' || num.back()  == '5')
        cout << 'S';
    else
        cout << 'N';
    cout << endl;
}

int main(){
    string N;
    cin >> N;

    divide_por_2(N);
    divide_por_3(N);
    divide_por_5(N);
}