#include <iostream>
using namespace std;

class Box{
	int  l;
     int  b;
     int  h;
     public:
     Box() : l(0), b(0), h(0) {}
     Box(int length, int breadth, int height){
     	l = length;
     	b = breadth;
     	h = height;
     }
     Box(Box &box){
     	l = box.l;
     	b = box.b;
     	h = box.h;
     }
     int getLength(){ return l; }
     int getBreadth() { return b; }
     int getHeight() { return h; }
     long long CalculateVolume(){ return (long long) l*b*h; }
     bool operator<(const Box &right){
     	if( l<right.l ) return true;
     	if ( b<right.b and l == right.l ) return true;
     	if( h < right.h and b == right.b and l == right.l ) return true;
          return false;
     }
     friend ostream& operator<<( ostream &data, const Box &box );
     
};

ostream& operator<<( ostream &data, const Box &box ){

	data << box.l << " " << box.b << " " << box.h;
	return data;
}


void check2(){
	int n;
	cin>>n;
	Box temp;
	for(int i=0; i<n; i++){
		int type;
		cin>>type;
		if(type == 1){
			cout<<temp<<endl;
		}
		if(type == 2){
			int l, b, h;
			cin>>l>>b>>h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout<<temp<<endl;
		}
		if(type == 3){
			int l, b, h;
			cin>>l>>b>>h;
			Box NewBox(l, b, h);
			if(NewBox < temp){
				cout<<"lesser\n";
			}
			else{
				cout<<"greater\n";
			}
		}
		if(type == 4){
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type == 5){
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}
		
	}
}

int main() {
    check2();
    return 0;
}
/*

6
2 1039 3749 8473
4
3 1456 3836 283
3 729 3749 272
2 4839 283 273
4

*/