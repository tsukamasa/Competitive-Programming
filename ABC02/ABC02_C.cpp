#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;

int main(){
	int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int a = x2-x1;
	int b = y2-y1;
	int c = x3-x1;
	int d = y3-y1;
	double s = abs((a*d)-(b*c))/2.0;

	cout << setprecision(10) << s << endl;
	return 0;

}
