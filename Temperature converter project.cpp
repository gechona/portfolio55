#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, result;
    
    while(true) {
        cout << "\nTemperature Converter:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice == 7) {
            cout << "Thank you!" << endl;
            break;
        }
        else if(choice == 1) {
            cout << "Enter Celsius: ";
            cin >> temp;
            result = (temp * 9/5) + 32;
            cout << temp << "°C = " << result << "°F" << endl;
        }
        else if(choice == 2) {
            cout << "Enter Fahrenheit: ";
            cin >> temp;
            result = (temp - 32) * 5/9;
            cout << temp << "°F = " << result << "°C" << endl;
        }
        else if(choice == 3) {
            cout << "Enter Celsius: ";
            cin >> temp;
            result = temp + 273.15;
            cout << temp << "°C = " << result << "K" << endl;
        }
        else if(choice == 4) {
            cout << "Enter Kelvin: ";
            cin >> temp;
            result = temp - 273.15;
            cout << temp << "K = " << result << "°C" << endl;
        }
        else if(choice == 5) {
            cout << "Enter Fahrenheit: ";
            cin >> temp;
            result = (temp - 32) * 5/9 + 273.15;
            cout << temp << "°F = " << result << "K" << endl;
        }
        else if(choice == 6) {
            cout << "Enter Kelvin: ";
            cin >> temp;
            result = (temp - 273.15) * 9/5 + 32;
            cout << temp << "K = " << result << "°F" << endl;
        }
        else {
            cout << "Invalid choice! Please enter 1-7" << endl;
        }
    }
    
    return 0;
}