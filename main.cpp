/*Jermaic A. Fuentes CSC210   5/26/2025*/

#include <iostream>
#include <iomanip>

using namespace std;

// Clock class definition
class Clock {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor
    Clock(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    // Set the time
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }

    // Add one hour
    void addHour() {
        hour = (hour + 1) % 24;
    }

    // Add one minute
    void addMinute() {
        minute = (minute + 1) % 60;
        if (minute == 0) {
            addHour(); // increment hour if minute overflows
        }
    }

    // Add one second
    void addSecond() {
        second = (second + 1) % 60;
        if (second == 0) {
            addMinute(); // increment minute if second overflows
        }
    }

    // Display time in 12-hour format
    void display12HourFormat() const {
        int displayHour = hour % 12;
        if (displayHour == 0) displayHour = 12;

        string meridiem = (hour >= 12) ? "PM" : "AM";

        cout << setw(2) << setfill('0') << displayHour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second << " " << meridiem;
    }

    // Display time in 24-hour format
    void display24HourFormat() const {
        cout << setw(2) << setfill('0') << hour << ":"
             << setw(2) << setfill('0') << minute << ":"
             << setw(2) << setfill('0') << second;
    }
};

// Function to display both clocks
void displayClocks(const Clock& clock) {
    cout << "\n********************" << + "   " << +  "********************\n";
    cout << "*   12-Hour Clock  *   " << + "*   24-Hour Clock  *\n";
    cout << "*   ";
    clock.display12HourFormat();
    cout << "    *   "<< + "*   ";
    clock.display24HourFormat();
    cout << "       *\n";
    cout << "********************"<< + "   " << + "********************\n";
}

// Function to display the menu
void displayMenu() {
    cout << endl;
    cout << "********************************"<<endl;
    cout <<   "* 1 - Add One Hour      *" << endl;
    cout <<   "* 2 - Add One Minute    *" << endl;
    cout <<   "* 3 - Add One Second    *" << endl;
    cout <<   "* 4 - Exit Program      *" << endl;
    cout << "********************************"<<endl;
    cout << "Select an option: ";
}

int main() {
    int hour, minute, second;

    // Get initial time from user
    cout << "Enter initial hour (0-23): ";
    cin >> hour;
    while (hour < 0 || hour > 23) {
        cout << "Invalid input. Enter hour (0-23): ";
        cin >> hour;
    }

    cout << "Enter initial minute (0-59): ";
    cin >> minute;
    while (minute < 0 || minute > 59) {
        cout << "Invalid input. Enter minute (0-59): ";
        cin >> minute;
    }

    cout << "Enter initial second (0-59): ";
    cin >> second;
    while (second < 0 || second > 59) {
        cout << "Invalid input. Enter second (0-59): ";
        cin >> second;
    }

    // Create clock object
    Clock myClock(hour, minute, second);

    // Menu loop
    int choice;
    do {
        displayClocks(myClock);
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                myClock.addHour();
                break;
            case 2:
                myClock.addMinute();
                break;
            case 3:
                myClock.addSecond();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid selection. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
