#include <iostream>
using namespace std;
int main(){
    int A, B, media;
    cin >> A;
    while(A > 1000)
        cin >> A;
    cin >> B;     
    while(B > 1000)   
        cin >> B;   

    media = (A + B)/2;
    cout << media << endl;
    return 0;
}