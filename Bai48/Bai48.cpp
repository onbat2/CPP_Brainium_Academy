//Bài 48:Enum

#include <iostream>

using namespace std;

enum class Direction{
    EAST = 10, WEST, SOUTH = 20, NORTH
};

enum class Color{
    RED, BLACK, BLUE, GREEN, PURPLE, WHITE
};

int main(){
    Color color = Color::BLACK;
    int redValue = static_cast<int>(Color::RED);
    // Direction d = EAST; _WRONG_
    Direction d = Direction::EAST;0
    // int greenValue = GREEN; _WRONG_
};