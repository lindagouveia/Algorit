//Construa uma	fun��o	que	calcule e	retorne a	dist�ncia	entre	dois	pontos	(	x1, y1)	e	(x2, y2). Todos	os n�meros	e	valores	de	retorno	
//devem	ser	do	tipo	double. Voc� ter� que incluir trechos de c�digo no algoritmo para que ele retorne o que se est� sendo pedido.

//DICA:

//Sabemos que para calcular a dist�ncia entre dois pontos (	x1, y1)	e	(x2, y2), temos que calcular da seguinte forma:

//a = x1 - x2; // Encontra a distancia entre os pontos x1 e x2 
//b = y1 - y2; // Encontra a distancia entre os pontos y1 e y2 
//c = a * a + b * b; // faz a conta = a�2 + b�2 
//sqrt(c); // Acha a raiz da equa��o.
-------------------------------------------------------------------------------------

//Para auxiliar na constru��o do algoritmo segue trecho do c�digo:



//#include <stdio.h> 

//#include <math.h> // Biblioteca para a fun��o sqrt (square root - raiz quadrada) 



//int main(){ 

//double x1, x2, y1, y2, res; 

//printf("Digite as coordenadas X e Y do ponto 1:\n"); 

//scanf("%f %f", &x1, &y1); 

// printf("Digite as coordenadas X e Y do ponto 2:\n"); 

// scanf("%f %f", &x2, &y2); 

 

// return 0;

// }

#include <stdio.h>
#include <math.h>

double calculaDistancia(double x1, double y1, double x2, double y2) {
	return sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}

int main() {
	double x1,y1,x2,y2,distancia;

	printf("Informe as coordenadas para o primeiro ponto: ");
	scanf("%f %f", &x1, &y1);
	printf("Informe as coordenadas para o segundo ponto: ");
	scanf("%f %f", &x2, &y2);

	distancia = calculaDistancia(x1,y1,x2,y2);

	printf("Distancia: %f", distancia);
}
