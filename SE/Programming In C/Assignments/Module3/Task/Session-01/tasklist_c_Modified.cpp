#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Task Class
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

    // Display task
    void display() const {
        cout << title << " ["
             << (isDone ? "DONE" : "PENDING")
             << "]" << endl;
    }
};

// TaskList Class
class TaskList {
private:
    vector<Task> tasks;

public:
    // Add a new task
    void addTask(string title) {
        tasks.push_back(Task(title));
    }

    // Mark a task as done
    void markTaskDone(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markDone();
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    // Display all tasks
    void showTasks() const {
        cout << "\nTask List:" << endl;

        if (tasks.empty()) {
            cout << "No tasks available." << endl;
            return;
        }

        for (int i = 0; i < tasks.size(); i++) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main() {
    TaskList myTasks;

    // Add 3 tasks
    myTasks.addTask("Buy groceries");
    myTasks.addTask("Finish homework");
    myTasks.addTask("Call friend");

    cout << "Initial Tasks:";
    myTasks.showTasks();

    // Mark second task as done
    myTasks.markTaskDone(1);

    cout << "\nAfter Marking Task 2 as Done:";
    myTasks.showTasks();

    return 0;
}
