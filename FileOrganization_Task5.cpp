#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[20];
    int id;
    float grade;
    char delim = '$';
    char choice;

    ofstream outFile("students.txt");

    if (!outFile.is_open())
    {
        cout << "Cannot open file!" << endl;
        return 1;
    }

    do
    {
        cout << "Enter student name: ";
        cin >> ws;
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        outFile << name << ", "
            << id << ", "
            << grade << " "
            << delim << endl;

        cout << "\nDo you want to add another student? (y/n): ";
        cin >> choice;

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    outFile.close();

    cout << "Student records saved successfully!" << endl;

    return 0;
}