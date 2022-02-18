#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x < -1000 || x > 1000)
        cin >> x;
    if(x > 0)
        cout << "positivo" << endl;
    else if(x == 0)
        cout << "nulo" << endl;
    else
        cout << "negativo" << endl;
    return 0;
}