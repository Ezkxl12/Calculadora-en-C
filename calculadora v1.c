#include <stdio.h>
#include <stdlib.h>

int main() 
{
      printf("1. Sumar \n");
        printf("2. Restar \n");
          printf("3. Multiplicar \n");
            printf("4. Dividir \n");
              printf("5. Salir \n");

                printf("¿Qué quieres hacer? \n");

                  int opcion;
                    scanf("%d", &opcion);

                      if(opcion == 1) {
                            int sumando1, sumando2;
                                printf("Introduce el primer numero: \n");
                                    scanf("%d", &sumando1);
                                        printf("Introduce el segundo numero: \n");
                                            scanf("%d", &sumando2);
                                                printf("El resultado de la suma es: %d \n", sumando1 + sumando2);
                      }
                        else if(opcion == 2){
                                int restando1, restando2;
                                    printf("Introduce el primer numero: \n");
                                        scanf("%d", &restando1);
                                            printf("Introduce el segundo numero: \n");
                                                scanf("%d", &restando2);
                                                    printf("El resultado de la resta es: %d \n", restando1 - restando2);
                        }
                          else if(opcion == 3) {
                                int multiplicando1,multiplicando2;
                                    printf("Introduce el primer numero: \n");
                                        scanf("%d", &multiplicando1);
                                            printf("Introduce el segundo numero: \n");
                                                scanf("%d", &multiplicando2);
                                                    printf("El resultado de la multiplicacion es: %d \n", multiplicando1 * multiplicando2);
                          }
                            else if(opcion == 4){
                                    int dividiendo1, dividiendo2;
                                        printf("Introduce el primer numero: \n");
                                            scanf("%d", &dividiendo1);
                                                printf("Introduce el segundo numero: \n");
                                                    scanf("%d", &dividiendo2);
                                                        printf("El resultado de la division es: %d \n", dividiendo1 / dividiendo2);
                            }
                              else if(opcion == 5){
                                    printf("Has salido de la calculadora \n");
                              }

                                return 0;
}
                              }
                            }
                          }
                        }
                      }
}