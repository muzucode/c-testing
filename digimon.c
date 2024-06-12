#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getPower() {
    return 225;
}

char* getSpecialty() {
    return "Internet Hacking";
} 

char* getName() {
    return "Metalgarurumon";
}

void printDigimon(char* name, char* specialty, int power) {
    printf("Printing the digimon...\n");
    printf("%s\n", name);
    printf("%s\n", specialty);
    printf("%d\n", power);
}

int createDigimon() {
    char* name;
    char* specialty;
    int power;

    // Get Name
    name = (char*)malloc(strlen(getName()) + 1);
    strcpy(name, getName());

    // Get Specialty
    specialty = (char*)malloc(strlen(getSpecialty()) + 1);
    strcpy(specialty, getSpecialty());

    // Get Power
    power = getPower();

    printDigimon(name, specialty, power);
    return 1;
}

int main() {
    createDigimon();
}

