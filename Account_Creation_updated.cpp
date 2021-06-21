#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string username, password, phonenumber, email;
    cout<< "CREATE A ACCOUNT"<<endl<<endl;
    cout<< "Enter a Username: ";
    cin>> username;
    cout<< endl<< "Enter Password: ";
    cin>> password;
    cout<< "Enter a phone number: ";
    cin>> phonenumber;
    cout<< "Enter a Email: ";
    cin>> email;
    //Display Username and Password
    cout<< "Your Username is: " <<username<< endl;
    cout<< "Your password is: " << password<<endl;
    cout<< "Your Phone Number is: " <<phonenumber<<endl;
    cout<< "Your Email: " <<email;


}
