#include<iostream>
using namespace std;

int main(){
    int B, L, C;
    int total = 0;

    cin >> B ;

    while(B < 1 || B > 100)
        cin >> B;
    for(int i = 0; i < B; i++){
            cin >> L;
            cin >> C;
        while((L<0 || L>100) || (C<0 || C>100)){
            cin >> L;
            cin >> C;
        }

        if(L>C)
            total += C;
    }
    cout << total << endl;

    return 0;
}