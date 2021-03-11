#include <iostream>
using namespace std;

class Person{
	protected:
	int age;
	string name;
	public:
	Person(){ }
	virtual void getdata(){ }
	virtual void putdata(){ }
};

class Professor : public Person{
	int publications;
	static int id;
	int cur_id;
	public:
	Professor() : Person() { 
		cur_id = ++id;
	 }
	void getdata(){
		cin>>name;
		cin>>age;
		cin>>publications;
	}
	void putdata(){
		cout<<name<<" "<<age<<" "
		<<publications<<" "<<cur_id<<endl;
	}
};

int Professor::id = 0;

class Student : public Person{
	int marks[6];
	static int id;
	int cur_id;
	public:
	Student() : Person() { 
		cur_id = ++id;
	 }
	void getdata(){
		cin>>name;
		cin>>age;
		for(int i=0; i<6; i++)
			cin>>marks[i];
	}
	void putdata(){
		cout<<name<<" "<<age;
		int sum = 0;
		for(int i=0; i<6; i++)
			sum += marks[i];
		cout<<" "<<sum<<" "<<cur_id<<endl;
	}
};

int Student::id = 0;

int main(){
	int n; cin>>n;
	Person *p[n];
	for(int i=0; i<n; i++){
		int choice;  cin>>choice;
		if(choice == 1)
			p[i] = new Professor;
		else if ( choice == 2)
			p[i] = new Student;
		p[i]->getdata();
	}
	for(int i=0; i<n; i++)
		p[i]->putdata();	
}