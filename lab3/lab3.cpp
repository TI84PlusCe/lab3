#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
	// initialize the variables
	string studentName;
	int numOfGrade;
	double grade;

	// gets student name
	cout << "Enter the Name of the Student: ";
	getline(cin, studentName);

	// student -> object
	Student student(studentName);

	// grade getter 
	cout << "Enter the Number of Grades for the Student, max is 10:  ";
	cin >> numOfGrade;
	// input lags
	cin.ignore();
	
	// verifies that there are between 1-10 grades
	if (numOfGrade > 10 || numOfGrade <= 0)
	{
		cout << "Please enter between 1 - 10 grades! " << endl;
	}
	
	//loop de loop 

	for (int i = 0; i < numOfGrade; i++)
	{
		cout << "Enter the Grade" << (i + 1) << " (0 - 100): ";
		cin >> grade;

		if (grade < 0)
		{
			cout << "Invalid Grade. Enter a grade that is above 0. " << endl;
			i--;
			continue;
		}
		student.addGrade(grade);
	}
	//access the class in order to do some math 
	double averageGrade = student.calcAverage(numOfGrade);
	string letterGrade = student.getLetterGrade(averageGrade);

	//prints out the finale
	cout << "Student Name: " << studentName << endl;
	cout << "Final Grade: " << averageGrade << endl;
	cout << "Letter Grade: " << letterGrade << endl;

	//safety 
	return 0;
}

