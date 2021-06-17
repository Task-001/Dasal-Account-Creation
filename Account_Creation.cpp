#include "Account_Creation.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string username, password;
    cout<< "CREATE A ACCOUNT"<<endl;
    cout<< "Enter a Username: ";
    cin>> username;
    cout<< endl<< "Enter Password: ";
    cin>> password;

    //Display Username and Password
    cout<< "Your Username is: " <<username<< endl<< "Your password is: "<< password;
}
