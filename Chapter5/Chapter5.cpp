#include <iostream>
#include <string>

int promptName()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	int length{ static_cast<int>(name.length()) };
	return length;
}

int promptAge()
{
	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;
	return age;
}

void printResult(int length, int age)
{
	std::cout << "Your age + length of name is: " << length + age << std::endl;
}

int main()
{
	int length = { promptName() };
	int age = { promptAge() };
	printResult(length, age);
	//
	return 0;
}