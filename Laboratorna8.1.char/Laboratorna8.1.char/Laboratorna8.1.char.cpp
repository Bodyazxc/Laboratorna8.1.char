#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> 
using namespace std;

int CountOccurrences(const char* s) {
    int count = 0;
    while (*s) {
        if (*s == '+' || *s == '-' || *s == '=') {
            count++;
        }
        s++;
    }
    return count;
}

char* ReplaceSymbols(const char* s) {
    int len = strlen(s);
    char* t = new char[len * 2 + 1]; 
    char* p = t;

    while (*s) {
        if (*s == '+' || *s == '-' || *s == '=') {
            *p++ = '*';
            *p++ = '*';
        }
        else {
            *p++ = *s;
        }
        s++;
    }
    *p = '\0'; 
    return t;
}

int main() {
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    int occurrences = CountOccurrences(str);
    cout << "Total occurrences of '+', '-', '=': " << occurrences << endl;

    char* modifiedStr = ReplaceSymbols(str);
    cout << "Modified string: " << modifiedStr << endl;

    delete[] modifiedStr; 
    return 0;
}
