#include <stdio.h>

int main() {
    int hasPrerequisite, isCourseFull;

    printf("Has prerequisite? (1 = Yes, 0 = No): ");
    scanf("%d", &hasPrerequisite);

    printf("Is course full? (1 = Yes, 0 = No): ");
    scanf("%d", &isCourseFull);

    if (hasPrerequisite == 1 && isCourseFull == 0) {
        printf("Enrolled successfully\n");
    }
    else if (hasPrerequisite == 0 && isCourseFull == 0) {
        printf("Cannot enroll: prerequisite missing\n");
    }
    else if (hasPrerequisite == 1 && isCourseFull == 1) {
        printf("Cannot enroll: course is full\n");
    }
    else {
        printf("Cannot enroll: prerequisite missing and course is full\n");
    }

    return 0;
}

