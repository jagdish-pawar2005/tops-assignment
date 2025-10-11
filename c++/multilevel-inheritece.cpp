#include<iostream>
using namespace std;
class Person{
	public:
		char name[20];
		char email[10];
		int contact;
		void getPersonalDetails(){
			cout<<"\n enter name email contact";
			cin>>name>>email>>contact;
		}
};
class Employee: public Person{
	public:
		int empid;
		char dept[30];
		
		void getEmpData(){
			cout<<"\n Enter empid emp department";
			cin>>empid>>dept;
		}
};
class Manager:public Employee{
	public:
		int teamid;
		int projectid;
		char projectname[30];
		void getManagerData(){
			cout<<"\n Enter teamid projectid and project name ";
			cin>>teamid>>projectid>>projectname;
		}
		
		void display(){
			cout<<"\n person data";
			cout<<"\n name="<<name<<"\t email="<<email<<"\t contact";
			cout<<"\n employee info";
			cout<<empid<<"Working department="<<dept;
			cout<<"project details";
			cout<<"\n teamid="<<teamid<<"\t projectid="<<projectid;
			cout<<"\n projectname="<<projectname;
		}
};
main(){
	Manager m1;
	m1.getPersonalDetails();
	m1.getEmpData();
	m1.getManagerData();
	m1.display();
}
