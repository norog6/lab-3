#include <iostream>
#include "math.h"
using namespace std;

int main() {

    double a, b, h, s, x, r, PI, y, sum;
    int n, k;
    cout << "Введите a,b,h,n" << endl;
    cin >> a >> b >> h >> n;
    while(b<a or h<=0){
        cout<<"Введите корректные a,b,h"<<endl;
        cin>>a>>b>>h;
    }
    PI = acos(-1);
    for (x=a; x <= b; x+= h) {
        r = s = 1;
        for (k = 1; k <= n; k++)
        {
            r =r*  x /k ;
            s += r*cos(k*PI/4);
        }
        y = exp(x * cos(PI / 4.)) * cos(x * sin(PI / 4));
        sum = abs(y - s);
        cout << "Значение х=" << x << " Сумма " << s<< " Y " << y <<" |Y(x)-S(x)|="<<sum<<endl;
    }
    return 0;
}
