#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    /*THIS PROMPT THE USER TO ENTER VALUES LESS THAN OR EQUAL TO 3*/
    do {
        cout << "Enter the number of rows less than or equal to 3: ";
        cin >> rows;
        if (rows > 3) {
            cout << "invalid input...... Please provide a value less than or equal to 3: " <<endl;
        }
    } while (rows > 3);

    do {
        cout << "Enter the number of columns less than or equal to 3 ";
        cin >> cols;
        if (cols > 3) {
            cout << "invalid input...... provide a value less than or equal to 3." <<endl;
        }
    } while (cols > 3);

    
    double** array = new double*[rows];
    for (int d = 0; d < rows; ++d) {
        array[d] = new double[cols];
    }

    /*ASSIGN THE VALUE OF EACH ELEMENT OF OF THE ARRAY*/
    cout << "Enter the values for the array:" <<endl;
    for (int d = 0; d < rows; ++d) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array[d][n];
        }
    }

    /*DISPLAYTHE VALUES OF EACH ELEMENT OF THE ARRAY*/
    cout << "Values of the array:" <<endl;
    for (int d = 0; d < rows; ++d) {
        for (int n = 0; n < cols; ++n) {
            cout << array[d][n] << "\t";
        }
        cout <<endl;
    }

    // DEALLOACATE THE DYNAMICALLY ALLOCATED MEMORY*/
    for (int d = 0; d < rows; ++d) {
        delete[] array[d];
    }
    delete[] array;

    return 0;
}
