#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	ifstream tabs("Tabs.txt");
	string s;
	Sleep(5000);
	cout <<"Start!";
	while (getline(tabs, s))
	{
		int size = s.length();
		for (int i = 0; i < size; i++){
			if (s[i] == ' '){
				Sleep(500);
			}else{
				keybd_event(s[i], 0, 0, 0);
				::Sleep(125);
				keybd_event(s[i], 0, KEYEVENTF_KEYUP, 0);
				Sleep(75);
			}
		}
		Sleep(100);
	}
}
