#include <iostream>

using namespace std;

int calc(const int array[] ,int N){
  int ans = N;
  for (int i = 0; i < N; i++) {
    for(int j = i+1; j <= N-1; j++){
      if ( array[j-1] < array[j]) {
        ans++;
      }else {
        break;
      }
    }
  }

  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  int N;
  int array[100000];
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> array[i];
  }

  cout << calc(array ,N) << endl;


  return 0;
}
