#include <iostream>
using namespace std;
int main(){
    int L, area;
    cin >> L;
    while(L < 1 || L > 1000)
        cin >> L;
    area = L * L;
    cout << area << endl;
    return 0;
}
