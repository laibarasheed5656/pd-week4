#include <iostream>
using namespace std;

void longestTime(int hour, int min);

main()
{
    int hour;
    cout << "Enter the time in hours: ";
    cin >> hour;
    int min;
    cout << "Enter the time in minutes: ";
    cin >> min;
    longestTime(hour, min);
}

void longestTime(int hour, int min)
{
    int result = hour * 60;

    if (result > min)
    {
        cout << result;
    }

    if (min > result)
    {
        cout << min;
    }
}