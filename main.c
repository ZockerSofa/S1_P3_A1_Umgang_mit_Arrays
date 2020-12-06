#include "header.h"

void reverse_array(char* eingabe, char* ausgabe) {
    int laenge = strlen(eingabe);
    int help = laenge-1;
    for (int i = 0; i < laenge; ++i) {
        ausgabe[i] = eingabe[help];
        help--;
        ausgabe[laenge] = '\0';
        printf("%c", ausgabe[i]);
    }
}

int main() {
    char eingabe[MAX_SIZE];
    char ausgabe[MAX_SIZE];

    printf("Geben sie einen Text ein: \n");
    fgets(eingabe, MAX_SIZE, stdin);

    printf("Sie haben eingegeben:\n%s", eingabe);

    printf("Rueckwaerts gelesen ist der Text: ");

    reverse_array(eingabe, ausgabe);

    return EXIT_SUCCESS;
}
