#include <sstream>
#include <vector>
#include<sstream>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> vec;
	stringstream ss(str);
	int a;
	char c;
	while(ss>>a){
		vec.push_back(a);
		ss>>c;
	}
	return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}