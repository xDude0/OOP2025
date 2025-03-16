#include <string>

class student
{
	char Name[100];
	float MathGrade;
	float EnglishGrade;
	float HistoryGrade;
public:
	void SetName(char* x);
	void GetName();
	void SetGradeMath(float x);
	float GetGradeMath();
	void SetGradeEnglish(float x);
	float GetGradeEnglish();
	void SetGradeHistory(float x);
	float GetGradeHistory();
	float AverageGrade();
};