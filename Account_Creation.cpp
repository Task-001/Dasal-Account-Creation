
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string username, password,email;
    cout<< "CREATE A ACCOUNT"<<endl;
    cout<< "Enter a Username: ";
    cin>> username;
    cout<< endl<< "Enter Password: ";
    cin>> password;
    cout << endl << "Enter Email: " ;
    cin >> email;
    //Display Username and Password
    cout<< "Your Username is: " <<username<< endl<< "Your password is: "<< password << endl<<  email;
}
