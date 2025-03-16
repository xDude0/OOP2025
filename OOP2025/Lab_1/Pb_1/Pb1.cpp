#include <iostream>
#include <fstream>

using namespace std;

int f(char *numar)
{
	int rez = 0;
	int i = 0;
	for (i = 0; numar[i] != '\0'; i++) {
		rez= rez * 10 + (numar[i] - '0');
	}

	return rez;
}

int main()
{
	FILE *file;
	int s = 0;
	char nr[100];
	if (fopen_s(&file, "ini.txt", "r") != 0) 
	{
		printf_s("Error\n");
		return 1;
	}

	while (fgets(nr, sizeof(nr), file))
	{
		s = s + f(nr);
	}
	fclose(file);

	printf_s("%d\n", s);
}