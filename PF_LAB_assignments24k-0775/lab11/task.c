// Name: Mohammad Burair
// Roll Number: 24k 0775
// Section: BCS-1C
// Date: 25/11/2024
// Description: This program performs CRUD operations for player details using dynamic memory and file handling.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player {
    char name[30];
    char team[30];
};

struct bowl {
    char type[20];
    char arm[6];
    struct player ply;
};

struct bat {
    char type[20];
    char handed[6];
    struct bowl ply2;
};

void inputPlayerData(struct bat *batsman) {
    printf("Enter the Name of the player:\n");
    fgets(batsman->ply2.ply.name, 30, stdin);
    batsman->ply2.ply.name[strcspn(batsman->ply2.ply.name, "\n")] = '\0';

    printf("Enter the team of the player:\n");
    fgets(batsman->ply2.ply.team, 30, stdin);
    batsman->ply2.ply.team[strcspn(batsman->ply2.ply.team, "\n")] = '\0';

    char opt;
    printf("Is the player a batsman (Y/N)?\n");
    opt = getchar();
    getchar();
    if (opt == 'Y' || opt == 'y') {
        printf("Enter the type of bat:\n");
        fgets(batsman->type, 20, stdin);
        batsman->type[strcspn(batsman->type, "\n")] = '\0';

        printf("Enter the hand of the player (LEFT/RIGHT):\n");
        fgets(batsman->handed, 6, stdin);
        batsman->handed[strcspn(batsman->handed, "\n")] = '\0';
    } else {
        strcpy(batsman->type, "N/A");
        strcpy(batsman->handed, "N/A");
    }

    printf("Is the player a bowler (Y/N)?\n");
    opt = getchar();
    getchar();
    if (opt == 'Y' || opt == 'y') {
        printf("Enter the type of the bowler:\n");
        fgets(batsman->ply2.type, 20, stdin);
        batsman->ply2.type[strcspn(batsman->ply2.type, "\n")] = '\0';

        printf("Enter the arm of the bowler (LEFT/RIGHT):\n");
        fgets(batsman->ply2.arm, 6, stdin);
        batsman->ply2.arm[strcspn(batsman->ply2.arm, "\n")] = '\0';
    } else {
        strcpy(batsman->ply2.type, "N/A");
        strcpy(batsman->ply2.arm, "N/A");
    }
}

void writePlayerDetails(FILE *file, struct bat *batsman) {
    fprintf(file, "Name: %s\n", batsman->ply2.ply.name);
    fprintf(file, "Team: %s\n", batsman->ply2.ply.team);
    fprintf(file, "Batting Details:\n");
    fprintf(file, "Type of bat: %s\n", batsman->type);
    fprintf(file, "Hand: %s handed\n", batsman->handed);
    fprintf(file, "Bowling Details:\n");
    fprintf(file, "Bowling type: %s\n", batsman->ply2.type);
    fprintf(file, "Arm: %s\n", batsman->ply2.arm);
    fprintf(file, "-----\n");
}

void readPlayerDetails(FILE *file) {
    rewind(file);
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
}

void addOrUpdatePlayers(struct bat **batsmen, int *size) {
    int choice;
    do {
        printf("\n1. Add a new player\n2. Update an existing player\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            (*size)++;
            *batsmen = realloc(*batsmen, (*size) * sizeof(struct bat));
            if (!*batsmen) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            printf("\nAdding player #%d:\n", *size);
            inputPlayerData(&(*batsmen)[*size - 1]);
        } else if (choice == 2) {
            int playerId;
            printf("Enter the player number (1 to %d) to update: ", *size);
            scanf("%d", &playerId);
            getchar();
            if (playerId > 0 && playerId <= *size) {
                printf("\nUpdating player #%d:\n", playerId);
                inputPlayerData(&(*batsmen)[playerId - 1]);
            } else {
                printf("Invalid player number.\n");
            }
        } else if (choice != 3) {
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);
}

int main() {
    int size = 0;
    struct bat *batsmen = NULL;

    FILE *file = fopen("players.txt", "a+");
    if (!file) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nReading existing player details from file:\n");
    readPlayerDetails(file);

    addOrUpdatePlayers(&batsmen, &size);

    freopen("players.txt", "w", file);
    for (int i = 0; i < size; i++) {
        writePlayerDetails(file, &batsmen[i]);
    }

    fclose(file);
    free(batsmen);
    return 0;
}

