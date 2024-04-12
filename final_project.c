#include<stdio.h>
#include<string.h>
#include <conio.h>
#include<stdlib.h>
#include <time.h>
int check_ts=0;

struct task
{
    int id;
    char title[30];
    char discription[60];
    int state; 
};
struct task tasks[5];


void login();
void choose();
void add_task();
void del_task();
void show_tasks(struct task tasks[], int num_tasks);
int  quit();



void scane_me(char *pass) {
    int i = 0;
    char ch;
  
    while ((ch = _getch()) != 13) {
        if (ch == 8) { 
            if (i > 0) {
                i--;
                printf("\b \b"); 
            }
        } else {
            pass[i] = ch;
            i++;
            printf("*");
        }
    }
    pass[i] = '\0';
    printf("\n");
}

void login() {
    char l_id[20], pass[20];
    int n = 3;
    while (n--) {
        printf("Enter your ID: ");
        scanf("%s", l_id);
        printf("Enter your password: ");
         scane_me(pass);
        if (strcmp(pass, l_id) == 0) {
            if (strcmp(pass, "admin") == 0) {
                printf("Access granted\n");
                choose();
                return;
            } else {
                printf("Invalid id or password\n");
            }
        } else {
            printf("Invalid id or password\n");
        }
    }
    printf("You have exceeded the number of attempts\n");
}


void choose()
{

    printf("choose service :\n\
     1--> add task\n\
     2--> delete task\n\
     3--> show task :\n\
     4--> quit\n");
     
    int var;
    scanf("%d",&var);
    switch (var)
    {
        case 1:
        add_task();
        break;
        case 2:
        del_task();
        break;
        case 3:
         show_tasks(tasks,check_ts );
        break;
        default :
        printf("unvalid choice");
        break;
         case 4:
         quit();
         break;


    }
}

void add_task()
{
   
     if(check_ts >=5)
    {
        printf("you exceed the valid number of tasks\n");
        return;
    }
    else{
    struct task ts;
    ts.id=rand();
    printf("Enter title of task: ");
    scanf(" %99[^\n]", ts.title); 

    printf("Enter description of task: ");
    scanf(" %99[^\n]",ts.discription); 

    printf("Enter 1 if urgent, 0 if not: ");
    scanf("%d", &ts.state);
    tasks[check_ts] =ts;
    check_ts++;
   
    quit();
    }
    
}

void del_task() {
    int num;
    printf("Enter ID of the task to delete: ");
    scanf("%d", &num);
    
    int index = -1; 

    
    for (int i = 0; i < check_ts; i++) {
        if (tasks[i].id == num) {
            index = i; 
            break;
        }
    }

    if (index == -1) {
        printf("Task with ID %d not found.\n", num);
        quit();
        
    }

    tasks[index] = tasks[check_ts - 1];
    tasks[check_ts - 1].id = -1; 
    tasks[check_ts - 1].title[0] = '\0'; 
    tasks[check_ts - 1].discription[0] = '\0'; 
    tasks[check_ts - 1].state = -1; 
    
    check_ts--;
    printf("Task with ID %d deleted successfully.\n", num);
    quit();
}



 
void show_tasks(struct task tasks[], int num_tasks) {
    printf("Urgent Tasks:\n");
    for (int i = 0; i < num_tasks; i++) {
        if (tasks[i].state == 1) {
            printf("Task ID: %d\n", tasks[i].id);
            printf(" Title: %s\n", tasks[i].title);
            printf(" Description: %s\n", tasks[i]. discription);
            printf(" State: %d\n", tasks[i].state);
            printf("\n");
        }
    }

    printf("Non-Urgent Tasks:\n");
    for (int i = 0; i < num_tasks; i++) {
        if (tasks[i].state == 0) {
            printf("Task ID: %d\n", tasks[i].id);
            printf("Title: %s\n", tasks[i].title);
            printf("Description: %s\n", tasks[i]. discription);
            printf("State: %d\n", tasks[i].state);
            printf("\n");
        }
    }
    quit();
}
int quit() {
    int num;
    printf("Do you want to continue? 1(yes)-2(no): ");
    scanf("%d", &num); 
    switch (num) {
        case 1:
            choose();
            break;
        case 2:
           printf("your data will not be saved and thank you...\n");
            return 0;
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}





int main()
{
    srand(time(NULL));
    login();

}