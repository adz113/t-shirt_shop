// t-shirt shop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int shirts = 0;
    cout << "How many shirts would you like? ";
    cin >> shirts;
    double discount = 0;
    double total = 0;
    

    switch (shirts) {
    case 0:
        cout << "The cost per shirt is $12 and the total cost is $0" << endl; 
        break;
    case 1:
    case 2: 
        cout << "The cost per shirt is $" << (shirts * 12) / shirts << " and the total cost is $" << shirts * 12 << endl; 
        break;
    case 3:
    case 4: 
    case 5:
        discount = shirts * 12 * 0.10;
        total = (shirts * 12) - discount;
        cout << "The cost per shirt is $" << total / shirts << " and the total cost is $" << total << endl;
        break;
    case 6:
    case 7:
    case 8: 
        discount = shirts * 12 * 0.15;
        total = (shirts * 12) - discount;
        cout << "The cost per shirt is $" << total / shirts << " and the total cost is $" << total << endl;
        break;
    case 9:
    case 10:
    case 11:
        discount = shirts * 12 * 0.20;
        total = (shirts * 12) - discount;
        cout << "The cost per shirt is $" << total / shirts << " and the total cost is $" << total << endl;
        break;
    default:
        discount = shirts * 12 * 0.25;
        total = (shirts * 12) - discount;
        cout << "The cost per shirt is $" << total / shirts << " and the total cost is $" << total << endl;
        break;
    }
    
}

