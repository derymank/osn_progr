#include <iostream>
#include <cmath>
using namespace std;
int a, b;
int mnoj(int a, int b);
float del(int a, int b);
int razn(int a, int b);
int sum(int a, int b);
int step(int a, int b);
int ost(int a, int b);
int main()
{
	std::cin >> command;
	if (command == "+")
	{
		cout << sum(a, b) << "\n";
	}
	if (command == "-")
	{
		cout << razn(a, b) << "\n";
	}
	if (command == "*")
	{
		cout << mnoj(a, b) << "\n";
	}
	if (command == "^")
	{
		cout << step(a, b) << "\n";
	}
	if (command == "%")
	{
		cout << ost(a, b) << "\n";
	}
	if (command == "/")
	{
		cout << del(a, b) << "\n";
	}
	else
	{
		rerurn 0;
	}
	return 0;
}

int sum(int a, int b)
{
	cin >> a >> b;
	return (a + b);
}
int razn(int a, int b)
{
	cin >> a >> b;
	return (a - b);
}
int mnoj(int a, int b)
{
	cin >> a >> b;
	return (a * b);
}
float del(int a, int b)
{
	cin >> a >> b;
	if (b == 0)
	{
		while (b == 0)
		{
			return 0;
		}
	}
	return (a / b);
}
int step(int a, int b)
{
	cin >> a >> b;
	return pow(a, b);
}
float ost(int a, int b)
{
	cin >> a >> b;
	if (b == 0)
	{
		while (b == 0)
		{
			return 0;
		}
	}
	return (a % b);
}