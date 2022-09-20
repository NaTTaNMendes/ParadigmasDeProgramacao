#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int aleatorio = 0;
    int contador = 0;
    int verificador = 1;
    int verificadorArray = 1;
    int elementos[25];

    printf("Sorteados:");
    while (contador <= 24)
    {
        aleatorio = rand(100);
        for (int i = 2; i < aleatorio; i++)
        {            
            if (aleatorio % i == 0)
            {              
                verificador = 0;
                break;             
            }                      
        }
        if (verificador == 1)
        {
            for (int i = 0; i < 25; i++) 
            {
                if (elementos[i] == aleatorio) 
                {
                    verificadorArray = 0;
                    break;
                }
            }
            if (verificadorArray == 1)
            printf(" %d ", aleatorio);               
            elementos[contador] = aleatorio;
            contador++;
        } 
        verificador = 1;
        verificadorArray = 1;                 
    }
}