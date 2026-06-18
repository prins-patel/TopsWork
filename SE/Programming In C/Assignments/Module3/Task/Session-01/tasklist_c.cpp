#include <iostream>
#include <string>

using namespace std;

class Task {
private:
    string title;
    bool isDone;

public:
    // Constructor
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }

    // Mark task as done
    void markDone() {
        isDone = true;
    }

    // Display task information
    void display() {
        cout << "Task: " << title
             << " [" << (isDone ? "DONE" : "PENDING") << "]"
             << endl;
    }
};

int main() {
    // Create tasks
    Task task1("Buy groceries");
    Task task2("Finish homework");

    cout << "Initial Tasks:" << endl;
    task1.display();
    task2.display();

    // Mark first task as done
    task1.markDone();

    cout << "\nAfter Marking Task 1 as Done:" << endl;
    task1.display();
    task2.display();

    return 0;
}
