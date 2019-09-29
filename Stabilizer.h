
#pragma
#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;


string enterName;
string Stabilizer(string giveStr) {
	int haw;
	vector <char> trans;
	haw = giveStr.length();

	for (int i = 0; i < haw; i++)
	{
		trans.push_back(giveStr.at(i));
	}


	string newName = "";
	if (int(trans[0]) < 0) {
		for (int i = 0; i < haw; i++)
		{
			if (int(trans[i]) == -16)
			{
				newName += 'Ё';
				trans[i] = 0;
			}
			else if (int(trans[i]) == -15)
			{
				newName += 'ё';
				trans[i] = 0;
			}
			else if (int(trans[i]) >= -32 && int(trans[i]) <= -16)
			{
				newName += char(trans[i] + 16);
				trans[i] = 0;
			}
			else if (int(trans[i]) != 0)
			{
				newName += char(trans[i] + 320);
				trans[i] = 0;
			}

		}
	}
	else {
		for (int i = 0; i < haw; i++)
		{
			newName += trans[i];
			trans[i] = 0;
		}
	}
	for (int i = 0; i < haw; i++)
	{
		cout << trans[i] << endl;
	}

	return newName;

}
