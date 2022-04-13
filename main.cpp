#include <iostream>
using namespace std;

int main() {

    //integers - whole numbers, can be positive and negative
    int num = 5; //declaring a variable (int num) and initializing it (= 5)

    //floats & doubles - decimal numbers (5.5) etc.
    //doubles are larger than floats

    float x = 5.5;
    x = 20.5;
    double y = 28.4;

    std::cout << num << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    //char (characters) - represent letters in code
    char letter = 'A'; //computer is reading A as 65 (in decimal)
    letter = 'F'; //ascii value of 'F' (Reassignment)

    std::cout << letter << std::endl;

    //String class
    string text = "I am Issa";

    std::cout << text << std::endl;


    //you make a variable by followign this format:
    //1) type (what type is that variable)
    //2) name - what we call it in the program
    //3) (optional) - initial value

    std::cout << "Program Ending" << std::endl;
    return 0;
}
