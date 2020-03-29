#include <stdio.h>
#include <stdlib.h>

int Morse(char *mot)
{
    char code[500];
    sprintf(code,"");
    int i;
    for(i=0; mot[i]!='\0'; i++)
    {
        mot[i]=tolower(mot[i]);
        switch(mot[i])
        {
            case '|':
                sprintf(code, "%s  | ", code);
                mot[i]=' ';
                break;
            case '0':
                sprintf(code, "%s -----", code);
                break;
            case '1':
                sprintf(code, "%s .----", code);
                break;
            case '2':
                sprintf(code, "%s ..---", code);
                break;
            case '3':
                sprintf(code, "%s ...--", code);
                 break;
            case '4':
                sprintf(code, "%s ....-", code);
                break;
            case '5':
                sprintf(code, "%s .....", code);
                break;
            case '6':
                sprintf(code, "%s -....", code);
                break;
            case '7':
                sprintf(code, "%s --...", code);
                break;
            case '8':
                sprintf(code, "%s ---..", code);
                break;
            case '9':
                sprintf(code, "%s ----.", code);
                break;
            case 'a':
                sprintf(code, "%s .-", code);
                break;
            case 'b':
                sprintf(code, "%s --...", code);
                break;
            case 'c':
                sprintf(code, "%s -.-.", code);
                break;
            case 'd':
                sprintf(code, "%s -..", code);
                break;
            case 'e':
                sprintf(code, "%s .", code);
                break;
            case 'f':
                sprintf(code, "%s ..-.", code);
                break;
            case 'g':
                sprintf(code, "%s --.", code);
                break;
            case 'h':
                sprintf(code, "%s ....", code);
                break;
            case 'i':
                sprintf(code, "%s ..", code);
                break;
            case 'j':
                sprintf(code, "%s .---", code);
                break;
            case 'k':
                sprintf(code, "%s -.-", code);
                break;
            case 'l':
                sprintf(code, "%s .-..", code);
                break;
            case 'm':
                sprintf(code, "%s --", code);
                break;
            case 'n':
                sprintf(code, "%s -.", code);
                break;
            case 'o':
                sprintf(code, "%s ---", code);
                break;
            case 'p':
                sprintf(code, "%s .--.", code);
                break;
            case 'q':
                sprintf(code, "%s --.-", code);
                break;
            case 'r':
                sprintf(code, "%s .-.", code);
                break;
            case 's':
                sprintf(code, "%s ...", code);
                break;
            case 't':
                sprintf(code, "%s -", code);
                break;
            case 'u':
                sprintf(code, "%s ..-", code);
                break;
            case 'v':
                sprintf(code, "%s ...-", code);
                break;
            case 'w':
                sprintf(code, "%s .--", code);
                break;
            case 'x':
                sprintf(code, "%s -..-", code);
                break;
            case 'y':
                sprintf(code, "%s -.--", code);
                break;
            case 'z':
                sprintf(code, "%s --..", code);
                break;
            case '?':
                sprintf(code, "%s ..--..", code);
                break;
            case '!':
                sprintf(code, "%s -.-.--", code);
                break;
            case '.':
                sprintf(code, "%s .-.-.-", code);
                break;
            case ';':
                sprintf(code, "%s -.-.-", code);
                break;
            case ',':
                sprintf(code, "%s --..--", code);
                break;
        }
    }
    return code;
}