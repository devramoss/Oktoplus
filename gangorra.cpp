#include <iostream>
using namespace std;
int main(){
    int P1, P2, C1, C2;

    cin >> P1;
    while(P1 < 10 || P1 > 100)
        cin >> P1;

    cin >> C1;
    while(C1 < 10 || C1 > 100)
        cin >> C1;

    cin >> P2; 
    while(P2 < 10 || P2 > 100)
        cin >> P2;
        
    cin >> C2;
    while(C2 < 10 || C2 > 100)
        cin >> C2;

    if(P1 * C1 == P2 * C2)
        cout << 0;
    else if(P1 * C1 > P2 * C2)
        cout << -1;
    else    
        cout << 1;
    return 0;
}