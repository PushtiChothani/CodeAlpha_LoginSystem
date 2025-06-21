#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;
string us[MAX];
string pwds[MAX];
int Count = 0;

void registerUsr(){
    string u, pwd;
    cout << "\n User Registration" << endl;
    cout << "Enter username: ";
    cin >> u;

   
    for (int i = 0; i < Count; i++) {
        if (us[i] == u) {
            cout << "Username already exists. Please try another." << endl;
            return;
        }
    }

    cout << "Enter password: ";
    cin >> pwd;

    if (Count < MAX) {
        us[Count] = u;
        pwds[Count] = pwd;
        Count++;
        cout << "Registration successful!" << endl;
    } else {
        cout << "User limit reached!" << endl;
    }
}

void loginUsr() {
    string u, pwd;
    cout << "\n User Login " << endl;
    cout << "Enter username: ";
    cin >> u;
    cout << "Enter password: ";
    cin >> pwd;

    for (int i = 0; i < Count; i++) {
        if (us[i] == u && pwds[i] == pwd) {
            cout << "Login successful. Welcome, " << u << "!" << endl;
            return;
        }
    }

    cout << "Invalid username or password!" << endl;
}

int main() {
    int choice;
    do {
        cout << "\n MENU" << endl;
        cout << "1. Register\n2. Login\n3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUsr();
                break;
            case 2:
                loginUsr();
                break;
            case 3:
                cout << "Thank you. Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
