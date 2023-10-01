#include <iostream>
using namespace std;

void checkingSpeed(int speed);

main()
{
    int speed;
    cout << "Enter your speed: ";
    cin >> speed;
    checkingSpeed(speed);
}

void checkingSpeed(int speed)
{
    if (speed > 100)
    {
        cout << "Halt… YOU WILL BE CHALLENGED!!!";
    }

    if (speed < 100)
    {
        cout << "Perfect! You are going good.";
    }
}