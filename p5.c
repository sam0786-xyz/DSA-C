#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    int ctr, c = 0, words = 0, lines = 0, characters = 0;

    while (1) 
    {
        // Reading a line of text
        c = 0;
        while ((ctr = getchar()) != '\n')
            line[c++] = ctr;
        line[c] = '\0';

        // Counting the words in a line
        if (line[0] == '\0')
            break;
        else 
        {
            words++;
            for (int i = 0; line[i] != '\0'; i++)
                if (line[i] == ' ' || line[i] == '\t')
                    words++;
        }

        // Counting lines and characters
        lines = lines + 1;
        characters = characters + strlen(line);
    }

    // Printing the result
    printf("Number of lines: %d\n", lines);
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);

    return 0;
}
