#include <iostream>
using namespace std;

void result(string C, int Price);

main()
{
    string C;
    cout << "Enter the country name: ";
    cin >> C;
    int Price;
    cout << "Enter the Price of Ticket in dollars:$";
    cin >> Price;
    result(C, Price);
}

void result(string C, int Price)
{
    float Discount1, Discount2;

    if (C== "Pakistan")
    {
        Discount1 = (Price * 5) / 100;
        Discount2 = Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (C== "Ireland")
    {
        Discount1 = (Price * 10) / 100;
        Discount2 = Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (C == "India")
    {
        Discount1 = (Price * 20) / 100;
        Discount2 = Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (C == "England")
    {
        Discount1 = (Price * 30) / 100;
        Discount2 = Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }

    if (C == "Canada")
    {
        Discount1 = (Price * 45) / 100;
        Discount2 = Price - Discount1;
        cout << "Final ticket price after discount:$ " << Discount2 << endl;
    }
}