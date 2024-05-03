#include <iostream>
using namespace std;

int main(){
    string name = "";
    char initial = 'D';
    unsigned short age = 0;
    bool isAdult = false;
    unsigned int zipcode = 00000;
    float wage = 0.0f;
    unsigned short daysWorked = 0;
    unsigned short hoursWorkedPerDay = 0;
    const float tax = 0.1f;

    cout << "Enter your Name: ";
    cin >> name;

    cout << "Enter your last initial: ";
    cin >> initial;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your zipcode: ";
    cin >> zipcode;

    cout << "Enter wage: ";
    cin >> wage;

    if (age >= 18){
        isAdult = true;

        unsigned short total_hours = 0;
       
        cout << "Enter days worked: " << endl;
        cin >> daysWorked;

        for (int i = 1; i <= daysWorked; i++) {
            cout << "Enter Hours worked for day " << i << ": " << endl;
            cin >> hoursWorkedPerDay;
            total_hours = total_hours + hoursWorkedPerDay;
        }


        float gross = total_hours * wage;
        float net_income = gross - (tax * gross);

        cout << name << " worked " << total_hours << " hours at " << wage << " an hour." << endl;
        cout << "Gross income: " << gross << endl;
        cout << "Net income: " << net_income << endl;

        return 0;

    }
    else{
        isAdult = false;
        cout << "Sorry kid, no money for you";
        return 0;
    }
}

