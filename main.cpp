#include <iostream>

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7


int main() {
    std::cout << "Enter day of the week: ";
    int num;
    std::cin >> num;

    if(num == MONDAY)
        std::cout << "monday";
    else if(num == TUESDAY)
        std::cout << "tuesday";
    else if(num == WEDNESDAY)
        std::cout << "wednesday";
    else if(num == THURSDAY)
        std::cout << "thursday";
    else if(num == FRIDAY)
        std::cout << "friday";
    else if(num == SATURDAY)
        std::cout << "saturday";
    else if(num == SUNDAY)
        std::cout << "sunday";

    return 0;
}
