#include "Functii.h"
#include <iostream>
using namespace std;

int CompareByName(student& s1, student& s2)
{
    if (strcmp(s1.Name,s2.Name))
        return 0;
    return s1.GetName() > s2.GetName() ? 1 : -1;
}

int CompareByMathGrade(student& s1, student& s2)
{
    if (s1.GetGradeMath() == s2.GetGradeMath())
        return 0;
    return s1.GetGradeMath() > s2.GetGradeMath() ? 1 : -1;  
}

int CompareByEnglishGrade(student& s1, student& s2)
{
    if (s1.GetGradeEnglish() == s2.GetGradeEnglish())
        return 0;  
    return s1.GetGradeEnglish() > s2.GetGradeEnglish() ? 1 : -1; 
}

int CompareByHistoryGrade(student& s1,  student& s2)
{
    if (s1.GetGradeHistory() == s2.GetGradeHistory())
        return 0;  
    return s1.GetGradeHistory() > s2.GetGradeHistory() ? 1 : -1;
}

int CompareByAverage(student& s1, student& s2)
{
    if (s1.AverageGrade() == s2.AverageGrade())
        return 0;  
    return s1.AverageGrade() > s2.AverageGrade() ? 1 : -1; 
}
