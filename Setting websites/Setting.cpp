#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace std;

void Print_Persent(const char * a)
{
	system("cls");
	cout << a << endl;
}

void Setting_Learn_Ue4()
{
	Print_Persent("0%");
	system("start https://www.youtube.com/channel/UCnyWduazdA6Wz3DqM9FmU4A");
	Print_Persent("14.2%");
	system("start https://www.twitch.tv/");
	Print_Persent("28.5%");
	system("start https://www.twitch.tv/");
	Print_Persent("42.8%");
	system("start https://twip.kr/");
	Print_Persent("57.1%");
	system("start https://twip.kr/");
	Print_Persent("71.4%");
	system("start https://playentry.org/");
	Print_Persent("100.0%");
}

void Setting_Broadcasting()
{
	Print_Persent("0%");
	system("start chrome");
	Print_Persent("50%");
	system("start https://www.youtube.com/watch?v=C-YUzNmik00&list=PL99e3DcrPCyKyuP6XMax-8iIyjxVKdHoS");
	Print_Persent("100%");
}

int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);

	cout << "Live or Learn? : ";

	SetConsoleTextAttribute(hConsole, 6);

	char state[6];
	cin >> state;

	SetConsoleTextAttribute(hConsole, 2);

	

	if (strcmp(state, "live"))
	{
		Setting_Broadcasting();
	}
	else if (strcmp(state, "ue4"))
	{
		Setting_Learn_Ue4();
	}
	else
	{
		cout << "인자가 잘못되었습니다. 다시 입력해 주세요." << "\n\n";
		main();
	}

	SetConsoleTextAttribute(hConsole, 7);

	system("pause");
	return 0;
}