#include <iostream>
using namespace std;
int main(){
    int P, R;
    cin >> P;
    cin >> R;
    if((P == 0 && R == 0) || (P == 0 && R == 1))
        cout << 'C';
    else if(P == 1 && R == 1)
        cout << 'A';
    else
        cout << 'B';
    return 0;
}