#include <stdio.h>

int main(){

    /*### **7. Combustível Mais Barato**
- **Descrição:** Compare os preços de três combustíveis e informe qual é o mais barato.
- **Entrada:** Três valores reais \( E, G, D \) (\(0.999 < E, G, D < 9.999\)).
- **Saída:** Nome do combustível mais barato.
- **Exemplo:**
  ```
  Entrada:
  4.50 5.30 4.00
  Saída:
  DIESEL*/

    double etanol, gasolina, diesel;

    scanf("%lf %lf %lf", &etanol, &gasolina, &diesel);  

    if(etanol > diesel && gasolina > diesel){
        printf("DIESEL\n");
    }else if(etanol > gasolina && diesel > gasolina){
        printf("GASOLINA\n");
    }else if(gasolina > etanol && diesel > etanol){
        printf("ETANOL\n");
    }

    return 0;

}