#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;

    cin >> N;

    int fita[N];

    for(int i = 0; i<N; i++){
        cin >> fita[i];
        if(fita[i] == -1)
            fita[i] = 10;
    }

    for(int i = 1; i<N; i++){
        if(fita[i] >= 9)
            fita[i] = 9;
        fita[i] = min(fita[i-1] + 1, fita[i]);
    }

    for(int i = N-2; i>=0; i--){
        if(fita[i] >= 9)
            fita[i] = 9;
        fita[i] = min(fita[i+1] + 1, fita[i]);
    }
    for(int i = 0; i < N; i++)
        cout << fita[i] << " ";
        
    return 0;
}