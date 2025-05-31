#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Ask for user's name
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Ask for user's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Display the greeting
    printf("\nHello, %sYou are %d years old.\n", name, age);

    return 0;
}
