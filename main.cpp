#include <iostream>



int add(int a, int b){
    int sum = a + b;
    std::cout << sum << std::endl;
    return sum;
}

int main() {



    int x = 25;
    int y = 357;

    int answer = add(5, 15); //calling the add function
    std::cout << answer << std::endl;
    answer++;
    std::cout << answer << std::endl;

    add(x, y);

    std::cout << add(20, 150) << std::endl;

//
//    x = 20;
//    y = 150;
//
//    sum = x + y;
//
//    std::cout << sum << std::endl;

    std::cout << "Program Ending" << std::endl;
    return 0;
}
