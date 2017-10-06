//
//  main.cpp
//  PRG-3-5-Male-and-Female-Percentages
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks the user for the number of males and the number of females
//  registered in a class. The program should display the percentage of males and females
//  in the class.
//  Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
//  class. The percentage of males can be calculated as 8 / 20 = 0.4, or 40 percent. The
//  percentage of females can be calculated as 12 / 20 = .6, or 60 percent.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Define ints for classmates (whole people)
    int intClassmatesMale,
        intClassmatesFemale,
        intClassmatesTotal;
    
    // Define floats for percentages (average with decimal points)
    float fltPercentageMale,
          fltPercentageFemale;
    
    // Configure decimal to show a single point of precision
    cout << setprecision(1) << fixed << showpoint;
    
    //Get user inputs for number of male and female students + data validation
    cout << "Please enter the number of males in your class: " << endl;
    cin >> intClassmatesMale;
    while(!cin || intClassmatesMale < 0 || intClassmatesMale > 100)
    {
        cout << "Please enter a number of males between 0 and 100:\n";
        cin.clear();
        cin.ignore();
        cin >> intClassmatesMale;
    }
    
    cout << "Please enter the number of females in your class: " << endl;
    cin >> intClassmatesFemale;
    while(!cin || intClassmatesFemale < 0 || intClassmatesFemale > 100)
    {
        cout << "Please enter a number of females between 0 and 100:\n";
        cin.clear();
        cin.ignore();
        cin >> intClassmatesFemale;
    }
    
    // Calculate total number of people in the class
    intClassmatesTotal = intClassmatesMale + intClassmatesFemale;
    
    // Calculate percentages
    fltPercentageMale = 100 * (static_cast<float>(intClassmatesMale) / static_cast<float>(intClassmatesTotal));
    fltPercentageFemale = 100 * (static_cast<float>(intClassmatesFemale) / static_cast<float>(intClassmatesTotal));
    
    // Output calculated class percentage information
    cout << endl << "For a class of size " << intClassmatesTotal << endl;
    
    cout << "The percentage of males in the class is: " << endl;
    cout << fltPercentageMale << endl;
    
    cout << "And the percentage of females in the class is: " << endl;
    cout << fltPercentageFemale;
    
    return 0;
}
