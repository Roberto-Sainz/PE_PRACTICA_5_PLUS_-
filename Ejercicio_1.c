#include<stdio.h>
/////FUNCIONES///////
double POTENCIA(double base,int exponente);
void SUMATORIA(int *arreglo1, int *arreglo2, int *resultado, int n);
void MULTIPLICATORIA(int *arreglo1, int *arreglo2, int *resultado, int n);

int main(){
int opcion,potencia;
double numero;
int arreglo1[5] = {1, 2, 3, 4, 5};
int arreglo2[5] = {5, 4, 3, 2, 1};
int resultado[5];
do{
printf("-------------------MENU-------------------\n");
printf("|[1]-Calcular Potencia De Un Numero.     |\n");
printf("|[2]-Sumatoria De 2 Arreglos.            |\n");
printf("|[3]-Multiplicacion De 2 Arreglos.       |\n");
printf("|[4]-Salir.                              |\n");
printf("------------------------------------------\n");
printf("Ingrese Una Opcion\n");
scanf("%d",&opcion);
switch(opcion){
    case 1:
    printf("Ingrese El Numero Al Que Desea Sacar La Potencia.\n");
    scanf("%le",&numero);
    printf("Ingresa La Potencia.\n");
    scanf("%d",&potencia);
    printf("El Numero %2.f ^ %d es %2.f\n",numero,potencia,POTENCIA(numero,potencia));
    break;

    case 2:
    SUMATORIA(arreglo1,arreglo2,resultado,5);
    printf("La Suma De Los Arreglos Es:\n");
     for (int i=0;i<5;i++) {
        printf("%d-",resultado[i]);
        
    }printf("\n");
    break;
    case 3:
    MULTIPLICATORIA(arreglo1,arreglo2,resultado,5);
    for (int i = 0; i < 5; i++) {
        printf("%d-", resultado[i]);
    }
    printf("\n");
    break;
    case 4:
    printf("GOOD BYE\n");
    break;
    default:
    printf("Opcion Invalida\n");
}
}while(opcion!=4);

    return 0;
}
double POTENCIA(double base,int exponente){
double resultado = 1.0;
    int contador = 0;
    
    while (contador < exponente){
        resultado *= base;
        contador++;
    }
    return resultado;
}
void SUMATORIA(int *arreglo1, int *arreglo2, int *resultado, int n){
    for (int i = 0; i < n; i++) {
        *(resultado + i) = *(arreglo1 + i) + *(arreglo2 + i);
    }
}
void MULTIPLICATORIA(int *arreglo1, int *arreglo2, int *resultado, int n){
        for (int i = 0; i < n; i++) {
        *(resultado + i) = *(arreglo1 + i) * *(arreglo2 + i);
    }
}
