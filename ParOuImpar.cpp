#include <iostream>
using namespace std;
int main(){
    int B, C;

    cin >> B;
    while(B < 0 || B > 10)
        cin >> B;
    cin >> C;
    while(C < 0 || C > 10)
        cin >> C;
    if((B + C)%2 == 0)
        cout << "Bino";
    else    
        cout << "Cino";
    return 0;
}