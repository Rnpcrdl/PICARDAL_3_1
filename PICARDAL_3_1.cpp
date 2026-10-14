
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left;
    cout << setw(12) << "DAY"
         << setw(35) << "SUBJECT"
         << setw(12) << "SECTION"
         << setw(8) << "UNITS"
         << setw(8) << "DAY"
         << setw(12) << "TIME"
         << "ROOM" << endl;

    cout << "--------------------------------------------------------------------------" << endl;

    cout << setw(12) << "CCS0001"
         << setw(35) << "INTRODUCTION TO COMPUTING"
         << setw(12) << "TN02"
         << setw(8) << "2"
         << setw(8) << "T"
         << setw(12) << "7:00 - 9:40"
         << "ONLINE" << endl;

    cout << setw(12) << "CCS0001L"
         << setw(35) << "INTRODUCTION TO COMPUTING LAB"
         << setw(12) << "TN02"
         << setw(8) << "1"
         << setw(8) << "W"
         << setw(12) << "7:00 - 9:50"
         << "E702" << endl;

    cout << setw(12) << "CCS0006"
         << setw(35) << "COMPUTER PROGRAMMING 1"
         << setw(12) << "TN02"
         << setw(8) << "2"
         << setw(8) << "F"
         << setw(12) << "7:00 - 9:40"
         << "ONLINE" << endl;

    cout << setw(12) << "CCS0006L"
         << setw(35) << "COMPUTER PROGRAMMING 1 LAB"
         << setw(12) << "TN02"
         << setw(8) << "1"
         << setw(8) << "T"
         << setw(12) << "7:00 - 9:50"
         << "F702" << endl;

    cout << setw(12) << "GED0006"
         << setw(35) << "PHYSICAL EDUCATION 1"
         << setw(12) << "TN02"
         << setw(8) << "2"
         << setw(8) << "M"
         << setw(12) << "7:00 - 8:40"
         << "ONLINE" << endl;

    return 0;
}
