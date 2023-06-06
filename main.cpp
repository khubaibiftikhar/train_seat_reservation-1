#include <iostream>
#include <iomanip>
#include <fstream>

#include <cstdio>
#include <cstdlib>
#include <cstring>

// #include "NAME/name.h"
#include "SEAT/seats.h"
using namespace std;
ofstream file("tet_file.txt");
int main()

{
    int a, b;

    seats number;

userInput:
    string name;
    int seat_num;
    char class_type;
    int Ticket_price;

    cout << "! Welcome the counter !\n\n"
         << endl;
    cout << "We have three types of ticket    \n"
         << "Please Select from the following :\n"
         << "a : Lowerclass \n"
         << "b : Upperclass \n"
         << "c : Lowerclass2 \n"
            "d : check veiw the train"
         << endl;
    cout << "Please Enter your choice : ";



    cin >> class_type;
    cout << endl;

    switch (class_type)
    {
    case 'a':
    {
        cout << "\nPlease enter your name : ";
        cin >> name;

        cout << "\nCheck the train\n";

        cout << "  * * * * * * * * * * *\n";
        cout << " * * * * * * * * * * * *\n";
        cout << "* * * * * * * * * * * * *\n";
        cout << "               \n";
        cout << "\nCheck the seats\n";
        cout << "*************************\n";
        cout << "                \n";

        number.lowerclass(seat_num, a, b);

        Ticket_price = 400;
        cout << "\n\nTicket Information\n"
             << "Your box is :" << class_type
             << "\nName: " << name << " \n"
             << "Seat number: " << number.getdata(seat_num) << "\nTicket price :" << Ticket_price << "  Rs"
             << "\n\n Thank you for purchasing the ticket\n";
        file << "  name   " << name << "   seat_num    " << number.getdata(seat_num) << "  class_type   " << class_type;
        file << endl;
    }

    break;
    case 'b':
    {
        cout << "\nPlease enter your name : ";
        cin >> name;
        cout << "\nCheck the train\n";

        cout << "  * * * * * * * * * * *\n";
        cout << " * * * * * * * * * * * *\n";
        cout << "* * * * * * * * * * * * *\n";
        cout << "               \n";
        cout << "\nCheck the seats\n";
        cout << "*************************\n";
        cout << "                \n";

        number.upperclass(seat_num, a, b);

        Ticket_price = 500;
        cout << "\n\nTicket Information\n"
             << "Your box is :" << class_type << "\nName: " << name << " \n"
             << "Seat number: " << number.getdata(seat_num) << "\nTicket price :" << Ticket_price << "  Rs"
             << "\n\n Thank you for purchasing the ticket\n";
        file << "  name   " << name << "   seat_num    " << number.getdata(seat_num) << "  class_type   " << class_type;
        file << endl;
    }
    break;
    case 'c':
    {
        cout << "\nPlease enter your name : ";
        cin >> name;

        cout << "\nCheck the train\n";

        cout << "  * * * * * * * * * * *\n";
        cout << " * * * * * * * * * * * *\n";
        cout << "* * * * * * * * * * * * *\n";
        cout << "               \n";
        cout << "\nCheck the seats\n";
        cout << "*************************\n";
        cout << "                \n";

        number.lowerclass2(seat_num, a, b);

        Ticket_price = 200;
        cout << "\n\n! Ticket Information !\n"
             << "Your box is :" << class_type << "\nName: " << name << " \n"
             << "Seat number: " << number.getdata(seat_num) << "\nTicket price :" << Ticket_price << "  Rs"
             << "\n\n Thank you for purchasing the ticket\n";
        file << "  name   " << name << "   seat_num    " << number.getdata(seat_num) << "  class_type   " << class_type;
        file << endl;
    }

    break;

    case 'd':
    {
        number.seating();
            
        // cout << "  * * * * * * * * * * *\n";
        // cout << " * * * * * * * * * * * *\n";
        // cout << "* * * * * * * * * * * * *\n";
        // cout << "               \n";
        // cout << "\nCheck the seats\n";
        // cout << "*************************\n";
        // cout << "                \n";

    //     number.lowerclass(seat_num, a, b);
    //     cout << "*************************\n";
    //     number.upperclass(seat_num, a, b);
    //     cout << "*************************\n";
    //     number.lowerclass2(seat_num, a, b);
    //     cout << "*************************\n";
    }
    break;
    default:
        cout << "No more box are available";
    }


    goto userInput;

    system("PAUSE");
    return EXIT_SUCCESS;
}
