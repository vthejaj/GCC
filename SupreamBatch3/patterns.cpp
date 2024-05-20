#include <iostream>
using namespace std;

void hollowrectangle() {
    cout << "Enter no of ROWS: ";
    int ROWS = 0;
    cin >> ROWS;

    cout << "Enter no of COLS: ";
    int COLS = 0;
    cin >> COLS;

    for(int r = 0; r < ROWS; r++) { 
        for(int c = 0; c < COLS; c++) {
            if (r == 0 || r == ROWS-1 || c == 0 || c == COLS-1) {
                cout << "* ";
            }
            else { 
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void invertedtriangle() {
    cout << "Enter the size of square: ";
    int SQUARE_SIZE = 0;
    cin >> SQUARE_SIZE;

    
    for(int r = 0; r < SQUARE_SIZE; r++) { 
        for(int c = 0; c < SQUARE_SIZE - r; c++) {
            cout << "* ";            
        }
        cout << endl;
    }
}
void printtriangle() {
    cout << "Enter the size of square: ";
    int SQUARE_SIZE = 0;
    cin >> SQUARE_SIZE;

    
    for(int r = 0; r < SQUARE_SIZE; r++) { 
        for(int c = 0; c < r + 1; c++) {
            cout << "* ";            
        }
        cout << endl;
    }
}


int main() {
    invertedtriangle();
    hollowrectangle();
    printtriangle();        
    return 0;
}
