#include <stdio.h>
#include <stdint.h>

void setAttendance(uint64_t *mask, int bit) {
    if (bit >= 0 && bit <= 64) {
        *mask |= ((uint64_t) 1 << bit - 1);
    } else {
        printf("There is no such student!\n");
    }
}

void clearAttendance(uint64_t *mask, int bit) {
    if (bit >= 0 && bit <= 64) {
        *mask &= ~((uint64_t) 1 << bit - 1);
    } else {
        printf("There is no such student!\n");
    }
}

void attendanceInfo(uint64_t *mask, int bit) {
    if (*mask & ((uint64_t) 1 << bit - 1)) {
        printf("Student has attendance! \n");
    } else {
        printf("Student hasn't attendance!\n");
    }
}

void changeAttendance(uint64_t *mask, int bit) {
    if (bit >= 0 && bit <= 64) {
        *mask ^= ((uint64_t) 1 << bit - 1);
    } else {
        printf("There is no such student!\n");
    }
}

void showAllInClass(uint64_t *mask) {
    printf("Student/s with number/s ");
    for (int i = 0; i < 64; i++) {
        if (*mask & ((uint64_t) 1 << i)) {
            printf("%d,", i + 1);
        }
    }
    printf(" are in class!\n");
}

void showAllMissing(uint64_t *mask) {
    printf("Student/s with number/s ");
    for (int i = 0; i < 64; i++) {
        if (!(*mask & ((uint64_t) 1 << i))) {
            printf("%d,", i + 1);
        }
    }
    printf(" are missing from class!\n");
}

int main() {
    uint64_t attendance = 0;
    int option = 0;
    int studentNumber = 0;
    while (option != 5) {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option != 5) {
            printf("Student number: ");
            scanf("%d", &studentNumber);
        }
        switch (option) {
            case 1:
                setAttendance(&attendance, studentNumber);
                break;
            case 2:
                clearAttendance(&attendance, studentNumber);
                break;
            case 3:
                attendanceInfo(&attendance, studentNumber);
                break;
            case 4:
                changeAttendance(&attendance, studentNumber);
                break;
            case 5:
                break;
        }
        showAllInClass(&attendance);
        showAllMissing(&attendance);
    }
    return 0;
}
