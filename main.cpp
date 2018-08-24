#include <iostream>
//statement must end with semicolon


//declare the variable before you use it and tell it what kind it is    or int x = 3;

//statements must be nested in a code block {} but c++ does not care about indentation
//variables can't live at global scope and neither can code blocks
int add() { //add returns an int
    int x;
    int y;
    int z;
    x = 3;
    y = 4;
    z = x + y;
    return (z * 3) + 2; //you can only return one value
}

int main() {
    int sum = add();
    //this prints
    std::cout << sum << std::endl;
    return 0;
}

//always make a main to be called at the beginning