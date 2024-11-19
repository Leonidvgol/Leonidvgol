#include <iostream>
#include <string>
#include <cmath>

struct point {
    float x = 0;
    float y = 0;
};
struct mathVector {
    point a;
};

mathVector add(mathVector &first, mathVector &second) {
    mathVector result;
    result.a.x = first.a.x + second.a.x;
    result.a.y = first.a.y + second.a.y;
    return result;
}
mathVector substract(mathVector &first, mathVector &second) {
    mathVector result;
    result.a.x = first.a.x - second.a.x;
    result.a.y = first.a.y - second.a.y;
    return result;
}
mathVector scale(mathVector &first, float &userValue) {
    mathVector result;
    result.a.x = first.a.x * userValue;
    result.a.y = first.a.y * userValue;
    return result;
}
float length(mathVector &first) {
    float result;
    result = sqrt(first.a.x * first.a.x + first.a.y * first.a.y);
    return result;
}
mathVector normalize(mathVector &first) {
    float output;
    mathVector result;
    output = length(first);
    result.a.x = first.a.x / output;
    result.a.y = first.a.y / output;
    return result;
}

int main() {
    float x, y, output;
    mathVector result, first, second;
    std::string operation;
    std::cout << "Enter the desired operationd: add, substract, scale, length or normalize:" << std::endl;
    std::cin >> operation;
    if (operation == "add") {
        std::cout << "Enter the coordinates of the first vector: ";
        std::cin >> first.a.x >> first.a.y;
        std::cout << "Enter the coordinates of the second vector: ";
        std::cin >> second.a.x >> second.a.y;
        result = add(first,second);
        std::cout << "Result: " << "x = " << result.a.x << " y = " << result.a.y;
    }
    else if (operation == "substract") {
        std::cout << "Enter the coordinates of the first vector: ";
        std::cin >> first.a.x >> first.a.y;
        std::cout << "Enter the coordinates of the second vector: ";
        std::cin >> second.a.x >> second.a.y;
        result = substract(first, second);
        std::cout << "Result: " << "x = " << result.a.x << " y = " << result.a.y;
    }
    else if (operation == "scale") {
        std::cout << "Enter the coordinates of the vector: ";
        std::cin >> first.a.x >> first.a.y;
        std::cout << "Enter the coordinates of the scalar: ";
        std::cin >> x;
        result = scale(first, x);
        std::cout << "Result: " << "x = " << result.a.x << " y = " << result.a.y;
    }
    else if (operation == "length") {
        std::cout << "Enter the coordinates of the vector: ";
        std::cin >> first.a.x >> first.a.y;
        output = length(first);
        std::cout << "Result: length = " << output;
    }
    else if (operation == "normalize") {
        std::cout << "Enter the coordinates of the vector: ";
        std::cin >> first.a.x >> first.a.y;
        result = normalize(first);
        std::cout << "Result: " << "x = " << result.a.x << " y = " << result.a.y;
    }
    else {
        std::cout << "Error";
    }
}