#include <iostream>
#include <string>

using namespace std;

int main() {
    string password = "secret";
    string input;
    int attempts = 0;
    const int maxAttempts = 1; // Maximum number of allowed login attempts

    do {
        cout << "Password: ";
        cin >> input;
        attempts++;

        if (input == password) {
            cout << "You have successfully logged in." << endl;
            for(;;) {
                cout << "Enter a command: ";
                cin >> input;
                if (input == "quit") {
                    break;
                }
            }
        } else {
            cout << "Incorrect password. Attempt " << attempts << " out of " << maxAttempts << " failed." << endl;
        }

    } while (attempts < maxAttempts);

    if (attempts == maxAttempts) {
        cout << "Maximum login attempts reached. Exiting the program." << endl;
    }

    return 0;
}
