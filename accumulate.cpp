#include <iostream>
#include <numeric>
#include <string>
using namespace std;

//class of a student with name, id and GPA
class Student {
public:
	string name;
	int id;
	float GPA;
	int assignments;

	Student(string name, int id, float GPA, int assignments) {
		this->name = name;
		this->id = id;
		this->GPA = GPA;
		this->assignments = assignments;
	}
	void printStudentInfo() {
		cout<<name<<"\t"<<id<<"\t"<<GPA<<"\t"<<assignments<<endl;
	}
};

int studentAssignments (int x, Student s) {
	return x + s.assignments;
}

int main() {
	Student students[9] = {Student("Alice", 145, 3.1, 3),
							Student("Bob", 187, 2.9, 0),
							Student("Ali", 209, 3.9, 3),
							Student("Erlene", 145, 3.2, 2),
							Student("Myriam", 444, 1.7, 3),
							Student("Britni", 123, 3.2, 1),
							Student("Edwin", 532, 1.8, 2),
							Student("Glinda", 164, 3.7, 0),
							Student("Golda", 219, 2.2, 3)};
							
	int numberOfStudent = sizeof(students)/sizeof(students[0]);
	Student *result;


	cout<<"All students:"<<endl;
	cout<<"Name\tid\tGPA\tAssignments"<<endl;
	for(int i=0; i<numberOfStudent; i++) students[i].printStudentInfo();
 
    cout<<"Accumulate of all assignmenst: ";
    cout<<accumulate(students, students+numberOfStudent, 0, studentAssignments)<<endl;
	return 0;
}