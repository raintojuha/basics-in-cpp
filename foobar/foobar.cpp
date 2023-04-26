// This is a basic foobar excercise
// Juha Rainto

// If a number is divisible by 2, print foo
// if the number is divisible by 3, print bar
// if it is divisible by both 2 and 3, print foobar

#include <iostream>


std::string foobar(int i);

std::string foobar(int n){
    std::string output;

    if (n % 2 == 0){
        output += "foo";
    }
    if (n % 3 == 0){
        output += "bar";
    }
    return output;
}

int main() {
    for (int i=1; i < 10; i++){
        std::cout << foobar(i) << std::endl;
    }

    return 0;
}

// In this solution I start with an empty string
// The string gets printed every time, even when left empty
// I add 'foo' and 'bar' seperately so no third check for 'foobar'
// is explicitly needed