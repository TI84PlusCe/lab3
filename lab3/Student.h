
#include <iostream>
#include <string>
#pragma once
using namespace std;

class Student
{
	//privates
private:
	string name;
	double totalGrade = 0.0 ;

	// public classes
public:
	//student 
    Student(string n);

	// gets the grade as a double
    void addGrade(double grade);

	//the average grades
    double calcAverage(int numOfGrades);

	// gets the grade avg 
    string getLetterGrade(double averageGrade);
};
