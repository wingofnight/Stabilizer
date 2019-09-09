#include "pch.h"
#include "stabilizer.h"
#include <iostream>

string Stabilizer(char sayName[])
{
	string newName = "";
	if (int(sayName[0]) < 0) {
	for (int i = 0; i < N; i++)
	{
		if (int(sayName[i]) == -16)
		{
			newName += '¨';
			sayName[i] = 0;
		}
		else if (int(sayName[i]) == -15)
		{
			newName += '¸';
			sayName[i] = 0;
		}
		else if(int(sayName[i]) >= -32&& int(sayName[i])<= -16)
		{
			newName += char(sayName[i] +16);
			sayName[i] = 0;
		}
		else if (int(sayName[i]) != 0)
		{
			newName += char(sayName[i] + 320);
			sayName[i] = 0;
		}

	}
}
	else {
		for (int i = 0; i < N; i++)
		{
			newName += sayName[i];
			sayName[i] = 0;
		}
	}
	return newName;
	newName.erase();
}
