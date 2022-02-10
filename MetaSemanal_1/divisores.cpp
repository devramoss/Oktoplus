#include<iostream>
using namespace std;

int main(){
    int X;

    cin >> X;
    while(X < 2 || X > 1000000000)  
        cin >> X;
    for(int i = 1; i<= X; i++)
        if(X%i == 0)
            cout<< " " << i;

    return 0;
}