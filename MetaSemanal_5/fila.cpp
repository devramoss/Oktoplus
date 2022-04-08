#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m, i, id;
    vector<int> fila;

    cin >> n;
    
    for(i = 0; i<n; i++){
        cin >> id;
        fila.push_back(id);
    }

    cin >> m;

    for(i = 0; i<m; i++){
        cin >> id;
        remove(fila.begin(), fila.end(), id);
        fila.resize(n-i-1);
    }

	for(i = 0; i < n-m; i++)
        cout << fila[i] << " ";
	
    cout << endl;
    
    return 0;
}