/* Mini Project: Student Productivity Tracker
Objective
Build a console-based Student Productivity Tracker that logs daily study hours and
generates a weekly report.
Your application must:
1. Menu-driven program
2. Log daily study hours
3. Generate weekly report
4. Store data using files */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to log study hours
void logStudyHours() {
    string day;
    float hours;

    cout << "\nEnter Day (e.g., Monday): ";
    cin >> day;

    cout << "Enter Study Hours: ";
    cin >> hours;

    ofstream file("study_log.txt", ios::app);

    if (file.is_open()) {
        file << day << " " << hours << endl;
        file.close();
        cout << "Study hours logged successfully!\n";
    } else {
        cout << "Error opening file!\n";
    }
}

// Function to generate weekly report
void generateReport() {
    ifstream file("study_log.txt");

    if (!file) {
        cout << "\nNo study data found!\n";
        return;
    }

    string day;
    float hours;
    float totalHours = 0;
    int daysCount = 0;

    cout << "\n===== Weekly Study Report =====\n";

    while (file >> day >> hours) {
        cout << day << " : " << hours << " hours\n";
        totalHours += hours;
        daysCount++;
    }

    file.close();

    cout << "-----------------------------\n";
    cout << "Total Study Hours: " << totalHours << endl;

    if (daysCount > 0) {
        cout << "Average Study Hours: "
             << totalHours / daysCount << " hours/day\n";
    }

    if (totalHours >= 35) {
        cout << "Excellent Productivity! ??\n";
    } else if (totalHours >= 20) {
        cout << "Good Progress ??\n";
    } else {
        cout << "Need More Focus ??\n";
    }
}

// Function to display stored data
void viewLogs() {
    ifstream file("study_log.txt");

    if (!file) {
        cout << "\nNo study records found!\n";
        return;
    }

    string day;
    float hours;

    cout << "\n===== Study Logs =====\n";

    while (file >> day >> hours) {
        cout << day << " : " << hours << " hours\n";
    }

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n================================";
        cout << "\n Student Productivity Tracker";
        cout << "\n================================";
        cout << "\n1. Log Daily Study Hours";
        cout << "\n2. View Study Logs";
        cout << "\n3. Generate Weekly Report";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                logStudyHours();
                break;

            case 2:
                viewLogs();
                break;

            case 3:
                generateReport();
                break;

            case 4:
                cout << "\nThank you for using Student Productivity Tracker!\n";
                break;

            default:
                cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
