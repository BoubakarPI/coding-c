#include <stdio.h>

float max1(float a, float b) {
    if (a < b) {
        return b;
    } else {return a; }
}

float max2(float a, float b, float c) {
    return max1(max1(a, b), c);
}

float max3(float a, float b, float c, float d, float e) {
    


float main() {
    print(max1(5, 20));
}