#include <iostream>
#include <cstdint>

using namespace std;

int get_user_value();
int64_t get_factirial(const int number);

int main()
{
    int students_number, seats_number;
    int64_t result;

    cout << "Enter the number of students: ";
    students_number = get_user_value();

    cout << "Enter the number of seats: ";
    seats_number = get_user_value();
    
    if (students_number > seats_number) {
        cout << "More students than places!";
    }
    else
    {
        result = get_factirial(seats_number) / get_factirial(seats_number - students_number);
        cout << result << " options to place " << students_number;
        cout << " students in " << seats_number << " seats";
    }

    return 0;
}

int get_user_value() {
    int value;
    cin >> value;
    return value;
}

int64_t get_factirial(const int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    else {
        return number * get_factirial(number - 1);
    }
}
