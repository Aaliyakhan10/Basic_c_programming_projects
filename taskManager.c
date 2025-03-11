#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int top = -1, max_size = 100;  

struct taskManager {
    char task[250];
} t[100];

void add_Task() {
    if (top < max_size - 1) {
        top++;
        printf("Enter your task: ");
        getchar(); 
        fgets(t[top].task, 250, stdin);
    
        t[top].task[strcspn(t[top].task, "\n")] = '\0';
    } else {
        printf("Task manager is full. Cannot add more tasks.\n");
    }
}

void delete_Task() {
    if (top >= 0) {
        int i,j;
        display_Task();
        printf("Enter the Task no. to delete");
        scanf("%d",&i);
        if(!(i<0 || i>top+1)){
        for(j=i;j<=top;j++)
        {
          strcpy(t[j-1].task,t[j].task);
        }
         top--;
        printf("Task deleted successfully.\n");
        }else{
            printf("Enter valid task number \n");
        }
    } else {
        printf("No tasks to delete.\n");
    }
}

void display_Task() {
    if (top >= 0) {
        printf("--Tasks--\n");
        for (int i = 0; i <= top; i++) {
            printf("%d. %s\n", i + 1, t[i].task);
        }
    } else {
        printf("No tasks to display.\n");
    }
}

int main() {
    int ch;
    do {
        printf("Select what you want to do:\n");
        printf("1. Add Task\n");
        printf("2. Delete Task\n");
        printf("3. View Task\n");
        printf("4. Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                add_Task();
                break;
            case 2:
                delete_Task();
                break;
            case 3:
                display_Task();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option, please try again.\n");
        }
    } while (ch != 4);

    return 0;
}
