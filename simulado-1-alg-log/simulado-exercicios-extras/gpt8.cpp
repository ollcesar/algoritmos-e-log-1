#include <stdio.h>

int main(){

    /*
    - **Descrição:** O programa deve imprimir uma saudação diferente dependendo do horário.
  - 0h - 11h: "Bom dia!"
  - 12h - 17h: "Boa tarde!"
  - 18h - 23h: "Boa noite!"
- **Entrada:** Um inteiro representando a hora do dia (\(0 \leq H \leq 23\)).
- **Saída:** Saudação correspondente.
- **Exemplo:**
  ```
  Entrada:
  14
  Saída:
  Boa tarde!*/
    int hora;
    scanf("%d", &hora);
    if(hora >= 0 && hora <= 11){
        printf("Bom dia!\n");
    }else if(hora >= 12 && hora <= 17){
        printf("Boa tarde!\n");
    }else if(hora >= 18 && hora <= 23){
        printf("Boa noite\n!");
    }
    return 0;
}