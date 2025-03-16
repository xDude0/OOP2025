#include "StudentClass.h"
#include "Functii.h"
#include <iostream>

using namespace std;

int main()
{
	char nume[100] = "Alex";
    char nume2[100] = "Mihai";
    char nume3[100] = "Tudor";
	student obj1;
	obj1.SetName(nume);
	obj1.GetName();
	
    student s1, s2;

    s1.SetName(nume2);
    s1.SetGradeMath(9.0);
    s1.SetGradeEnglish(8.5);
    s1.SetGradeHistory(9.2);

    s2.SetName(nume3);
    s2.SetGradeMath(7.5);
    s2.SetGradeEnglish(8.7);
    s2.SetGradeHistory(8.3);

    cout << "Comparing by Name: " << CompareByName(s1, s2) << endl;
    cout << "Comparing by Math Grade: " << CompareByMathGrade(s1, s2) << endl;
    cout << "Comparing by English Grade: " << CompareByEnglishGrade(s1, s2) << endl;
    cout << "Comparing by History Grade: " << CompareByHistoryGrade(s1, s2) << endl;
    cout << "Comparing by Average Grade: " << CompareByAverage(s1, s2) << endl;

    return 0;

}