#include <iostream>
using namespace std;
int main(){
    double A, B, media;
    cin >> A;
    cin >> B;
    media = (A + B)/2;
    if(media >= 7)
	    cout << "Aprovado" << endl;
    else if(media >= 4 && media < 7)
        cout << "Recuperacao" << endl;
    else    
        cout << "Reprovado" << endl;
	return 0;
}