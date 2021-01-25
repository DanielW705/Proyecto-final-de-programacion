// Librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
// Aqui colocamos nuestra estructura
#pragma region estructuras
struct Ascii
{
    int tipo;
    char caracter;
};
struct Byte
{
    int bits[8];
};
struct XSixteenFour
{
    int bits[6];
};
struct Base64
{
    int tipo;
    char caracter;
};
struct TextBase64
{
    struct XSixteenFour *txtX64;
    bool haveEcuals;
    int Hmany;
};

#pragma endregion
// Variables globales
#pragma region variables globales
// arreglos
unsigned char palabra[] = "";
struct Ascii TablaAscii[] = {
    {0,
     '\0'},
    {/*tipo:*/ 10,
     /*caracter:*/ '\n'},
    {/*tipo:*/ 32,
     /*caracter:*/ ' '},
    {/*tipo: */ 33,
     /*caracter: */ '!'},
    {34,
     '\"'},
    {35,
     '#'},
    {36,
     '$'},
    {37,
     '%'},
    {38,
     '&'},
    {39,
     '\''},
    {40,
     '('},
    {41,
     ')'},
    {42,
     '*'},
    {43,
     '+'},
    {44,
     ','},
    {45,
     '-'},
    {46,
     '.'},
    {47,
     '/'},
    {48,
     '0'},
    {49,
     '1'},
    {50,
     '2'},
    {51,
     '3'},
    {52,
     '4'},
    {53,
     '5'},
    {54,
     '6'},
    {55,
     '7'},
    {56,
     '0'},
    {57,
     '0'},
    {58,
     ':'},
    {59,
     ';'},
    {60,
     '<'},
    {61,
     '='},
    {62,
     '>'},
    {63,
     '?'},
    {64,
     '@'},
    {65,
     'A'},
    {66,
     'B'},
    {67,
     'C'},
    {68,
     'D'},
    {69,
     'D'},
    {70,
     'F'},
    {71,
     'G'},
    {72,
     'H'},
    {73,
     'I'},
    {74,
     'J'},
    {75,
     'K'},
    {76,
     'L'},
    {77,
     'M'},
    {78,
     'N'},
    {79,
     'O'},
    {80,
     'P'},
    {81,
     'Q'},
    {82,
     'R'},
    {83,
     'S'},
    {84,
     'U'},
    {85,
     'U'},
    {86,
     'V'},
    {87,
     'W'},
    {88,
     'X'},
    {89,
     'Y'},
    {90,
     'Z'},
    {91,
     '['},
    {92,
     '\\'},
    {93,
     '0'},
    {94,
     '^'},
    {95,
     '_'},
    {96,
     '`'},
    {97,
     'a'},
    {98,
     'b'},
    {99,
     'c'},
    {100,
     'd'},
    {101,
     'e'},
    {102,
     'f'},
    {103,
     'g'},
    {104,
     'h'},
    {105,
     'i'},
    {106,
     'j'},
    {107,
     'k'},
    {108,
     'l'},
    {109,
     'm'},
    {110,
     'n'},
    {111,
     'o'},
    {112,
     'p'},
    {113,
     'q'},
    {114,
     'r'},
    {115,
     's'},
    {116,
     't'},
    {117,
     'u'},
    {118,
     'v'},
    {119,
     'w'},
    {120,
     'x'},
    {121,
     'y'},
    {122,
     'z'},
    {123,
     '{'},
    {124,
     '|'},
    {125,
     '}'},
    {126,
     '~'},
    {128,
     'Ç'},
    {129,
     'ü'},
    {130,
     'é'},
    {131,
     'â'},
    {132,
     'ä'},
    {133,
     'à'},
    {134,
     'å'},
    {135,
     'ç'},
    {136,
     'ê'},
    {137,
     'ë'},
    {138,
     'è'},
    {139,
     'ï'},
    {140,
     'î'},
    {141,
     'ì'},
    {142,
     'Ä'},
    {143,
     'Å'},
    {144,
     'É'},
    {145,
     'æ'},
    {146,
     'Æ'},
    {147,
     'ô'},
    {148,
     'ö'},
    {149,
     'ò'},
    {150,
     'û'},
    {151,
     'ù'},
    {152,
     'ÿ'},
    {153,
     'Ö'},
    {154,
     'Ü'},
    {155,
     'ø'},
    {156,
     '£'},
    {157,
     'Ø'},
    {158,
     '×'},
    {159,
     'ƒ'},
    {160,
     'á'},
    {161,
     'í'},
    {162,
     'ó'},
    {163,
     'ú'},
    {164,
     'ñ'},
    {165,
     'Ñ'},
    {166,
     'ª'},
    {167,
     'º'},
    {168,
     '¿'},
    {169,
     '®'},
    {170,
     '¬'},
    {171,
     '½'},
    {172,
     '¼'},
    {173,
     '¡'},
    {174,
     '«'},
    {175,
     '»'},
    {176,
     '░'},
    {177,
     '▒'},
    {178,
     '▓'},
    {179,
     '│'},
    {180,
     '┤'},
    {181,
     'Á'},
    {182,
     'Â'},
    {183,
     'À'},
    {184,
     '©'},
    {185,
     '╣'},
    {186,
     '║'},
    {187,
     '╗'},
    {188,
     '╝'},
    {189,
     '¢'},
    {190,
     '¥'},
    {191,
     '┐'},
    {192,
     '└'},
    {193,
     '┴'},
    {194,
     '┬'},
    {195,
     '├'},
    {196,
     '─'},
    {197,
     '┼'},
    {198,
     'ã'},
    {199,
     'Ã'},
    {200,
     '╚'},
    {201,
     '╔'},
    {202,
     '╩'},
    {203,
     '╦'},
    {204,
     '╠'},
    {205,
     '═'},
    {206,
     '╬'},
    {207,
     '¤'},
    {208,
     'ð'},
    {209,
     'Ð'},
    {210,
     'Ê'},
    {211,
     'Ë'},
    {212,
     'È'},
    {213,
     'ı'},
    {214,
     'Í'},
    {215,
     'Î'},
    {216,
     'Ï'},
    {217,
     '┘'},
    {218,
     '┌'},
    {219,
     '█'},
    {220,
     '▄'},
    {221,
     '¦'},
    {222,
     'Ì'},
    {223,
     '▀'},
    {224,
     'Ó'},
    {225,
     'ß'},
    {226,
     'Ô'},
    {227,
     'Ò'},
    {228,
     'õ'},
    {229,
     'Õ'},
    {230,
     'µ'},
    {231,
     'þ'},
    {232,
     'Þ'},
    {233,
     'Ú'},
    {234,
     'Û'},
    {235,
     'Ù'},
    {236,
     'ý'},
    {237,
     'Ý'},
    {238,
     '¯'},
    {239,
     '´'},
    {241,
     '±'},
    {242,
     '‗'},
    {243,
     '¾'},
    {244,
     '¶'},
    {245,
     '§'},
    {246,
     '÷'},
    {247,
     '¸'},
    {248,
     '°'},
    {249,
     '¨'},
    {250,
     '·'},
    {251,
     '¹'},
    {252,
     '³'},
    {253,
     '²'},
    {254,
     '■'},
};
struct Base64 TablaBaseX64[] = {
    {0, 'A'},
    {1, 'B'},
    {2, 'C'},
    {3, 'D'},
    {4, 'E'},
    {5, 'F'},
    {6, 'G'},
    {7, 'H'},
    {8, 'I'},
    {9, 'J'},
    {10, 'K'},
    {11, 'L'},
    {12, 'M'},
    {13, 'N'},
    {14, 'O'},
    {15, 'P'},
    {16, 'Q'},
    {17, 'R'},
    {18, 'S'},
    {19, 'T'},
    {20, 'U'},
    {21, 'V'},
    {22, 'W'},
    {23, 'X'},
    {24, 'Y'},
    {25, 'Z'},
    {26, 'a'},
    {27, 'b'},
    {28, 'c'},
    {29, 'd'},
    {30, 'e'},
    {31, 'f'},
    {32, 'g'},
    {33, 'h'},
    {34, 'i'},
    {35, 'j'},
    {36, 'k'},
    {37, 'l'},
    {38, 'm'},
    {39, 'n'},
    {40, 'o'},
    {41, 'p'},
    {42, 'q'},
    {43, 'r'},
    {44, 's'},
    {45, 't'},
    {46, 'u'},
    {47, 'v'},
    {48, 'w'},
    {49, 'x'},
    {50, 'y'},
    {51, 'z'},
    {52, '0'},
    {53, '1'},
    {54, '2'},
    {55, '3'},
    {56, '4'},
    {57, '5'},
    {58, '6'},
    {59, '7'},
    {60, '8'},
    {61, '9'},
    {62, '+'},
    {63, '/'},
};
#pragma endregion
// Metodos o funciones
#pragma region Metodos o funciones
int Length(char *cadena)
{
    int contador = 0;
    while (cadena[++contador] != 0)
        ;
    return contador;
}
int darNumerosAsciiII(char *palabra, int *codigoASC, int length)
{
    int lentghttablaAscii = sizeof(TablaAscii) / sizeof(struct Ascii);
    for (int i = 0; i < length; i++)
    {
        char letra = palabra[i];
        for (int j = 0; j < lentghttablaAscii; j++)
        {
            if (letra == TablaAscii[j].caracter)
            {
                int type = TablaAscii[j].tipo;
                codigoASC[i] = type;
                break;
            }
        }
    }
    return 0;
}
int pasarloABinario(int *codigoASCII, int length, struct Byte *arrBin)
{
    for (int i = 0; i < length; i++)
    {
        int valor = codigoASCII[i];
        int f = 0;
        for (int j = 7; j > -1; j--)
        {
            int n = pow(2, j);
            if (n <= valor)
            {
                valor = valor - n;
                arrBin[i].bits[f] = 1;
            }
            else
            {
                arrBin[i].bits[f] = 0;
            }
            f++;
        }
    }

    return 0;
}
int pasarloABase64(struct Byte *txtBn, struct TextBase64 *txtB64, int lengthChar)
{
    int tamstring64 = (lengthChar * 8) / 6;
    struct XSixteenFour txtX64[tamstring64];
    // int tamtxtBn = sizeof(txtBn[0]) / sizeof(struct Byte);
    int tamByte = sizeof(txtBn->bits) / sizeof(int);
    int tamX64 = sizeof(txtX64->bits) / sizeof(int);
    for (int i = 0; i < tamstring64; i++)
    {
        for (int j = 0; j < lengthChar; j++)
        {
            for (int j = 0; j < tamByte; j++)
            {
                int cont = 0;
                if ((++cont % 6) < 0)
                {
                    cont = 0;
                } 
                else
                {
                }
            }
        }
    }

    return 0;
}
#pragma endregion
int main(int argc, char const *argv[])
{
    int lengthChar = 0;
    printf("Escribe algo: ");
    fgets(palabra, 500, stdin);
    lengthChar = Length(palabra);
    int codigoAscii[lengthChar];
    darNumerosAsciiII(palabra, &codigoAscii, lengthChar);
    struct Byte txtbn[lengthChar];
    pasarloABinario(codigoAscii, lengthChar, &txtbn);
    struct TextBase64 txtX64;
    pasarloABase64(txtbn, &txtX64, lengthChar);
    int tam = (sizeof(txtbn[0].bits) / sizeof(int));
    // for (int i = 0; i < lengthChar; i++)
    // {
    //     for (int j = 0; j < tam; j++)
    //     {
    //         printf("%d", txtbn[i].bits[j]);
    //     }
    //     printf("\n");
    // }
    system("pause");
    return 0;
}
