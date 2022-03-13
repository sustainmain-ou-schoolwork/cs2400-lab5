/**
 *   @file: lab5.cc
 * @author: Josh Marusek
 *   @date: 2021-09-24
 *  @brief: Prompts user for high and low temperatures, then displays the all time high and low
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main(int argc, char const *argv[]) {
    int highestTemperature;  // all-time highest temperature
    int lowestTemperature;   // all-time lowest temperature

    int dailyHigh;  // highest temperature of a given day
    int dailyLow;   // lowest temperature of a given day

    cout << "Enter the day's high followed by the day's low: ";
    cin >> dailyHigh;
    if (dailyHigh == -100) {  // check to see if user entered -100 before checking next value
        dailyLow = -100;
    }
    else {
        cin >> dailyLow;
    }
    highestTemperature = dailyHigh;
    lowestTemperature = dailyLow;

    // keep reading highs and lows until the user enters -100
    while (dailyHigh != -100) {
        if (dailyLow < lowestTemperature) {
            lowestTemperature = dailyLow;
        }
        if (dailyHigh > highestTemperature) {
            highestTemperature = dailyHigh;
        }

        cout << "Enter the day's high followed by the day's low: ";
        cin >> dailyHigh;
        if (dailyHigh == -100) {  // check to see if user entered -100 before checking next value
            dailyLow = -100;
        }
        else {
            cin >> dailyLow;
        }
    }

    // print results
    cout << "Highest: " << highestTemperature << endl;
    cout << "Lowest: " << lowestTemperature << endl;
    
    return 0;
} /// main