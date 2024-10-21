#include <stdio.h>

int main() {
    char name[25];
    int age;

    printf("What's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("You are %d years old and Your name is %s", age, name);
}
