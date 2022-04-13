#include <iostream>

using namespace std;

int main() {

    string text = "I am text"; //variable
    //COUT (character output) = <<
    cout << "I am text" << std::endl; //literal

    // \n (newline character) and std::endl;

    cout << "Test text" << endl;
    cout << "Test text\n"; //makes a new line after the text

    //escape characters
    //they escape the string they're in.
    cout << "\"Test text\"";


    std::cout << "Program Ending" << std::endl;
    return 0;
}
