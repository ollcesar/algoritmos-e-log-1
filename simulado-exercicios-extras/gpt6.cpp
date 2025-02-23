#include <stdio.h>

int main(){
    /*
    ### **6. Iluminação de Estádio**
- **Descrição:** Para iluminar um estádio, use a seguinte tabela:

  | Tamanho (m²) | Energia (W) |
  |-------------|------------|
  | < 50       | 200        |
  | 50-100     | 400        |
  | 101-200    | 600        |
  | > 200      | 800        |

- **Entrada:** Um inteiro \( A \) (\(1 \leq A \leq 500\)).
- **Saída:** Energia necessária.
- **Exemplo:**
  ```
  Entrada:
  120
  Saída:
  600
  */
    int tamanho;
    scanf("%d", &tamanho);
    if(tamanho < 50){
        printf("200\n");
    }else if(tamanho >=50 && tamanho <= 100){
        printf("400\n");
    }else if(tamanho > 100 && tamanho <= 200){
        printf("600\n");
    }else if(tamanho > 200){
        printf("800\n");
    }

    return 0;
}