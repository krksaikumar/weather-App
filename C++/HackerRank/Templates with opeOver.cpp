#include <iostream>
using namespace std;
//program to add two vectors 

template<class T>
class Vector{
	T a;
	T b;
	public:
	Vector() : a(0), b(0) {}
	Vector(T a, T b) : a(a), b(b) {}
	void display();
	Vector<T> operator+(const Vector<T> &right);
	
};

template<class T>
void Vector<T>::display( ){
	cout<<a<<" "<<b;
}

template<class T>
Vector<T> Vector<T>::operator+(const Vector<T> &right){
	Vector<T> result(a+right.a, b+right.b);
	return result;
}

int main() {
    Vector<int> v1(1, 3);
    Vector<int> v2(4, 8);
    Vector<int> v3;
    v3 = v1+v2;
    v3.display();
    
    return 0;
}
