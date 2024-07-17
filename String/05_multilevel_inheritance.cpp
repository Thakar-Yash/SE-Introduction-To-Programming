/* 5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance) */

#include<iostream>
using namespace std;

class Student_Details
{
	int sno;
	
	public :
		void get_details()
		{
			cout<<"\n\t Enter Roll No of Student : ";
			cin>>sno;
		}
};
class Test_score : public Student_Details
{
	protected:
		int marks1, marks2;
	
	public :
		void get_score()
		{
			cout<<"\n\t Enter Subject 1 Marks : ";
			cin>>marks1;
			cout<<"\n\t Enter Subject 2 Marks : ";
			cin>>marks2;
			cout<<"\n\t Enter Subject 1 Marks : "<<marks1;
			cout<<"\n\t Enter Subject 2 Marks : "<<marks2;
		}
	
};
class Result : public Test_score
{
	int total=0;
	
	public:
		void get_total()
		{
			total = marks1 + marks2;
			cout<<"\n\t Total Marks are : "<<total;
		}
};

main()
{
	Result R;
	R.get_details();
	R.get_score();
	R.get_total();
}
