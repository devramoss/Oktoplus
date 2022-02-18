#include <iostream>
using namespace std;
int main(){
    int A, M;

    cin >> A;
    while(A < 1 || A > 50)
        cin >> A;
    cin >> M;
    while(M < 1 || M > 50)
        cin >> M;
    if(A + M > 50)
        cout << 'N' << endl;
    else
        cout << 'S' << endl;
        
    return 0;
}