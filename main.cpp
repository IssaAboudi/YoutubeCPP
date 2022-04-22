#include <iostream>

int main() {

    bool value = 0; //false == 0, true == any number > 0


    //Conditional - something that can be evaluated to true or false

    //x and y, x = 5 and y = 10
    int x = 5;
    int y = 10;

    value = x < y;

    std::cout << value << std::endl;

    bool person = true;

    if(person == true){
        std::cout << "Person is true" << std::endl;
        //do something
    } else {
        std::cout << "Person is NOT true" << std::endl;
    }

    if(person and x < y){ //&& or "and"
        std::cout << "Both Conditions are true" << std::endl;
    } else {
        std::cout << "Not all Conditions are true" << std::endl;
    }

    if(person or x < y){ //|| or "or"
        std::cout << "Both Conditions are true" << std::endl;
    } else {
        std::cout << "Not all Conditions are true" << std::endl;
    }

    bool valid = false;

    if(!valid) { //the code eblow will only execute when value is "not false" aka "true"
        std::cout << "Valid is true" << std::endl;
    } else {
        std::cout << "Valid is false" << std::endl;
    }

    std::cout << valid << std::endl;
    valid = !valid;
    std::cout << valid << std::endl;
    valid = !valid;
    std::cout << valid << std::endl;
    valid = !valid;
    std::cout << valid << std::endl;
    valid = !valid;
    std::cout << valid << std::endl;

    bool value2 = false;
    if(!value2) {
        std::cout << "True" << std::endl;
        value2 = !value2;
    } else {
        std::cout << "False" << std::endl;
        value2 = !value2;
    }
    if(!value2) {
        std::cout << "True" << std::endl;
        value2 = !value2;
    } else {
        std::cout << "False" << std::endl;
        value2 = !value2;
    }

    std::cout << "Program Ending" << std::endl;
    return 0;
}
