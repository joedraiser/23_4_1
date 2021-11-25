#include <iostream>

#define MONDAY "monday"
#define TUESDAY "tuesday"
#define WEDNESDAY "wednesday"
#define THURSDAY "thursday"
#define FRIDAY "friday"
#define SATURDAY "saturday"
#define SUNDAY "sunday"


int main() {
    std::cout << "Enter day of the week: ";
    int num;
    std::cin >> num;

    if(num == 1)
        std::cout << MONDAY;
    else if(num == 2)
        std::cout << TUESDAY;
    else if(num == 3)
        std::cout << WEDNESDAY;
    else if(num == 4)
        std::cout << THURSDAY;
    else if(num == 5)
        std::cout << FRIDAY;
    else if(num == 6)
        std::cout << SATURDAY;
    else if(num == 7)
        std::cout << SUNDAY;

    return 0;
}
