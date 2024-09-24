#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{ /* Jonathan Alaniz, Samantha Butke, Katie Diel, Logan Farmer, Johan Garcia, Justin Garza
9//28//24
At the temperature what substance will freeze or boil?*/

double temperature;


cout << "Enter the temperature in Fahrenheit ";
cin >> temperature;

    if (temperature <= -173){
        cout << "Ethyl Alcohol will freeze." << endl;
    }
    else 
        if (temperature >= 172){
        cout << "Ethyl Alcohol will boil." << endl;
    }

    if (temperature <= -38){
        cout << "Mercury will freeze." << endl;
    }
    else
        if (temperature >= 676){
            cout << "Mercury will boil." << endl;
        }
    if (temperature <= -362){
        cout << "Oxygen will freeze." << endl;
    }
    else
        if (temperature >= -306){
            cout << "Oxygen will boil." << endl;
        }
    if (temperature <= 32){
        cout << "Water will freeze." << endl;
    }
    else
        if (temperature >= 212){
            cout << "Water will boil." << endl;
        }


return 0;
}