#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define MAX_LENGTH 100

// Global arrays
char tasks[MAX_TASKS][MAX_LENGTH];
int taskDone[MAX_TASKS] = {0}; // 0 = Pending, 1 = Done

// Function to mark a task as done
void markTaskDone(int index) {
    if (index >= 0 && index < MAX_TASKS) {
        taskDone[index] = 1;
    } else {
        printf("Invalid task index!\n");
    }
}

int main() {
    int numTasks,i;

    printf("How many tasks do you want to add (max 5)? ");
    scanf("%d", &numTasks);
    getchar(); // Consume newline

    if (numTasks > MAX_TASKS) {
        numTasks = MAX_TASKS;
    }

    // Input tasks
    for (i = 0; i < numTasks; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], MAX_LENGTH, stdin);
        tasks[i][strcspn(tasks[i], "\n")] = '\0';
    }

    // Print initial task list
    printf("\nTask List:\n");
    for (i = 0; i < numTasks; i++) {
        printf("%d. %s [PENDING]\n", i + 1, tasks[i]);
    }

    // Mark a task as done
    int taskNumber;
    printf("\nEnter task number to mark as DONE (add index number): ");
    scanf("%d", &taskNumber);

    markTaskDone(taskNumber - 1);

    // Print updated task list
    printf("\nUpdated Task List:\n");
    for (i = 0; i < numTasks; i++) {
        printf("%d. %s [%s]\n",
               i + 1,
               tasks[i],
               taskDone[i] ? "DONE" : "PENDING");
    }

    return 0;
}
