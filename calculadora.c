  #include <stdio.h>

   int main(){
   int valor1;
   int valor2;
   int resultado;
   char operacao;

  printf("insira uma operacao:\n");
  scanf("%c", &operacao);

   //SOMA: resultado = valor1 + valor2;
   //SUBTRACAO: resultado = valor1 - valor2;
   //MULTIPLICACAO: resultado = valor1 * valor2;
   //DIVISAO: resultado = valor1 / valor2;
   //resto: resultado = valor1 % valor2;
   //INCREMENTO: valor1++;
   //DECREMENTO: valor2--;
   
  printf("insira 2 valores:\n");
  printf("valor 1:\n");
  scanf("%d", &valor1);
  printf("valor 2:\n");
  scanf("%d", &valor2);
  if(operacao == '+'){
  resultado = valor1 + valor2;
  }else if(operacao  == '-'){
     resultado = valor1 - valor2;
  }else if(operacao  == '*'){
     resultado = valor1 * valor2;
  }else if(operacao  == '/'){
     resultado = valor1 / valor2;
  }else if(operacao  == '%'){
     resultado = valor1 % valor2;
  }


  printf("resultado: %d\n", resultado);
  printf("operacao: %c\n", operacao);  
    return 0;
   }