#include <iostream>
using namespace std;

int main() {
    int total, n;
    int sum = 0;
    cin >> total >> n;
    
    for(int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      sum += a * b;
    }
    
    if(total == sum) cout << "Yes";
    else cout << "No";
    
    return 0;
}