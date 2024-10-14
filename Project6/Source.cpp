#include<iostream>
#include<string>
using namespace std;

class Student {
	string name;
	int age;
public:
	Student() {
		this->name = "";
		this->age = 0;
	}
	Student(string name, int age) {
		this->name = name;
		this->age = age;
	}

	friend ostream& operator<<(ostream& out, const Student& obj) {
		out << "Name: " << obj.name << endl;
		out << "Age: " << obj.age << endl;
		return out;
	}

	friend istream& operator>>(istream& in, Student& obj) {
		cout << "Enter name: ";
		getline(in, obj.name);

		cout << "Enter age: ";
		in >> obj.age;
		
		in.ignore();

		return in;
	}
};

void main() {

	//Student student1("Tunay", 20);

	//cout << student1 << endl;

	Student student2;

	cin >> student2;

	Student student3;

	cin >> student3;

	cout << student2;

	cout << student3;

}
