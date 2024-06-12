#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char* name;
    char* specialty;
    int power;
} Digimon;

int getPower() {
    return 225;
}

char* getSpecialty() {
    return "Internet Hacking";
} 

char* getName() {
    return "Metalgarurumon";
}

void printDigimon(Digimon* digimon) {
    printf("Printing the digimon...\n\n");
    printf("%s\n", digimon->name);
    printf("%s\n", digimon->specialty);
    printf("%d\n", digimon->power);
}

int createDigimon() {
    Digimon* digimon;

    // Update the digimon
    digimon = (Digimon*)malloc(sizeof(Digimon));
    digimon->name = (char*)malloc(strlen(getName) + 1);
    digimon->specialty = (char*)malloc(strlen(getSpecialty) + 1);

    strcpy(digimon->name, getName()); 
    strcpy(digimon->specialty, getSpecialty()); 
    digimon->power = getPower();

    printDigimon(digimon);
    return 1;
}

int main() {
    createDigimon();
}

