#include <stdio.h>

int main(){
    /*
    ### **5. Compra de Chocolates**
- **Descrição:** Dado um valor em reais e o preço de uma barra de chocolate, calcule quantas barras podem ser compradas e o troco.
- **Entrada:** Dois valores reais \( X \) e \( Y \) (\(0.00 < X, Y \leq 100.00\), \(X \geq Y\)).
- **Saída:** Número de chocolates e troco.
- **Exemplo:**
  ```
  Entrada:
  20.00 4.50
  Saída:
  4 2.00
  */
    double dinheiro, valor;

    scanf("%lf %lf", &dinheiro, &valor);
    int quantidadeChocolate = dinheiro / valor;

    double troco = dinheiro - (quantidadeChocolate * valor);

    printf("%d %.2lf", quantidadeChocolate, troco);

    return 0;
    
}