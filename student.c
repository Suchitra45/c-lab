#include <stdio.h>
struct Student {
    int rollNumber;
    int age;
    float marks;
};
int main() {
    struct Student student;
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Unable to create the file.\n");
        return 1;
    }
    printf("SUCHITRA RANA\n");
    printf("Enter Roll Number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter Age: ");
    scanf("%d", &student.age);
    printf("Enter Marks: ");
    scanf("%f", &student.marks);
    fprintf(file, "Roll Number: %d\n", student.rollNumber);
    fprintf(file, "Age: %d\n", student.age);
    fprintf(file, "Marks: %.2f\n", student.marks);
    fclose(file);
    printf("Student information has been written to student.txt successfully.\n");
    return 0;
}
