#include <stdlib.h>

typedef struct {
    char* name;
    int age;
} Dog;

void freeDog(Dog* dog) {
    if (dog != NULL) {
        free(dog->name);
        free(dog);
    }
}

int main() {
    // Example usage
    Dog* myDog = malloc(sizeof(Dog));
    myDog->name = malloc(sizeof(char) * 20);
    myDog->age = 3;

    // ...

    // Free the dog
    freeDog(myDog);

    return 0;
}
