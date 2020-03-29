#include <stdio.h>
#include <stdlib.h>
#define pause system("pause")
#define cls system("cls");

int main()
{
    char motatraduire[100];
    printf("(100 lettres max)(ne pas mettre d'accents(ni de cedille));\n");
    printf("mettre un \"|\" en guise d'espace;\n");
    pause;
    cls
    printf("vous pouvez utiliser toutes les lettres de l'alphabet latin de base+tous les chiffres arabes et les caracteres suivants:\n");
    printf("'!', '?', ';', ','\n");
    pause;
    cls
    printf("!\\ \nmot %c traduire en Morse? ", 133);
    scanf("%s", motatraduire);
    cls;
    printf("S.O.S: appel de détresse international: ... --- ...\n");
    printf("Debut de transmission (KA): -.-.-\n");
    printf("Fin de message, %c vous :\n J'attends une reponse de votre part (AR): .-.-.\n\n\n", 133);
    printf("mot traduit(%s): %s\n\n", motatraduire, Morse(motatraduire));
    printf("Fin de transmission, termin%c :\n Je n'attends pas de reponse de votre part (SK): ...-.-\n", 130);
    printf("fin");
    pause;
    return 0;
}
