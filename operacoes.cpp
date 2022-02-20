#include <iostream>
using namespace std;

int main(){
	char Operacao;
    double A, B;

    cin >> Operacao;
    cin >> A;
    cin >> B;

    cout.precision(2);
    cout << fixed;

    if(Operacao == 'M')
        cout << A * B << endl;
        
    else if(Operacao == 'D')
        cout << A/B << endl;

	return 0;
}