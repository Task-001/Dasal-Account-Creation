#include "Account_Creation.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string username, password, phonenumber;
    cout<< "CREATE A ACCOUNT"<<endl<<endl;
    cout<< "Enter a Username: ";
    cin>> username;
    cout<< endl<< "Enter Password: ";
    cin>> password;
    cout<< "Enter a phone number: ";
    cin>> phonenumber;

    //Display Username and Password
    cout<< "Your Username is: " <<username<< endl<< "Your password is: "<< password<<endl<<"Your Phone Number is: "<< phonenumber;
}
