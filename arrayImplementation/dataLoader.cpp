#include <iostream>
#include <fstream>
#include <sstream>
#include "../residents.h"

using namespace std;

int loadCSV(string path, Residents dataset[]) {
    ifstream file(path);
    string line;
    getline(file,line);

    int index = 0;
    while (getline(file,line)) {       // Parsing  lines into array
        stringstream lstream(line); 
        string tempData[6];

        for (int i = 0; i<6; i++) {
            getline(lstream,tempData[i],',');
        }
        dataset[index].ID = tempData[0];
        dataset[index].age = stoi(tempData[1]);
        dataset[index].mode = tempData[2];
        dataset[index].distance = stod(tempData[3]);
        dataset[index].carbon = stod(tempData[4]);
        dataset[index].avg = stod(tempData[5]);
        index++;
    };
    return index;
}

