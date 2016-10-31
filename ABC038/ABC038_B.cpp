#include <iostream>

using namespace std;

int main() {
int first[2];
int second[2];

cin >> first[0] >> first[1] >> second[0] >> second[1] ;


for (int i = 0 ;i < 2 ;i++) {
  for (int j = 0; j < 2; j++) {
    if (first[i] == second[j]) {
      cout << "YES" <<endl;
      return 0;
    }
  }
}
  std::cout << "NO" << std::endl;
  return 0;
}
