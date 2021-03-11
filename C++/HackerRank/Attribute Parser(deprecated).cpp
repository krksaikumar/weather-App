#include<iostream>
#include<string>
using namespace std;

int main(){
	int n, q, attrCount = 0;
	string trash;
	cin>>n>>q;
	getline(cin, trash);
	//string* attrVal = new string[50];
	string** tags = new string*[n];
	//string* attr = attrVal;
	
	for(int i=0; i<n; i++){
		tags[i] = new string[50];
	}
	//to read HRML
     for(int tag=0; tag < n; tag++) {
		string line;
		getline(cin, line);
		int i = 1;
		int j = i;		
		while(line.at(j) != 'g') j++;
		i = j+1;		
		while(line.at(j) != ' ') j++;
		int tagNo = stoi(line.substr(i, j));
		j--;
		
	     attrCount = 0;
		while(line.at(j+1) != '>'){
			j += 2;
			i = j;			
			while(line.at(j) != ' ') j++;
			string str1 = line.substr(i, j-i);
			while(line.at(j) != '"') j++;
			i = j+1;
			j = i;
			while(line.at(j) != '"') j++;
			string str2 = line.substr(i, j-i);
			string str = str1 + " " + str2;
			tags[tag][attrCount] = str;
			attrCount++;
		}
	}
	
	while(q--){
		string line;
		getline(cin, line);
		int i = 1;
		int j = i;		
		while(line.at(j) != '~') j++;
		i = j;
		while(line.at(j) != 'g') j--;
		j++;
		int tagNo = stoi(line.substr(j, i-j));
		i ++;
		j = line.length();
		string searchAttr = line.substr(i, j-i);
		bool isFound = false;
		for(int i = 0; i < attrCount; i++){
			int start = 0, end = 0;
			while(tags[tagNo-1][i] .at(end) != ' ') end++;
			string actualAttr = tags[tagNo-1][i].substr(start, end-start);
			end++;
			string attrVal = tags[tagNo-1][i].substr(end,  tags[tagNo-1][i].size()-end);
			if(actualAttr == searchAttr){
				cout<<attrVal<<endl;
				isFound = true;
				break;
			}
		}
		if(! isFound ) cout<<"Not Found!\n";
	}
	
	
	return 0;
}