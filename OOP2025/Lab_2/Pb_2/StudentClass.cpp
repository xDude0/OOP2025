#include "StudentClass.h"
#include <iostream>
#include <cstring>
using namespace std;

void student::SetName(char* x)
{
	strcpy_s(Name, x);
}

void student::GetName()
{
	cout << Name << endl;
}

void student::SetGradeMath(float x)
{
	if (x >= 1.0 && x <= 10.0)
		MathGrade = x;
	else
		cout << "Invalid Math grade. It must be between 1 and 10." << endl;
}

float student::GetGradeMath()
{
	return MathGrade;
}

void student::SetGradeEnglish(float x)
{
	if (x >= 1.0 && x <= 10.0)
		EnglishGrade = x;
	else
		cout << "Invalid Math grade. It must be between 1 and 10." << endl;
}

float student::GetGradeEnglish()
{
	return EnglishGrade;
}

void student::SetGradeHistory(float x)
{
	if (x >= 1.0 && x <= 10.0)
		HistoryGrade = x;
	else
		cout << "Invalid Math grade. It must be between 1 and 10." << endl;
}

float student::GetGradeHistory()
{
	return HistoryGrade;
}

float student::AverageGrade()
{
	return (MathGrade + EnglishGrade + HistoryGrade) / 3;
}