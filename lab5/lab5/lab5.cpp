#include <iostream>
using namespace std;

double circleArea(double r){ return 3.14159 * r * r; }
double rectArea(double w,double h){ return w * h; }

int main(){
    double r,w,h;
    cout << "===== โปรแกรมคำนวณพื้นที่ =====\n";
    cout << "รัศมีวงกลม: "; if(!(cin>>r)) return 0;
    cout << "ความกว้างของสี่เหลี่ยม: "; if(!(cin>>w)) return 0;
    cout << "ความสูงของสี่เหลี่ยม: "; if(!(cin>>h)) return 0;

    cout << "1. วงกลม (ร=" << r << ")\n   พื้นที่ = " << circleArea(r) << " ตารางหน่วย\n";
    cout << "---------------------------\n";
    cout << "2. สี่เหลี่ยม (ก=" << w << ", ส=" << h << ")\n   พื้นที่ = " << rectArea(w,h) << " ตารางหน่วย\n";
    return 0;
}
