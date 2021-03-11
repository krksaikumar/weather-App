#include<iostream>
using namespace std;

int decToBin(int n){
	int x = 1, ans = 0;
	while(x<=n) x*=2;
	x/=2;
	while(x>0){
		int lastDigit = n/x;
		ans = ans*10 + lastDigit;
		n -= x*lastDigit;
		x/=2;
	}
	return ans;
}

int main(){
	int n; cin>>n;
	cout<<decToBin(n)<<endl;
}