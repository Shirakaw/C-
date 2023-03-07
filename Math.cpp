#include <iostream>

void log(const char* message);

int multiply(int a, int b){
    log("multiply");
    return a*b;
}
