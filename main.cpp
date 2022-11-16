#include <iostream>
//#include "Day.h"
#include "Week.h"
#include "StdFunctions.h"



int main()
{
    using namespace std;

    bool b_Program_Start = true;

    cout << "Wochenplaner: v1" << endl;

    while(true)
    {
        while(true)
        {
            cout << "Enter S to start te Pprogramm or X to stop it." << std::endl;
            char i; 
            cin >> i;

            if(i != 'X' && i != 'S') cout << "You have entered an undefined letter" << endl;
            if(i == 'X')
            {
                b_Program_Start = false; 
                break;
            } 
            if(i == 'S') break;
        }

        

       
         

        cout << "What kind of Plan would you like to create? Enter the number to select: \n 1: Day \n 2: Week \n 3: Weeekend" << endl;


        unsigned int _input;
        cin >> _input;

        switch (_input)
        {
            case 1:
                Day day;

                

                day.SetName(StdFunctions::GetInputString());

                cout << day.GetName() << endl;
                break;
                

            case 2:
               
                

            case 3:
                cout << "Weekendfunction is not avalible!" << endl;
        }
        

    }

    return 0;
}