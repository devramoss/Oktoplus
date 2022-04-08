#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m, total = 0;

  vector<int> fechadura;

  cin >> n >> m;
  
  for(int i = 0; i < n; i++){
     cin >> fechadura[i];
  }
  

  for(int i = 0; i < n-1; i++){
    if(fechadura[i] < m){
      fechadura[i] += m - fechadura[i];
      fechadura[i+1] += m - fechadura[i];
    }

    else{
      fechadura[i] -= fechadura[i] - m;
      fechadura[i+1] -= fechadura[i] - m;
    }
    
    total += abs(m - fechadura[i]);
  }

  cout << total;
  return 0;
}
