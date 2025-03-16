#include "Class.h"
#include <iostream>

using namespace std;

int main()
{
	NumberList obj1;
	obj1.Init();
	obj1.Add(10);
	obj1.Add(20);
	obj1.Add(5);
	obj1.Sort();
	obj1.Print();

}
