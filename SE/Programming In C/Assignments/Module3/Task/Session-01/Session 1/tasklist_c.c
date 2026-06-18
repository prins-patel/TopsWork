#include <stdio.h>
#include <string.h>

#define MAX_TASKS 5
#define MAX_LENGTH 100

// Global array to store tasks
char tasks[MAX_TASKS][MAX_LENGTH];

int main() {
    int numTasks,i;

    printf("How many tasks do you want to add (max 5)? ");
    scanf("%d", &numTasks);
    getchar(); // Consume newline character

    if (numTasks > MAX_TASKS) {
        printf("You can only add up to 5 tasks.\n");
        numTasks = MAX_TASKS;
    }

    // Input tasks
    for (i = 0; i < numTasks; i++) {
        printf("Enter task %d: ", i + 1);
        fgets(tasks[i], MAX_LENGTH, stdin);

        // Remove trailing newline if present
        tasks[i][strcspn(tasks[i], "\n")] = '\0';
    }

    // Print all tasks
    printf("\nTask List:\n");
    for ( i = 0; i < numTasks; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
