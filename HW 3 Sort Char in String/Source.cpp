//////////////
//Anna Tran
//CS 172 sec 1
//10.4
//////////////

#include<iostream>
#include<string>
using namespace std;

string sort(string& s)
{
//String str to switch on the same string
	string str = s;
//Start at 0, find smallest letter in string
	for (int i = 0; i < str.length(); i++)
	{
		int smallest = i;
//Find next smallest letter
		for (int k = i + 1; k < str.length(); k++)
		{
			if (str[k] < str[smallest])
			{
				smallest = k;
			}
//Put smallest letter to bigger letters in order 
			char temp = str[i];
			str[i] = str[smallest];
			str[smallest] = temp;
		}
		return str;
	}
};

int main() {
	cout << "Enter a string" << endl;
	string str;
	getline(cin, str);
	cout << "The sorted string is  " << sort(str) << endl;
	return 0;
}