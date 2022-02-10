#include<iostream>
using namespace std;

int main(){
    int N, I;
    bool A = false, B = false;
    cin >> N;
    while(N < 2 || N > 100000)
        cin >> N;
    for(int i = 0; i<N; i++){
        cin >> I;
        while(I != 1 && I != 2)
            cin >> I;
        if(I == 1)
            A = !A;
        else{
            A = !A;
            B = !B;
        }
    }
    A == false?cout << 0 << endl: cout << 1 << endl;
    B == false?cout << 0 << endl: cout << 1 << endl;
    return 0;
}