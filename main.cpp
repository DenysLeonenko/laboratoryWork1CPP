#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {
    int laboratoryWorkTaskNumber, option, inputNumeric;
    double inputValue, side, inscribedCircleRadius, circumscribedCircleRadius, area;
    setlocale(LC_ALL, "uk_UA.utf8");
    SetConsoleOutputCP(CP_UTF8);
    for (int i = 0; i < INT_MAX; ++i) {
        cout << "Enter laboratory work task number(1 or 2), which you want to check or enter 3 to leave:\n";
        cin >> laboratoryWorkTaskNumber;
        if (laboratoryWorkTaskNumber == 1) {
            cout << "Menu:\n"
                 << "1 - side\n"
                 << "2 - radius of inscribed circle\n"
                 << "3 - radius of circumscribed circle\n"
                 << "4 - area\n\n";
            cout << "Enter one of the options:";
            cin >> option;
            cout << "Enter the value of the side:";
            cin >> inputValue;

            switch (option) {
                case 1:
                    inscribedCircleRadius = ((inputValue * sqrt(3)) / 6);
                    cout << "Radius of inscribed circle = " << inscribedCircleRadius << "\n";
                    circumscribedCircleRadius = ((inputValue * sqrt(3)) / 3);
                    cout << "Radius of circumscribed circle = " << circumscribedCircleRadius << "\n";
                    area = ((pow(inputValue, 2) * sqrt(3)) / 4);
                    cout << "Area = " << area << "\n";
                    break;
                case 2:
                    side = ((inputValue * 6) / sqrt(3));
                    cout << "Side = " << side << "\n";
                    circumscribedCircleRadius = ((side * sqrt(3)) / 3);
                    cout << "Radius of circumscribed circle = " << circumscribedCircleRadius << "\n";
                    area = ((pow(side, 2) * sqrt(3)) / 4);
                    cout << "Area = " << area << "\n";
                    break;
                case 3:
                    side = ((inputValue * 3) / sqrt(3));
                    cout << "Side = " << side << "\n";
                    inscribedCircleRadius = ((side * sqrt(3)) / 6);
                    cout << "Radius of circumscribed circle = " << inscribedCircleRadius << "\n";
                    area = ((pow(side, 2) * sqrt(3)) / 4);
                    cout << "Area = " << area << "\n";
                    break;
                case 4:
                    side = sqrt((inputValue * 4) / sqrt(3));
                    cout << "Side = " << side << "\n";
                    inscribedCircleRadius = ((side * sqrt(3)) / 6);
                    cout << "Radius of circumscribed circle = " << inscribedCircleRadius << "\n";
                    circumscribedCircleRadius = ((side * sqrt(3)) / 3);
                    cout << "Radius of circumscribed circle = " << circumscribedCircleRadius << "\n";
                    break;
                default:
                    cout << "Invalid option. Please repeat your select!\n";
                    break;
            }
        } else if (laboratoryWorkTaskNumber == 2) {
            cout << "Enter integer from 1 to 9999\n";
            cin >> inputNumeric;
            int remains = inputNumeric % 2;
            string steamyOrNot;
            string nSignificant;
            if (inputNumeric != 0) {
                if (remains == 0) {
                    steamyOrNot = "Парне ";
                } else {
                    steamyOrNot = "Не парне ";
                }
                if (inputNumeric > 0 && inputNumeric < 10) {
                    nSignificant = "однозначне ";
                } else if (inputNumeric > 9 && inputNumeric < 100) {
                    nSignificant = "двозначне ";
                } else if (inputNumeric > 99 && inputNumeric < 1000) {
                    nSignificant = "трьохзначне ";
                } else if (inputNumeric > 999 && inputNumeric < 10000) {
                    nSignificant = "чьотирьохзначне ";
                } else {
                    cout << "Incorrect value! Please repeat your select!\n";
                }
                cout << steamyOrNot << nSignificant << "число\n";
            } else {
                cout << "Incorrect value! Please repeat your select!\n";
            }
        } else if (laboratoryWorkTaskNumber == 3) {
            cout << "Program stopped. Good luck!\n";
            break;
        } else {
            cout << "Entered incorrect task number. Please repeat your select.\n";
        }
    }
    return 0;
}
