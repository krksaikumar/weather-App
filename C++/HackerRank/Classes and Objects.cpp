#include <iostream>
using namespace std;

/*class Student {
  private:
    int scores[5];
    int sum;
  public:
    Student() : sum(0) {}
    int calculateTotalScore() {return sum;}
    void input() {
        for(int i=0; i<5; i++) {
            cin >> scores[i];
            sum+=scores[i];
        }
    }
};*/

class Student{
	int *scores = new int[5];
	public:
	Student(){
		for(int i=0; i<5; i++)
			scores[i] = 0;
	}
	void input();
	int calculateTotalScore();
};

void Student::input(){
	for(int i=0; i<5; i++)
		cin>>scores[i];
}

int Student::calculateTotalScore(){
	int sum = 0;
	for(int i=0; i<5; i++)
		sum += scores[i];
	return sum;
}

int main(){
	int n;
	cin>>n;
	Student *s = new Student[n];
	for(int i=0; i<n; i++)
		s[i].input();
	int kristen_score = s[0].calculateTotalScore();
	
	int count = 0;
	for(int i=1; i<n; i++){
		int total = s[i].calculateTotalScore();
		if(total > kristen_score){
			count++;
		}
	}
	cout<<count;
	return 0;
}
