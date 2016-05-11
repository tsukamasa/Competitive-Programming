#include <iostream>
#include <map>
#include <math.h>


using namespace std;

int main(){
	int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	double a = fabs(sqrt(pow(x2-x1,2.0)+pow(y2-y1,2.0))); 
	double b = fabs(sqrt(pow(x2-x3,2.0)+pow(y2-y3,2.0))); 
	double c = fabs(sqrt(pow(x3-x1,2.0)+pow(y3-y1,2.0))); 

	double s = (a + b + c)/2.0;
	double T = fabs(s*(s-a)*(s-b)*(s-c));

	cout << T << endl;
	return 0;

}
