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

int main()
{
    std::cout << "Hello World!\n";
}