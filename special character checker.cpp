#include <iostream>
#include <cctype>  
using namespace std;
bool containsSpecialCharacters(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (!isalnum(str[i])) {
            return true;  
        }
    }
    return false;  
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (containsSpecialCharacters(input)) {
        cout << "The string contains special characters." << endl;
    } else {
        cout << "The string does not contain any special characters." << endl;
    }
    return 0;
}
