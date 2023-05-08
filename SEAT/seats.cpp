#include "seats.h"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void seats::lowerclass(int num, int i, int j)
{
    seats::lowerclass_seatnum[5][4];
    // = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 4; j++)
        {

            cout << setw(5) << lowerclass_seatnum[i][j];
        }

        cout << endl;
    }
    seats::lowerclass_temp[5][4];

    cout << "\nplease enter your seat number : ";
    cin >> num;
    seats::setdata(num);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (num == lowerclass_temp[i][j])

                cout << "**Seat is taken**\n\n";
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (num == lowerclass_seatnum[i][j])
            {

                lowerclass_temp[i][j] = lowerclass_seatnum[i][j];

               lowerclass_seatnum[i][j] = 0;

                cout << endl;

                cout << " **Seat successfully reserved**\n\n";
            }
        }
    }

    if (num = 0 || num > 20)

        cout << "**Invalid seat number * *" << endl;

    while (cin.fail())
    {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << " **Invalid seat number***";
    }
}

// -----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

void seats::upperclass(int num, int i, int j)

{
    seats::upperclass_seatnum[5][4];
    //  = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 4; j++)
        {

            cout << setw(5) << upperclass_seatnum[i][j];
        }

        cout << endl;
    }

    seats::upperclass_temp[5][4];

    cout << "\nplease enter your seat number : ";
    cin >> num;

    seats::setdata(num);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (num == upperclass_temp[i][j])

                cout << "**Seat is taken**\n\n";
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (num == upperclass_seatnum[i][j])
            {

                upperclass_temp[i][j] = upperclass_seatnum[i][j];

                upperclass_seatnum[i][j] = 0;

                cout << endl;

                cout << " **Seat successfully reserved**\n\n";
            }
        }
    }

    if (num = 0 || num > 20)

        cout << "**Invalid seat number * *" << endl;

    while (cin.fail())
    {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << " **Invalid seat number***";
    }
}
// ---------------------------------------------------
// ------------------------------------------------

void seats::lowerclass2(int num, int i, int j)

{
    seats::lowerclass2_seatnum[5][4];
    //  = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 4; j++)
        {

            cout << setw(5) << lowerclass2_seatnum[i][j];
        }

        cout << endl;
    }

    seats::lowerclass2_temp[5][4];
    cout << "\nplease enter your seat number : ";
    cin >> num;
    seats::setdata(num);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (num == lowerclass2_temp[i][j])

                cout << "**Seat is taken**\n\n";
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (num == lowerclass2_seatnum[i][j])
            {

                lowerclass2_temp[i][j] = lowerclass2_seatnum[i][j];

                lowerclass2_seatnum[i][j] = 0;

                cout << endl;

                cout << " **Seat successfully reserved**\n\n";
            }
        }
    }

    if (num = 0 || num > 20)

        cout << "**Invalid seat number * *" << endl;

    while (cin.fail())
    {

        cin.clear();

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << " **Invalid seat number***";
    }
}

void seats::seating()
{
    cout << "    * * * * * * * * *" << endl;
    cout << "  * * * * * * * * * * *\n";
    cout << " * * * * * * * * * * * *\n";
    cout << "* * * * * * * * * * * * *\n";
    int arr[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    int i, j;
    int arra[5][2] = {{11, 12}, {13, 14}, {15, 16}, {17, 18}, {19, 20}};
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << "   |     ";
        for (j = 0; j < 2; j++)
        {
            cout << arra[i][j] << "   ";
        }
        cout << "\n-------------------------";
        cout << endl;
    }

    cout << "*************************" << endl;
    int arar[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    int arara[5][2] = {{11, 12}, {13, 14}, {15, 16}, {17, 18}, {19, 20}};
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << arar[i][j] << "   ";
        }
        cout << "   |     ";
        for (j = 0; j < 2; j++)
        {
            cout << arara[i][j] << "   ";
        }
        cout << "\n-------------------------";
        cout << endl;
    }
    cout << "*************************" << endl;
    int aarr[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    int aarra[5][2] = {{11, 12}, {13, 14}, {15, 16}, {17, 18}, {19, 20}};
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << aarr[i][j] << "   ";
        }
        cout << "   |     ";
        for (j = 0; j < 2; j++)
        {
            cout << aarra[i][j] << "   ";
        }
        cout << "\n-------------------------";
        cout << endl;
    }
}
// int seats::getdata(int num)
// {

//      num==Seat_num;
// }
// int seats::setdata(int num)
// {
//     cout<<Seat_num;

// }
