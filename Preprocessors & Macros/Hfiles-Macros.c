#include <stdio.h> // <-- this is a "preprocessed" file (and #include) since it contains headers we can use.
#include <math.h> // <--- another header file

#define PI 3.1415 // <-- this is a "macro" lowk kinda useless as a variable
#define circleArea(r)(PI * r * r) // <--- oneline function version of a macro. more useful

int main() {

    double radius = 12.4;
    double area = circleArea(radius);

    printf("%.4lf", area);

    return 0;
}