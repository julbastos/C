// #include <stdio.h>
// #include <math.h>


// int main() {
//     double A;
//     double B;
//     double hipotenusa;

//     printf("digite A: ");
//     scanf("%lf", &A );

//     printf("digite B: ");
//     scanf("%lf", &B);

//     hipotenusa = sqrt((A * A) + (B * B));
//     printf("hipotenusa eh: %.2f\n", hipotenusa);
    

//     return 0;
// }


#include <stdio.h>

int main (){
   int opcao;
   float va, vb;

   printf("digite o 1: ");
    scanf("%f", &va);
    printf("digite o 2: ");
    scanf("%f", &vb);

   printf("escolha uma opcao: \n");
   printf("\t1 - soma\n");
   printf("\t2 - subtracao\n");
   printf("\t3 - multiplicacao\n");
   printf("\t4 - divisao\n");
   printf("\t0 - sair\n");


  
   scanf("%d", &opcao);
  
  switch(opcao){
    case 1:
      printf("%.2f + %.2f = %.2f\n", va, vb, va+vb);
      break;
    case 2:
      printf("%.2f - %.2f = %.2f\n", va, vb, va-vb);
      break;
    case 3:
      printf("%.2f * %.2f = %.2f\n", va, vb, va*vb);
      break;
    case 4:
      printf("%.2f + %.2f = %.2f\n", va, vb, va + vb);
      break;
    case 0:
      printf("saindo...\n");
      break;
    default:
        break;
  }

    return 0;
}


