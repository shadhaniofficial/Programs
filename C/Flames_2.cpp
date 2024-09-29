#include <stdio.h>
#include <string.h>

// Function prototypes
void toLowerCase(char *string);
int countUncommonLetters(const char *name1, const char *name2);
void eliminateCharacters(char *flames, int count);
void printRelationship(char resultChar);

int main() {
    char name1[50];
    char name2[50];

    // Prompt user for the first name
    printf("Enter the first person's name: ");
    scanf("%49s", name1);  // Limit input to avoid buffer overflow
    toLowerCase(name1);

    // Prompt user for the second name
    printf("Enter the second person's name: ");
    scanf("%49s", name2);
    toLowerCase(name2);

    // Calculate the count of uncommon letters
    int count = countUncommonLetters(name1, name2);

    // Initialize the FLAMES string
    char flames[] = "flames";

    // Eliminate characters based on the count
    eliminateCharacters(flames, count);

    // Print the resulting relationship
    printRelationship(flames[0]);

    return 0;
}

// Function to convert a string to lowercase
void toLowerCase(char *string) {
    for (int i = 0; string[i]; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 'a' - 'A';  // Convert uppercase to lowercase
        }
    }
}

// Function to count the number of uncommon letters between two names
int countUncommonLetters(const char *name1, const char *name2) {
    char tempName1[50], tempName2[50];
    strcpy(tempName1, name1);
    strcpy(tempName2, name2);
    int count = 0;

    // Arrays to mark used characters
    int used1[50] = {0}, used2[50] = {0};

    // Remove common letters
    for (int i = 0; tempName1[i]; i++) {
        for (int j = 0; tempName2[j]; j++) {
            if (!used2[j] && tempName1[i] == tempName2[j]) {
                used1[i] = 1;
                used2[j] = 1;
                break;
            }
        }
    }

    // Count remaining letters in name1
    for (int i = 0; tempName1[i]; i++) {
        if (!used1[i]) {
            count++;
        }
    }

    // Count remaining letters in name2
    for (int i = 0; tempName2[i]; i++) {
        if (!used2[i]) {
            count++;
        }
    }

    return count;
}

// Function to eliminate characters from the FLAMES string
void eliminateCharacters(char *flames, int count) {
    int len = strlen(flames);
    int position = 0;

    while (len > 1) {
        // Calculate position to eliminate
        position = (position + count - 1) % len;

        // Remove character at the current position
        for (int i = position; i < len - 1; i++) {
            flames[i] = flames[i + 1];
        }
        flames[len - 1] = '\0';  // Null-terminate the string
        len--;
    }
}

// Function to print the relationship based on the remaining character
void printRelationship(char resultChar) {
    switch (resultChar) {
        case 'f':
            printf("Friends\n");
            break;
        case 'l':
            printf("Love\n");
            break;
        case 'a':
            printf("Affection\n");
            break;
        case 'm':
            printf("Marriage\n");
            break;
        case 'e':
            printf("Enemy\n");
            break;
        case 's':
            printf("Sibling\n");  // Changed to 'Sibling' for inclusivity
            break;
        default:
            printf("Try Again\n");
            break;
    }
}
