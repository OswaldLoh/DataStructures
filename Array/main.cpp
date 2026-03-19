#include <iostream>
#include "../residents.h"

// To run the code, enter in terminal:
// cd  Array
// g++ main.cpp arrayLoad.cpp -o output.exe      
// ./output.exe

using namespace std;

int loadCSV(string path, Residents dataset[]);

int main() {
    Residents dataA[FILE_A_SIZE];       // Initialize array of structs
    Residents dataB[FILE_B_SIZE];
    Residents dataC[FILE_C_SIZE];

    loadCSV(FILE_A_PATH, dataA);        // Loading lines from CSV into array of structs
    loadCSV(FILE_B_PATH, dataB);
    loadCSV(FILE_C_PATH, dataC);

    
    
    return 0;
}