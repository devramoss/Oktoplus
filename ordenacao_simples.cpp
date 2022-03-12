#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int sequencia[100000], n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> sequencia[i];

    sort(sequencia, sequencia+n);

    for(int i = 0; i<n; i++)
        cout << sequencia[i] << " ";
        
    cout << endl;
    return 0;
}