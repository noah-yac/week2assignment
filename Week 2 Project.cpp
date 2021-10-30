/*
Noah Yacoub
10/30/2021
ITCS 2530
Week 02 Programming Assignment
*/

#include <iostream>
//adds format manipulators
#include <iomanip>
//includes to_string()
#include <string>

using namespace std;

int main()
{
    //variables
    int cheesekgP, cheeseCont;
    float cheeseCPrice, cheeseProfits;


    //character variable set
    //char 1 for intro text char2 for inbetween sentences and numbers
    char char1 = '*';
    char char2 = '.';

    //line 1
    cout << setfill(char1) << setw(75);
    cout << char1 << '\n';

    //line 2
    cout << setfill(char1) << setw(20);
    cout << char1;
    cout << setfill(char1) << left << setw(55);
    cout << " Noah Yacoub's Week 2 Project " << '\n';

    //line 3
    cout << setfill(char1) << setw(75);
    cout << char1 << '\n';

    //ask question & take input
    cout << '\n' << "Enter how much cheese has been produced (kg): ";
    cin >> cheesekgP;
    
    //gets cheese container count
    cheeseCont = (cheesekgP / 2.76)+1;

    //gets price of x containers of cheese and rounds to two decimal places (NOTE: has extra or not enough zeros!!!)
    cheeseCPrice = floor(((cheeseCont * 4.12) * 100) + 0.5) / 100;

    //calculates profits
    cheeseProfits = floor(((cheeseCont * 1.45) * 100) + .5) / 100;

    //define strings for sentences
    string s1 = "Cheese containers required to hold cheese: ";
    string s2 = "The cost to make " + to_string(cheeseCont) + " container(s) of cheese: ";
    string s3 = "Profit from " + to_string(cheeseCont) + " container(s) of cheese is: ";

    //console output lines, made sure to align
    cout << setfill(char2) << setw(20) << left << s1 << setfill(char2) << setw(23) << right << char2 << char2 << char2 << to_string(cheeseCont) << '\n';
    //print price of cheese while removing hanging zeros
    cout << setfill(char2) << setw(20) << left << s2 << setfill(char2) << setw(23) << right  << "$";
    printf("%.2f", cheeseCPrice);
    cout << '\n';
    //print profit while removing hanging zeros
    cout << setfill(char2) << setw(20) << left << s3 << setfill(char2) << setw(23) << right << char2 << char2 << "$";
    printf("%.2f", cheeseProfits);
    cout << '\n';
   
}

/*
removed code
    //#include <cmath>

    //cout.fill('*');
    //cout.width(10);
    //cout << left << 25;

    string cheeseString = to_string(cheeseCPrice);

    //cout << (cheeseString);

    //string A2 = "The price of " + to_string(cheeseCont) + " container(s) produced is: ";
    //cout << setfill(char1) << setw(20) << left << 12 << setfill(char1) << setw(20) << right << 22;
*/