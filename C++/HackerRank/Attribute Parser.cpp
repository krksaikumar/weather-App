#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
	int n, q;
	cin>>n>>q;
	cin.ignore();
	stringstream ss;
	for(int i=0; i<n; i++){
		string line;
		getline(cin, line);
		ss<<line;
	}
	string sourceCode = ss.str();
	string code(sourceCode);
	string* tag = new string[20];
	
	int i = 0, ind = 0, tagCount = 0;
	while(true){
	string tagname = code.substr(1, code.find(' ')-1);
	int start = code.find(tagname) - 1;
	int end = code.find("/"+tagname+">")+ tagname.size()+1;
	int tagLen = (end+1) - start;   
	tag[i] = code.substr(start, tagLen);
	tagCount++;	
	ind += tag[i].size();
	if(ind == sourceCode.size()) break;
	else code = code.substr(tag[i].size());
	i++;
	}
	while(q--){
		string query, result;
		cin>>query;
		int itrNo = 0;
		while( query.find('.') != -1){
			int pos = query.find('.');
			string currTag = query.substr(0, pos);
			//cout<<currTag;
			if(itrNo == 0){
				bool isFound = false;
				for(int i=0; i<tagCount; i++){
					if(tag[i].find("<"+currTag) != -1){
						isFound = true;
						int ptr = tag[i].find("/"+currTag+">")+ currTag.size()+1;
						result = tag[i].substr(0, ptr+1);
						query = query.substr(pos+1);
						break;
					}
				}
	     		if(not isFound){
	     			cout<<"Not Found!";
	     			break;
	     		}
			}
			else{
			  	if(result.find("<"+currTag) != -1){
						result = result.substr(result.find("<"+currTag));          																
			  	}
				  else{
				  	cout<<"Not Found!";
				  }
			  	query = query.substr(pos+1);
			}
     		itrNo++;
		}
		int ptr = result.find(query);
		result = result.substr(ptr);
		result = result.substr(result.find('"') + 1);
		result = result.substr(0, result.find('"'));
		cout<<result;
	}
}