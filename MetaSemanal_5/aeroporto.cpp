#include <iostream>
#include <vector>

using namespace std;

int main(){
    int A, V, x, y, n = 1;
    vector<int> aeroporto_info(102);

    cin >> A >> V;
                          
    while(A != 0 && V != 0){
        for(int i=1; i <= A; i++)
            aeroporto_info[i] = 0;

        for(int i=1; i <= V; i++){
            cin >> x >> y;
            aeroporto_info[x]++;
            aeroporto_info[y]++;
        }
		int maior = aeroporto_info[0];
        for(int i=1; i <= A; i++){
            if(aeroporto_info[i] >= maior)
                maior = aeroporto_info[i];
        }

        cout << "Teste " << n << endl;

        for(int i=1; i <= A; i++){
            if(aeroporto_info[i] == maior)
                cout << i << " ";
        }

        cout << endl;
        n++;
        cin >> A >> V;
    }

    return 0;
}