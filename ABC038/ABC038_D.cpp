#include <iostream>
#include <map>

using namespace std;

int main() {
  int N;
  map<int,int> map;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int a,b;
    cin >> a >> b;
    map.insert(make_pair(a,b));
  }
  return 0;
}
