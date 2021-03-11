//program to add two vectors 
#include <iostream>
using namespace std;

template<class T>
class Vector{
	T a;
	T b;
	public:
	Vector() : a(0), b(0) {}
	Vector(T a, T b) : a(a), b(b) {}
	void display();
	//normal method -> to add two vectors of same type
	Vector<T> operator+(const Vector<T> &right){
		Vector<T> result(a+right.a, b+right.b);
		return result;
	}
	template<class FT>
	friend std::ostream &operator<<(std::ostream &Str, Vector<FT> const &v);
	
	//using template mem. func. in template class -> to add two vectors of different 
	/*template<class LT, class RT>
	friend Vector<RT> operator+(const Vector<LT> &left, const Vector<RT> &right);*/
	
};

template<class T>
std::ostream &operator<<(std::ostream &Str, Vector<T> const &v){
		
		Str << "[" << v.a << ", " << v.b << "]";
		return Str;
}

template<class T>
void Vector<T>::display( ){
	cout<<a<<" "<<b;
}

/*template<class LT, class RT>
Vector<RT> operator+(const Vector<LT> &left, const Vector<RT> &right){
	Vector<RT> result(left.a+right.a, left.b+right.b);
	return result;
}*/

int main() {
    Vector<float> v1(1, 3.8);
    Vector<float> v2(6, 8);
    Vector<float> v3;
    v3 = v1+v2;
    cout<< "The sum of "<< v1<<" and " << v2 << " is " << v3;
    
    return 0;
}
