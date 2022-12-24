#include <iostream>
#include <istream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void login();
void registr();
void forgot();

int main()
{
    int choice;
    cout << "****** LOGIN *******\n";
    cout << "1.Login";
    cout << "\n2.Register";
    cout << "\n3.Forgot credentials";
    cout << "\nEnter yout choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            login();
            break;
        case 2:
            registr();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout << "Thank for using the login page\n";
            break;
        default:
            cout << "Sorry, wrong choice!\n";
            main();
    }
}
void registr()
{
    string reguser, regpass;
    system("cls");
    cout << "Enter your name: ";
    cin >> reguser;
    cout << "Enter the password: ";
    cin >> regpass;

    ofstream reg("database.txt", ios::app);
    reg << reguser << ' ' << regpass << endl;
    system("cls");
    cout << "Registration is successful\n";
    main();
}
void login()
{
    int exist;
    string user, pass, u, p;
    system("cls");
    cout << "Enter your name: ";
    cin >> user;
    cout << "\nEnter your password: ";
    cin >> pass;

    ifstream input("database.txt");
    while (input >> u >> p)
    {
        if (u == user && p == pass)
        {
            exist = 1;
        }
    }
    input.close();
    if (exist == 1)
    {
        cout << "Hello " << user << "\nWe're glad that you're here\n";
        cin.get();
        cin.get();
        main();
    }
    else
    {
        cout << "Login error!";
        cin.get();
        cin.get();
        main();
    }
}
void forgot()
{
    int ch;
    system("cls");
    cout << "1. Search your acc by username";
    cout << "\n2. Search your acc by password";
    cout << "\n3. Main menu";
    cout << "\nEnter your choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        int ex = 0;
        string searchuser, su, sp; //
        cout << "Enter your remembered username :";
        cin >> searchuser; //

        ifstream searchu("database.txt");
        while (searchu >> su >> sp)
        {
            if (su == searchuser)
            {
                ex = 1;
                break;
            }
        }
        searchu.close();
        if (ex == 1)
        {
            cout << "Hurray ! account found !\n";
            cout << "your password is " << sp;
            cin.get();
            cin.get();
            main();
        }
        break;
    }
    case 2:
    {
        int exi = 0;
        string searchpass, su2, sp2;
        cout << "Enter the remembered password :";
        cin >> searchpass;

        ifstream searchp("database.txt");
        while (searchp >> su2 >> sp2)
        {
            if (sp2 == searchpass)
            {
                exi = 1;
            }
        }
        searchp.close();
        if (exi == 1)
        {
            cout << "hurray ! the account found \n";
            cout << "YOUR NAME IS : " << su2;
            cout << "YOUR PASSWORD IS: " << sp2;
            cin.get();
            cin.get();
            main();
        }
        break;
    }
    case 3:
    {
        main();
        break;
    }
    default:
    {
        cout << "you have given a wrong choice. Please choice again!";
        cin.get();
        cin.get();
        forgot();
    }
   }
}