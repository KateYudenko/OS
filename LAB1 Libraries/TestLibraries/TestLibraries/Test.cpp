#include <iostream>
#include <Vector.h>
using namespace std;

int main() {
    double value = 6.7;
    Number number(value);
    Vector one = ONE_VECTOR;
    Vector vec(number, number);

    cout << "vec(" << vec.x.value << "," << vec.y.value << ")"<<endl;

    cout << "r = " << vec.radius().value << ", angle = " << vec.angle().value << endl;

    cout << "vec(" << vec.x.value << "," << vec.y.value << ") - o(1,1) = ";

    vec = Vector::subtract(vec, one);

    cout << "vec(" << vec.x.value << "," << vec.y.value << ")" << endl;

    cout << "r = " << vec.radius().value << ", angle = " << vec.angle().value << endl;

	return 0;
}