#include <iostream>
using namespace std;

void possibleBonus(int YourPosition, int FriendPosition);

main()
{
    int YourPosition;
    cout << "Enter your position: ";
    ;
    cin >> YourPosition;
    int FriendPosition;
    cout << "Enter your friend's position:";
    cin >> FriendPosition;
    possibleBonus(YourPosition, FriendPosition);
}

void possibleBonus(int YourPosition, int FriendPosition)
{
    int result = FriendPosition - YourPosition;

    if (result <= 6)
    {
        cout << "true";
    }

    if (result > 6)
    {
        cout << "false";
    }
}