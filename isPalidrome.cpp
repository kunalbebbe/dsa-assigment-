#include <iostream>
#include <string>
#include <list>

using namespace std;

bool isPalindrome(string name) {
    int left = 0;
    int right = name.length() - 1;

    while (right > left) {
        if (name[right] != name[left]) {
            return false;
        }
        right--;
        left++;
    }

    return true;
}

int main() {
    list<string> names;
    names.push_back("madam");
    names.push_back("racecar");
    names.push_back("level");
    names.push_back("hello");

    for (string name : names) {
        if (isPalindrome(name)) {
            cout << name << " is a palindrome." << endl;
        } else {
            cout << name << " is not a palindrome." << endl;
        }
    }

    return 0;
}
