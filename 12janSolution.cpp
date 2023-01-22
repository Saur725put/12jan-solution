#include <iostream>
#include <string>
using namespace std;

int main() {
    string originalString;
    cout << "Enter a string: ";
    getline(cin, originalString);

    string copiedString = originalString;

    cout << "Original string: " << originalString << std::endl;
    cout << "Copied string: " << copiedString << std::endl;

    return 0;
}
