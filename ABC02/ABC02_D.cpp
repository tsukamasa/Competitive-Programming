#include <iostream>

using namespace std;

void push(std::vector<int>& v,int k){
	for (int i = 0; i < v.size(); ++i)
	{
		
	}
}

int main(){
	bool re[12][12] = {false};
	int ans = 1;
	int N,M;
	int x,y;
	cin >> N >> M;

	for(int i=0;i<M;i++){
		cin >> x >> y;
		re[x-1][y-1] = true;
		re[y-1][x-1] = true;
	}	

	return 0;
}
