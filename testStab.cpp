#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "stabilizer.h"
using namespace std;

char spek[200];

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите имя нового сотрудника\n\n";
	cin >> spek;
	string newWorker = Stabilizer(spek);
	cout << endl; cout << endl;
	cout<< newWorker;
	cout << endl; cout << endl;
	system("pause");
	cout << endl;
	main();

}