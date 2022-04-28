#include <iostream>

using namespace std;

int main(){
    int x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;

    cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3 >> x_4 >> y_4;

    cout << !((x_2 < x_3) || (x_1 > x_4) || (y_1 > y_4) || (y_2 < y_3)) << endl;

    return 0;
}