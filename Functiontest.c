#include<stdio.h>
float squareArea(float side);
float squareCircle(float rad);
float squareRectangle(float a, float b);
int main(){
    float a = 10.00;
    float b = 5.00;
    float rad = 7.00;
    float side = 3.00;
    printf("The Area of Rectangle is %f\n", squareRectangle(a, b));
    printf("The Area of Cirlce is %f\n", squareCircle(rad));
    printf("The Area is %f\n", squareArea(side));
}
float squareArea(float side){
    return side * side;
}
float squareCircle(float rad){
    return 3.14 * rad * rad;
}
float squareRectangle(float a, float b){
    return a * b;
}