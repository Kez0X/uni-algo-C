#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char charAt(char ch[], int p)
{
    if (strlen(ch) < p)
    {
        return 0;
    }
    else
    {
        return ch[p];
    }
}

void majuscule(char ch[])
{
    for (int i = 0; i < strlen(ch); ++i)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
    }
}

/*int lireChaine(char ch[]) {
    for (int i = 0; i < strlen(ch); ++i) {
        char input = 0;
        printf("Entrez un char : ");
        scanf("%c", &input);
        if (input == 126) {
            break;
        }
        ch[i] = input;
    }
    if (strlen())
}*/

void crypte(char ch[], int n)
{
    for (int i = 0; i < strlen(ch); ++i)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + n;
        }
    }
}

void compte(char ch[])
{
    int nbCaractere = 0, nbMots = 0, nbLignes = 0;
    for (int i = 0; i < strlen(ch); ++i)
    {
        switch (ch[i])
        {
        case '\n':
        {
            nbLignes++;
        }
        case ' ':
        {
            nbMots++;
        }
        default:
        {
            nbCaractere++;
            break;
        }
        }
    }
    nbMots++;
    printf("Caractères = %d\nMots = %d\nLignes = %d\n", nbCaractere, nbMots, nbLignes);
}

int palindrome(char ch[])
{
    int isPalindrome = 1;
    for (int i = 0, y = (strlen(ch) - 1); i < (strlen(ch) / 2); ++i, --y)
    {
        if (ch[i] != ch[y])
        {
            isPalindrome = 0;
        }
    }
    return isPalindrome;
}

int statCar(char ch[])
{
    int nbOcc[256] = {0};
    int i = 0;
    while (ch[i] != 0)
    {
        nbOcc[(unsigned char)ch[i]]++;
        i++;
    }
    while (1)
    {
        int posMax = 0;
        for (int i = 1; i < 256; i++)
        {
            if (nbOcc[i] > nbOcc[posMax])
                posMax = i;
        }
        if (nbOcc[posMax] == 0)
            break;
        else
        {
            printf("%c : %d\n", posMax, nbOcc[posMax]);
            nbOcc[posMax] = 0;
        }
    }
    return 0;
}

int main()
{
    char ch[] = "hello";

    char index = charAt(ch, 555);
    printf("%c\n", index);

    majuscule(ch);
    printf("%s\n", ch);

    crypte(ch, 5);
    printf("%s\n", ch);

    char ch2[] = "Salut, ça va.";
    compte(ch2);

    char mot[] = "eluparcettecrapule";
    int isPalydrome = palindrome(mot);
    if (isPalydrome == 0)
    {
        printf("Le mot %s n'est pas un palindrome.", mot);
    }
    else
    {
        printf("Le mot %s est un palindrome.", mot);
    }

    return 0;
}