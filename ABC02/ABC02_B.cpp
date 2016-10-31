#include <iostream>
using namespace std;

int main(void) {
  std::string w;
  std::cin >> w;
for (int i = 0; i < w.length(); i++) {
    if (!(w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o')) {
      std::cout << w[i] ;
    }
  }
  printf("\n");
  return 0;
}
