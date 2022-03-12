#include <iostream>

using namespace std;

int fibonnaci(int N){
    if(N == 0 || N == 1)
        return 1;
    return fibonnaci(N-1) + fibonnaci(N-2);
}

int main(){
    int N;
    cin >> N;
    cout << fibonnaci(N) << endl;
    return 0;
}