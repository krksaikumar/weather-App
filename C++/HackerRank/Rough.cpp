#include <iostream>
using namespace std;

float fun(int a){
	int b = a + 10;
	return b;
}

int main() {
    int a = 10;
    const int &b = a;
    int &c = b;
    cout<<c;   //<<<--------------check this
    return 0;
}
