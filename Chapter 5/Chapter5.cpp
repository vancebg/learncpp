#include <iostream>
#include <string>
#include <string_view>
std::string promptName(int personNumber)
{
	std::cout << "Enter the name of person #" << personNumber << ": ";
	std::string name{};
	std::cin >> std::ws;
	std::getline(std::cin, name);
	return name;
}

int promptAge(std::string_view name)
{
	std::cout << "Enter the age of " << name << ": ";
	int age{};
	std::cin >> age;
	return age;
}

void compare(std::string_view name1, std::string_view name2, int age1, int age2 )
{
	if (age1 > age2)
	{
		std::cout << name1 << " (age " << age1 << ")" << " is older than " << name2 << " (age " << age2 << ")";
	}
	else if (age1 < age2)
	{
		std::cout << name2 << " (age " << age2 << ")" << " is older than " << name1 << " (age " << age1 << ")";
	}
	else
	{
		std::cout << name1 << " and " << name2 << " are the same age.\n";
	}
}

int main()
{
	
	const std::string name1 = { promptName(1) };
	const int age1 = { promptAge(name1) };

	const std::string name2 = { promptName(2) };
	const int age2 = { promptAge(name2) };

	compare(name1, name2, age1, age2);
	return 0;
}