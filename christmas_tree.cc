#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Enter the height of the Christmas tree: ";
    cin >> height;

    for (int level = 1; level <= height; level++) {
        int stars = 2 * level - 1;
        int spaces = height - level;    
        
        for (int i = 0; i < spaces; i++) {
            cout << " ";
        }
        for (int i = 0; i < stars; i++) {
            cout << "*";
        }
        cout << endl;
    }

    int trunkWidth = 3;
    int trunkSpaces = height - 2;

    for (int i = 0; i < 3; i++) {
        for (int s = 0; s < trunkSpaces; s++) {
            cout << " ";
        }
        cout << "###" << endl;
    }

    return 0;
}