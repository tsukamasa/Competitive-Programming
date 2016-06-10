#include <iostream>
#include <algorithm>

using namespace std;

double solve(double l,double x,double y , double s,double d){
    double ans;
    if(s<d){
        ans = min((d-s)/(x+y),(l-(d-s))/(y-x));
    }else{
        ans = min((s-d)/(y-x),(l-(s-d))/(y+x));
    }
    return ans;
}

int main(){
    int l,x,y,s,d;
    cin >> l >> x >> y >> s >> d;
    cout << solve(l,x,y,s,d) << endl;
    return 0;
}
