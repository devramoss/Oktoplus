#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
    unsigned int comprimento, sorveteiros;
    unsigned int i, x, y;

    vector<pair<unsigned int, unsigned int>> intervalos;
    pair<unsigned int, unsigned int> auxiliar;

    cin >> comprimento >> sorveteiros;

    for(i=0; i<sorveteiros; i++){
        cin >> x >> y;
        intervalos.push_back(make_pair(x, y));
    }

    sort(intervalos.begin(), intervalos.end());

    auxiliar = intervalos[0];

    cout << auxiliar.first << " ";

    for(i=1; i<intervalos.size(); i++){
        if(intervalos[i].first > auxiliar.second){
			cout << auxiliar.second << endl << intervalos[i].first << " ";
			auxiliar = intervalos[i];
        }

        else if(intervalos[i].second > auxiliar.second){
            auxiliar.second = intervalos[i].second;
        }
    }
    cout << auxiliar.second << endl;

    return 0;
}