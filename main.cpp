#include <iostream>

void log(const char* message);

static int multiply(int a, int b){
    log("multiply");
    return a*b;
}

int main(){
    std::cout << multiply(5,8) << std::endl;
    std::cin.get();
}
