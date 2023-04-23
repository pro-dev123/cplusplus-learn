/*
Make Calculator!
*/

#include <stdio.h>
#include <string>
// #include <string.h>

std::string int_to_string(int x);

std::string substring(std::string str, int start, int end);

int calculate(std::string str);

int main()
{
	char str[101];
}

int calculate(std::string str)
{
	// () bracket

	int last_opened = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			last_opened = i;
		}
		else if (str[i] == ')')
		{
			std::string head = substring(str, 0, last_opened - 1);
			std::string bracket = substring(str, last_opened + 1, i - 1);
			std::string tail = substring(str, i + 1, str.length());

			str = head + int_to_string(calculate(bracket)) + tail;
		}
	}
}