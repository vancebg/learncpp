#include <iostream>

int towerHeight()
{
    int x{};
    std::cin >> x;
    return x;
}

void ballHeight(int tower, double gravity)
{
    std::cout << "At 0 seconds, the ball is at height: " << tower << " meters" << "\n";
    double distance_fallen = gravity * (1 * 1) / 2;
    std::cout << "At 1 seconds, the ball is at height: " << tower - distance_fallen << " meters" << "\n";
    distance_fallen = gravity * (2 * 2) / 2;
    std::cout << "At 2 seconds, the ball is at height: " << tower - distance_fallen << " meters" << "\n";
    distance_fallen = gravity * (3 * 3) / 2;
    std::cout << "At 3 seconds, the ball is at height: " << tower - distance_fallen << " meters" << "\n";
    distance_fallen = gravity * (4 * 4) / 2;
    std::cout << "At 4 seconds, the ball is at height: " << tower - distance_fallen << " meters" << "\n";
    distance_fallen = gravity * (5 * 5) / 2;

    std::cout << "At 5 seconds, the ball is at height: " << tower - distance_fallen << " meters" << "\n";
    distance_fallen = gravity * (5 * 5) / 2;
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    int tower = { towerHeight() };
    double gravity = { 9.8 };

    ballHeight(tower, gravity);

    return 0;
}