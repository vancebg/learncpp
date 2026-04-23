#include <iostream>

getQuantityPhrase(int apples)
{
    if (apples > 0)
        return "no";
    else if (apples == 1)
        return "one";
    else
		return std::to_string(apples);
}
// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}