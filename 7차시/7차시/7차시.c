#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 100
#define FILENAME "todo_list.txt"

typedef struct {
    char task[MAX_LENGTH];  // 할 일 내용
    int completed;          // 완료 여부 (0: 미완료, 1: 완료)
    char date[11];          // YYYY-MM-DD 형식의 날짜 (문자열 10자 + '\0')
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;

// 파일에서 TODO 목록 불러오기
void loadTasks() {
    FILE* file = fopen(FILENAME, "r");
    if (file == NULL) return;

    while (fscanf(file, "%d %10s %[^\n]", &tasks[task_count].completed, tasks[task_count].date, tasks[task_count].task) == 3) {
        task_count++;
    }
    fclose(file);
}

// 현재 목록을 파일에 저장
void saveTasks() {
    FILE* file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("파일 저장 오류!\n");
        return;
    }
    for (int i = 0; i < task_count; i++) {
        fprintf(file, "%d %s %s\n", tasks[i].completed, tasks[i].date, tasks[i].task);
    }
    fclose(file);
}

// 할 일 추가 (날짜 입력 포함)
void addTask() {

    while (getchar() != '\n');
    printf("새로운 할 일: ");
    fgets(tasks[task_count].task, sizeof(tasks[task_count].task), stdin);
    tasks[task_count].task[strlen(tasks[task_count].task) - 1] = '\0';

    printf("완료 날짜 (YYYY-MM-DD): ");
    fgets(tasks[task_count].date, sizeof(tasks[task_count].date), stdin);
    tasks[task_count].date[strlen(tasks[task_count].date) - 1] = '\0';

    printf("할 일이 추가되었습니다!");
    task_count++;

}

// 할 일 목록 출력
void displayTasks() {
    if (task_count == 0) {
        printf("할 일이 없습니다!");
        return;
    }

    printf("TODO list : \n");
    for (int i = 0; i < task_count; i++) {
        if (tasks[i].completed == 0)
            printf("%d. [ ] %s (완료 기한: %s)\n", i + 1, tasks[i].task, tasks[i].date);
        else
            printf("%d. [X] %s (완료 기한: %s)\n", i + 1, tasks[i].task, tasks[i].date);
    }

}

// 할 일 삭제
void deleteTask() {
    int num;

    if (task_count == 0) {
        printf("할 일이 없습니다!");
        return;
    }

    printf("TODO list : \n");
    for (int i = 0; i < task_count; i++) {
        if (tasks[i].completed == 0)
            printf("%d. [ ] %s (완료 기한: %s)\n", i + 1, tasks[i].task, tasks[i].date);
        else
            printf("%d. [X] %s (완료 기한: %s)\n", i + 1, tasks[i].task, tasks[i].date);
    }

    printf("삭제할 할 일 번호: ");
    scanf("%d", &num);

    for (int i = num - 1; i < task_count-1; i++) {
        tasks[i] = tasks[i + 1];
    }
    task_count--;

    printf("할 일이 삭제되었습니다!");
}

// 할 일 완료 체크
void completeTask() {
    int num;
    displayTasks();
    if (task_count == 0) return;

    printf("완료할 할 일 번호: "); //완료할 할 일 번호
    scanf("%d", &num);

    if (num < 1 || num > task_count) {
        printf("잘못된 번호입니다.\n");
        return;
    }

    tasks[num - 1].completed = 1;
    printf("할 일이 완료되었습니다!\n"); //할 일 완료
}

int main() {
    int choice;

    loadTasks();  // 시작 시 파일에서 불러오기

    while (1) {
        printf("\n===== TODO list =====\n");
        printf("1. 할 일 추가\n");
        printf("2. 할 일 삭제\n");
        printf("3. 목록 보기\n");
        printf("4. 완료 체크\n");
        printf("5. 종료\n");
        printf("선택 : ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addTask();
            break;
        case 2:
            deleteTask();
            break;
        case 3:
            displayTasks();
            break;
        case 4:
            completeTask();
            break;
        case 5:
            saveTasks();  // 종료 시 저장
            printf("프로그램을 종료합니다.\n");
            return 0;
        default:
            printf("잘못된 입력입니다.\n");
        }
    }
}