#include <stdio.h>

int main() {
    char palavrasecreta[20];

    sprintf_s(palavrasecreta, sizeof(palavrasecreta), "MELANCIA E MAMAO");  // Armazena a string completa
    //sizeof(palavrasecreta) retorna 20, porque palavrasecreta é um array de 20 caracteres.
    palavrasecreta[8] = '\0';  // Corta a string no índice 8

    printf("%s", palavrasecreta);  // Exibe apenas "MELANCIA"

    return 0;
}
