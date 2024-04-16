
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string n) : name(n)
{
}

//grade adder
void Student::addGrade(double grade)
{
	totalGrade += grade;
}

//calculator the avg
double Student::calcAverage(int numOfGrades) 
{
	return totalGrade / numOfGrades;
}


// gets the letter grade from the double :O
string Student::getLetterGrade(double averageGrade)
{
	if (averageGrade >= 100)
	{
		return "A+";
	}
	else if (averageGrade >= 93)
	{
		return "A";
	}
	else if (averageGrade >= 90)
	{
		return "A-";
	}
	else if (averageGrade >= 87)
	{
		return "B+";
	}
	else if (averageGrade >= 83)
	{
		return "B";
	}
	else if (averageGrade >= 80)
	{
		return "B-";
	}
	else if (averageGrade >= 77)
	{
		return "C+";
	}
	else if (averageGrade >= 73)
	{
		return "C";
	}
	else if (averageGrade >= 70)
	{
		return "C-";
	}
	else if (averageGrade >= 67)
	{
		return "D+";
	}
	else if (averageGrade >= 63)
	{
		return "D";
	}
	else if (averageGrade >= 60)
	{
		return "D-";
	}
	else
	{
		return "F";
	}

}