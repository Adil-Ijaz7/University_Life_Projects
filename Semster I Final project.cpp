#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;

struct MyTime {
    int choose;
    void getData() {
        cout << "\nON WHICH TIME YOU WANT TO TRAVEL" << endl << endl;
        cout << "PRESS 1 FOR 11 AM" << endl;
        cout << "PRESS 2 FOR 10 AM" << endl;
        cout << "PRESS 3 FOR 9 AM" << endl;
        cout << "\nEnter your choice: ";
        cin >> choose;
    }
    
    void show() {
        if (choose == 1) {
            cout << "|                                                                         " << endl;
            cout << "|flight time 11 AM                                                        " << endl;
            cout << "|_________________________________________________________________________" << endl;
            cout << "                  GOOD BYE AND HAVE A SAFE JOURNEY                        " << endl;
        } else if (choose == 2) {
            cout << "|                                                                         " << endl;
            cout << "|flight time 10 AM                                                        " << endl;
            cout << "|_________________________________________________________________________" << endl;
            cout << "                  GOOD BYE AND HAVE A SAFE JOURNEY                        " << endl;
        } else if (choose == 3) {
            cout << "|                                                                         " << endl;
            cout << "|flight time 9 AM                                                         " << endl;
            cout << "|_________________________________________________________________________" << endl;
            cout << "                  GOOD BYE AND HAVE A SAFE JOURNEY                        " << endl;
        }
    }
};

struct Booking {
    int num, dd, mm, yyyy;
    char firstname[60], lastname[60], address[60], c_loc[30], dest[30];

    void getData() {
        cout << setw(40) << "\n\n     ::Please enter the required information for passenger::" << endl;
        cout << "\n\n\nEnter the firstname of passenger: ";
        cin >> firstname;
        cout << endl << "Enter the lastname of passenger: ";
        cin >> lastname;
        cout << endl << "Enter address of passenger:  ";
        cin >> address;
        cout << endl << "Enter the number of tickets: ";
        cin >> num;
        cout << endl << "Enter the current location of passenger (IN CAPITAL LETTERS ONLY):  ";
        cin >> c_loc;
        cout << endl << "Enter the destination of passenger (IN CAPITAL LETTERS ONLY):  ";
        cin >> dest;
        cout << endl << "Enter your date (dd/mm/yyyy): ";
        cin >> dd >> mm >> yyyy;
        system("CLS");
    }

    void show() {
        cout << setw(40) << "Your E-Ticket is :" << endl;
        int t = 1, r = 12345;
        cout << "                           AIRLINE TICKET                                 " << endl;
        cout << "|Ticket No." << t << "                                Reference No." << r << "\t  " << endl;
        cout << "|_________________________________________________________________________" << endl;
        cout << "|Passenger Information :                                                  " << endl;
        cout << "|Name :" << lastname << " " << firstname << "                                     " << endl;
        cout << "|Address :" << address << "                                                   " << endl;
        cout << "|Number of tickets :" << num << "                                             " << endl;
        cout << "|_________________________________________________________________________" << endl;
        cout << "|flight Information :" << endl;
        if (dd < 0 || dd > 31 || mm < 0 || mm > 12 || yyyy < 0) {
            cout << "|INVALID DATE.. ";
        } else {
            cout << "|Date :" << dd << " " << mm << " " << yyyy << endl;
        }
        cout << endl;
        cout << "|BOING 747                                                                " << endl;
        cout << "|_________________________________________________________________________" << endl;
        cout << "|Depart :" << c_loc << "                                                      " << endl;
        cout << "|Arrive :" << dest << "                                                       " << endl;
        cout << "|*BAGGAGE allowed 40 Kilos                                                " << endl;
        cout << "|*contact Airline to Confirm baggage allowance                            " << endl;
        cout << "|_________________________________________________________________________" << endl;
        t = t + 1;
        r = r + 1;
    }
};

struct Search {
    void searching() {
        cout << "FOLLOWING ARE THE FLIGHTS AVAILABLE\n" << endl;
        const char l_destination[15][40] = { "KARACHI", "ISLAMABAD", "RAWALPINDI", "HYDERABAD", "LAHORE","LONDON", "BERLIN", "DUBAI", "NEW YORK", "BEIJING", "PARIS", "CAPE TOWN", "TOKYO", "LOS ANGELES", "MIAMI" };

        
        cout << "\n\nFOLLOWING ARE THE DOMESTIC FLIGHTS AVAILABLE\n" << endl;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i != j) {
                    cout << "FLIGHT FROM " << l_destination[i] << " TO " << l_destination[j] << endl;
                }
            }
        }
    }
};

struct Local {
    int option, b_seat, e_seat, ch, k;
    MyTime t1;
    Booking b1;

    void getData() {
        k = 0;
        cout << "\n                     In which AIRLINE you want to travel!! \n" << endl;
        cout << "1) PIA" << endl;
        cout << "2) EMRATES" << endl;
        cout << "3) GO AIR" << endl;
        cout << "4) JET AIRWAYS" << endl;
        cout << "\nEnter your choice: ";
        cin >> option;
        if (option == 1) {
            cout << setw(40) << "                        ******************************" << endl;
            cout << setw(40) << "                        *        WELCOME TO PIA      *" << endl;
            cout << setw(40) << "                        ******************************" << endl;
        } else if (option == 2) {
            cout << setw(40) << "                        ******************************" << endl;
            cout << setw(40) << "                        *      WELCOME TO EMARTES    *" << endl;
            cout << setw(40) << "                        ******************************" << endl;
        } else if (option == 3) {
            cout << setw(40) << "                        ******************************" << endl;
            cout << setw(40) << "                        *      WELCOME TO GO AIR     *" << endl;
            cout << setw(40) << "                        ******************************" << endl;
        } else if (option == 4) {
            cout << setw(40) << "                        ******************************" << endl;
            cout << setw(40) << "                        *    WELCOME TO JET AIRWAYS  *" << endl;
            cout << setw(40) << "                        ******************************" << endl;
        }
        
        cout << setw(40) << "\nTHESE ARE THE PLACES AVAILABLE\n\n";
        const char l_destination[15][40] = { "KARACHI", "ISLAMABAD", "RAWALPINDI", "HYDERABAD", "LAHORE","LONDON", "BERLIN", "DUBAI", "NEW YORK", "BEIJING", "PARIS", "CAPE TOWN", "TOKYO", "LOS ANGELES", "MIAMI" };
        for (int i = 0; i < 5; i++) {
            cout << l_destination[i] << endl;
        }
        b1.getData();
        for (int j = 0; j < 5; j++) {
            if (strcmp(l_destination[j], b1.c_loc) == 0) {
                k++;
            }
        }
        if (k == 1) {
            cout << "\n\n                FLIGHT AVAILABLE ON THIS ROUTE" << endl;
            b_seat = 30;
            e_seat = 40;
            cout << "\n In which class you want to travel?" << endl;
            cout << "\n\n\n\n\n\n";
            cout << setw(60) << "*************************************" << endl;
            cout << setw(60) << "*     Press 1 for business class    *" << endl;
            cout << setw(60) << "*     Press 2 for economy class     *" << endl;
            cout << setw(60) << "*************************************" << endl << endl << endl << endl;
            cout << "\n Enter your choice: ";
            cin >> ch;
            cout << endl;
            if (ch == 1) {
                if (b_seat <= 0)
                    cout << "             SORRY NO SEAT AVAILABLE" << endl;
                else
                    cout << "             SEAT AVAILABLE" << endl;
            } else if (ch == 2) {
                if (e_seat <= 0)
                    cout << "             SORRY NO SEAT AVAILABLE" << endl;
                else
                    cout << "             SEAT AVAILABLE" << endl;
            }
        } else {
            cout << "\n                FLIGHT NOT AVAILABLE ON THIS ROUTE" << endl;
        }
        t1.getData();
        t1.show();
        b1.show();
    }
};

int main() {
    int ch, ch1;
    Search s1;
    Local l1;
     cout<<endl<<"\n\t\t     WELCOME TO AIRWAYS RESERVATION SYSTEM";
    cout<<"\n\n\n\t\t          Developed by :";
    cout<<" ADIL IJAZ ";
    cout<<"\n\n\t\t                         ABDUL SAMAD";
    cout<<"\n\n\t\t                         ABDUL KABEER";
    cout<<"\n\n\t\t                         MAJID ALI";

    do {
        cout <<endl<< "\n\t\t\t               ** MAIN MENU **" << endl;
        cout << "\n\t\t\t\t1. FLIGHT BOOKING" << endl;
        cout << "\n\t\t\t\t2. LIST FLIGHTS" << endl;
        cout << "\n\t\t\t\t3. EXIT PROGRAM" << endl;
        cout << "\n\t\t\t\tEnter your choice : ";
        cin >> ch;
        if (ch == 1) {
            l1.getData();
        } else if (ch == 2) {
            s1.searching();
        }
        cout << "Do you want to go to the main menu again? (1=YES, 0=NO): ";
        cin >> ch1;
    } while (ch1 == 1);
    
    return 0;
}

