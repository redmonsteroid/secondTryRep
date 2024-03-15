#pragma once
#include <cmath>
int perimetr (int a, int b){
    int perimetr = (a + b) * 2;
    return perimetr;
}

int area (int a, int b){
    int area = a * b;
    return area;
}

double lengthOfDiagonal (int a, int b){
    double lengthOfDiagonal = sqrt( a * a + b * b );
    return lengthOfDiagonal;
}
