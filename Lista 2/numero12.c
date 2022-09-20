#include <stdio.h>

int calcularCPF(char cpf []) {
    int incrementador = 2;
    int soma = 0;
    int temp = 0;
    int resto = 0;

    for (int count = 11; count > 0; count--)
    {
        if (cpf[count] == NULL) {
            break;
        }
        temp = ((int)cpf[count]) * incrementador;
        soma += temp;
        incrementador++;
    }

    resto = soma / 11;

    if (resto < 2)
    {
        return 0;
    }
    else
    {
        return 11 - resto;
    }
}

int main() {

    // O ALGORITMO ESTÁ ERRADO, OS RESULTADOS NÃO SÃO CONFIÁVEIS
    char cpf[11];
    char cpfCalculado[11];

    printf("Informe o cpf correto: ");
    scanf("%s", cpf);

    for (int i = 0; i < 9; i++)
    {
        cpfCalculado[i] = cpf[i];
    }

    cpfCalculado[9] = (char) calcularCPF(cpf);
    cpfCalculado[10] = (char) calcularCPF(cpf);

    int igual = 1;

    for (int i = 0; i < 11; i++)
    {
        if (cpfCalculado[i] != cpf[i])
        {
            igual = 0;
            printf("CPF invalido");
            break;
        }
    }

    if (igual == 1)
    {
        printf("CPF valido");
    }
    
}