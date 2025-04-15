#include <iostream>
#include <string>
using namespace std;

int main() {
    // Get password length and password from user
    int length;
    string password;
    cout << "Enter password length: ";
    cin >> length;
    cout << "Enter password: ";
    cin >> password;

    // Check if password has required characters
    bool hasNumber = false;
    bool hasLowercase = false;
    bool hasUppercase = false;
    bool hasSpecial = false;

    // Check each character in password
    for (int i = 0; i < length; i++) {
        char c = password[i];
        
        // Check for numbers
        if (c >= '0' && c <= '9') {
            hasNumber = true;
        }
        // Check for lowercase letters
        else if (c >= 'a' && c <= 'z') {
            hasLowercase = true;
        }
        // Check for uppercase letters
        else if (c >= 'A' && c <= 'Z') {
            hasUppercase = true;
        }
        // Check for special characters
        else {
            hasSpecial = true;
        }
    }

    // Count missing requirements
    int missing = 0;
    if (!hasNumber) missing++;
    if (!hasLowercase) missing++;
    if (!hasUppercase) missing++;
    if (!hasSpecial) missing++;

    // Calculate minimum characters needed
    int minLength = 6;
    int neededForLength = minLength - length;
    if (neededForLength < 0) neededForLength = 0;

    // Final answer is the larger of missing requirements or needed length
    int answer = missing;
    if (neededForLength > missing) {
        answer = neededForLength;
    }

    // Show results
    cout << "\nPassword Analysis:\n";
    cout << "Numbers: " << (hasNumber ? "Yes" : "No") << endl;
    cout << "Lowercase: " << (hasLowercase ? "Yes" : "No") << endl;
    cout << "Uppercase: " << (hasUppercase ? "Yes" : "No") << endl;
    cout << "Special Characters: " << (hasSpecial ? "Yes" : "No") << endl;
    cout << "\nMinimum characters needed to make password strong: " << answer << endl;

    return 0;
}
