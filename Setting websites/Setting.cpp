#include <iostream>
#include <string>
#include <Windows.h>
#include "Setup.h"

using namespace std;

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);

	cout << "What would you like to set it as? (live, ue4, work) : ";

	SetConsoleTextAttribute(hConsole, 6);

	char state[6];
	cin >> state;

	SetConsoleTextAttribute(hConsole, 2);

	

	if (strcmp(state, "live") == 0)
	{
		Setting_Broadcasting();
	}
	else if (strcmp(state, "ue4") == 0)
	{
		Setting_Learn_Ue4();
	}
	else if (strcmp(state, "work") == 0)
	{
		Setting_Workspace();
	}
	else
	{
		cout << "설정이 잘못되었습니다. 다시 입력해 주세요." << "\n\n";
		main();
	}

	SetConsoleTextAttribute(hConsole, 7);

	system("pause");
	return 0;
}