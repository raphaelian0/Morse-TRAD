#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")
#define cls system("cls");

int main()
{
    char motatraduire[100];
    printf("(100 letters max)(don't put accents(or cedilla));\n");
    printf("put a \"|\" as a space;\n");
    pause;
    cls
    printf("you can use all the letters of the basic Latin alphabet + all the Arabic numerals and the following characters:\n");
    printf("'!', '?', ';', ','\n");
    pause;
    cls
    printf("!\\ \nword to translate in Morse? ", 133);
    scanf("%s", motatraduire);
    cls;
    printf("S.O.S: international distress call: ... --- ...\n");
    printf("Beginning of transmission (KA): -.-.-\n");
    printf("End of message, to you:\n I am waiting for an answer from you (AR): .-.-.\n\n\n");
    printf("translated word(%s): %s\n\n", motatraduire, Morse(motatraduire));
    printf("End of transmission, completed:\n I do not wait for an answer from you (SK): ...-.-\n", 130);

    printf("end");
    pause;
    return 0;
}
