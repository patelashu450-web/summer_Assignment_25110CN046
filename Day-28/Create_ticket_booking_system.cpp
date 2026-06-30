#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    int id;
    string passengerName;
    string movieTitle;
    int seatNumber;
    bool isBooked = false;
};
void showMenu() {
    cout << "\n--- Ticket Booking System ---\n";
    cout << "1. View Available Seats\n";
    cout << "2. Book a Ticket\n";
    cout << "3. Cancel a Ticket\n";
    cout << "4. View Ticket Details\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}
int main() {
    const int totalSeats = 10;
    Ticket systemSeats[totalSeats];
    for (int i = 0; i < totalSeats; i++) {
        systemSeats[i].id = 100 + i;
        systemSeats[i].seatNumber = i + 1;
        systemSeats[i].movieTitle = "Sci-Fi Adventure Movie";
    }
    int choice;
    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting system. Goodbye!\n";
            break;
        }
        switch (choice) {
            case 1: {
                cout << "\n--- Seat Availability ---\n";
                for (int i = 0; i < totalSeats; i++) {
                    cout << "Seat " << systemSeats[i].seatNumber << ": ";
                    if (systemSeats[i].isBooked) {
                        cout << "[Booked]\n";
                    } else {
                        cout << "[Available]\n";
                    }
                }
                break;
            }
            case 2: {
                int seatNum;
                cout << "Enter seat number (1-10) to book: ";
                cin >> seatNum;

                if (seatNum < 1 || seatNum > totalSeats) {
                    cout << "Invalid seat number!\n";
                } else if (systemSeats[seatNum - 1].isBooked) {
                    cout << "Sorry, seat already booked!\n";
                } else {
                    cout << "Enter passenger name: ";
                    cin.ignore();
                    getline(cin, systemSeats[seatNum - 1].passengerName);
                    systemSeats[seatNum - 1].isBooked = true;
                    cout << "Ticket booked successfully! Ticket ID is: " << systemSeats[seatNum - 1].id << "\n";
                }
                break;
            }
            case 3: {
                int seatNum;
                cout << "Enter seat number (1-10) to cancel booking: ";
                cin >> seatNum;

                if (seatNum < 1 || seatNum > totalSeats) {
                    cout << "Invalid seat number!\n";
                } else if (!systemSeats[seatNum - 1].isBooked) {
                    cout << "This seat is already empty!\n";
                } else {
                    systemSeats[seatNum - 1].isBooked = false;
                    systemSeats[seatNum - 1].passengerName = "";
                    cout << "Ticket booking canceled successfully!\n";
                }
                break;
            }
            case 4: {
                int ticketId;
                cout << "Enter your Ticket ID: ";
                cin >> ticketId;

                bool found = false;
                for (int i = 0; i < totalSeats; i++) {
                    if (systemSeats[i].id == ticketId && systemSeats[i].isBooked) {
                        cout << "\n--- Ticket Information ---\n";
                        cout << "Ticket ID: " << systemSeats[i].id << "\n";
                        cout << "Passenger: " << systemSeats[i].passengerName << "\n";
                        cout << "Movie: " << systemSeats[i].movieTitle << "\n";
                        cout << "Seat Number: " << systemSeats[i].seatNumber << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "No active booking found for this Ticket ID.\n";
                }
                break;
            }
            default: {
                cout << "Invalid menu selection. Try again.\n";
                break;
            }
        }
    }

    return 0;
}
