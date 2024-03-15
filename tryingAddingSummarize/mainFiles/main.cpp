#include <iostream>
#include "pryamougolnik.h"
using namespace std;

int main () {
    
    cout << "Type number of the figure" << endl;
    cout << "1)rectangle" << endl << "2) triangle" << endl;
    int figureId;
    cin >> figureId;
    cout << endl;

    switch (figureId){
        case 1:
            cout << "Enter the sides of the figure" << endl;
            int a, b;
            cin >> a >> b;
            cout << "Perimetr is " << perimetr (a , b) << endl;
            cout << "Area is " << area (a , b) << endl;
            cout << "Lenght of diagonal is " << lengthOfDiagonal(a , b) << endl;
            break;
        default:
            cout << "Wrong nubmber";
            return -1;

    }
    return 0;

}