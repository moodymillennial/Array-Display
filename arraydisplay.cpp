/////////////////////////////////////////////////////////////////////////////////////////////////
// Joshua Stromberg
// Input: User Inputs either lower or uppercase A B C or D
// Output: Program displays array as is, from smallest to largest, or largest to smallest,
//         or program exits.
// Processes: Several voids and bools read the user input and determines the path that the
//            program should loop through, the program also uses sorting and reverse functions
//            to rearrange the arrays based on the user preference.
/////////////////////////////////////////////////////////////////////////////////////////////////
 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
 
// these are our three arrays
int hundredNumbers [100];
int smallToLargeArray[100];
int largeToSmallArray[100];
 
// the functions we will call later, this one is our random number function
int rand_int(int num, int i);
 
// this function checks whether or not our entry was valid
bool checkValid(char userInput);
 
// this function arranges the array from smallest to largest
void smallToLarge();
 
// this function arranges the array from largest to smallest
void largeToSmall();
 
// this function prints out the array we selected and brings up the menu
void printAnswer(char userInput);
 
// this is our main function
int main ()
{
    // here is where we start our random number selection
    srand((unsigned) time(NULL));
    int num = 20;
    for (int i = 0; i < 100; i++)
    {
        // call our random number function and place in array
        rand_int(num, i);
    }
    for (int i = 0; i < 100; i++)
    {
        // place the numbers from the original array in our new arrays
        smallToLargeArray[i] = hundredNumbers[i];
        largeToSmallArray[i] = hundredNumbers[i];
    }
    // sort our arrrays
    smallToLarge();
    largeToSmall();
    // loop the program part the user sees
    bool aProcessLoop = true;
    while (aProcessLoop)
    {
        // first we cue the user to see what the options are
    cout << "Menu of options:" << endl;
    cout << "A) Do not sort, output as is" << endl;
    cout << "B) Sort numbers greatest to smallest, then print" << endl;
    cout << "C) Sort numbers smallest to greatest, then print" << endl;
    cout << "D) Exit" << endl;
        // user enters what they want
    char userInput;
    cin >> userInput;
        // loop the process that runs our functions
    bool bProcessLoop = true;
    // function to check if input is valid
    if (checkValid(userInput))
    {
        printAnswer(userInput);
        bProcessLoop = false;
    }
    // exit, if the user wants
    if (userInput == 'd')
    {
        break;
    }
    if (userInput == 'D')
    {
        break;
    }
    else
    {
        cin >> userInput;
    }
        // loop again after the first time, just like before
        if (checkValid(userInput))
        {
            printAnswer(userInput);
            bProcessLoop = false;
        }
        if (userInput == 'd')
        {
            break;
        }
        if (userInput == 'D')
        {
            break;
        }
        else
        {
            cin >> userInput;
        }
    }
}
 
 
 
// random integer function to create random numbers
// and to populate our array
int rand_int(int num, int i)
{
    int createnumber;
    createnumber = (rand() % num) + 1;
    hundredNumbers[i] = createnumber;
    return 0;
}
 
// this function checks whether our entry was valid
// if not, it tells the user that their entry was invalid
bool checkValid(char userInput)
{
    switch (userInput)
    {
        case 'A' :
            return true;
        case 'a' :
            return true;
        case 'B' :
            return true;
        case 'b' :
            return true;
        case 'C' :
            return true;
        case 'c' :
            return true;
        case 'D' :
            return true;
        case 'd' :
            return true;
        default :
            cout << "Try again: ";
            return false;
    }
    return false;
}
 
// this arranges our small to large array from small to large
// and has already been populated from our original array
void smallToLarge()
{
    sort(smallToLargeArray, smallToLargeArray + 100);
}
 
// this function sorts the array from small to large
// then the function reverse the array so that it's large to small
void largeToSmall()
{
    sort(largeToSmallArray, largeToSmallArray + 100);
    reverse(begin(largeToSmallArray), end(largeToSmallArray));
}
 
// this function prints our array and the prompts the user to enter
// another input and start the whole process over
void printAnswer (char userInput)
{
    // reads the cases and prints out the appropriate array
    switch(userInput)
    {
            // unarranged array printed
        case 'a':
            for (int i = 0; i < 100; i++)
            {
                cout << hundredNumbers[i] << " ";
            }
        {
                cout << endl <<"Menu of options:" << endl;
                cout << "A) Do not sort, output as is" << endl;
                cout << "B) Sort numbers greatest to smallest, then print" << endl;
                cout << "C) Sort numbers smallest to greatest, then print" << endl;
                cout << "D) Exit" << endl;
        }
            break;
     
            // unarranged array printed
        case 'A':
            for (int i = 0; i < 100; i++)
            {
                cout << hundredNumbers[i] << " ";
            }
        {
            cout << endl <<"Menu of options:" << endl;
            cout << "A) Do not sort, output as is" << endl;
            cout << "B) Sort numbers greatest to smallest, then print" << endl;
            cout << "C) Sort numbers smallest to greatest, then print" << endl;
            cout << "D) Exit" << endl;
        }
            break;
            // smallest to largest array
        case 'c':
            for (int i = 0; i < 100; i++)
            {
                cout << smallToLargeArray[i] << " ";
            }
        {
            cout << endl <<"Menu of options:" << endl;
            cout << "A) Do not sort, output as is" << endl;
            cout << "B) Sort numbers greatest to smallest, then print" << endl;
            cout << "C) Sort numbers smallest to greatest, then print" << endl;
            cout << "D) Exit" << endl;
        }
            break;
            //smallest to largest array
        case 'C':
            for (int i = 0; i < 100; i++)
            {
                cout << smallToLargeArray[i] << " ";
            }
        {
            cout << endl <<"Menu of options:" << endl;
            cout << "A) Do not sort, output as is" << endl;
            cout << "B) Sort numbers greatest to smallest, then print" << endl;
            cout << "C) Sort numbers smallest to greatest, then print" << endl;
            cout << "D) Exit" << endl;
        }
            break;
            // largest to smallest array printed
        case 'b':
            for (int i = 0; i < 100; i++)
            {
                cout << largeToSmallArray[i] << " ";
 
            }
        {
            cout << endl <<"Menu of options:" << endl;
            cout << "A) Do not sort, output as is" << endl;
            cout << "B) Sort numbers greatest to smallest, then print" << endl;
            cout << "C) Sort numbers smallest to greatest, then print" << endl;
            cout << "D) Exit" << endl;
        }
            break;
            // largest to smallest array printed
        case 'B':
            for (int i = 0; i < 100; i++)
            {
                cout << largeToSmallArray[i] << " ";
            }
        {
            cout << endl <<"Menu of options:" << endl;
            cout << "A) Do not sort, output as is" << endl;
            cout << "B) Sort numbers greatest to smallest, then print" << endl;
            cout << "C) Sort numbers smallest to greatest, then print" << endl;
            cout << "D) Exit" << endl;
        }
            break;
    }
}
