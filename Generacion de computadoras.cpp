#include <stdio.h>
#include <Windows.h> 
//https://foro.elhacker.net/programacion_cc/cambio_colores_en_un_solo_printf_en_c-t484932.0.html

void Color(int Background, int Text);
enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).
 BLACK = 0,
 BLUE = 1,
 GREEN = 2,
 CYAN = 3,
 RED = 4,
 MAGENTA = 5,
 BROWN = 6,
 LGREY = 7,
 DGREY = 8,
 LBLUE = 9,
 LGREEN = 10,
 LCYAN = 11,
 LRED = 12,
 LMAGENTA = 13,
 YELLOW = 14,
 WHITE = 15
};


int main (int argc,char **argv)
{
	printf("Primera generacion de computadoras\n");
	printf("¿En que años fueron desarrolladas estas computadoras \n"); 
	printf("De 1940 a 1950\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	printf("Utilizaban valvulas electronicas principlmente diseñadas para calculos cientificos y militares	\n\n"); 
	Color(BLACK,LBLUE);
	printf("Segunda generacion de computadoras	\n\n"); 
	printf("¿En que años fueron desarrolladas estas computadoras	\n\n"); 
	printf("De 1950 a 1960	\n\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	printf("Utilizaban  transistores en lugar de tubos de vacio por lo que eran pequeñas rapidas y confiables	\n\n"); 
	Color(0,RED);
	printf("Tercera generacion de computadoras	\n\n"); 
	printf("¿En que años fueron desarrolladas estas computadoras	\n\n"); 
	printf("De 1960 a 1970	\n\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	printf("se utilizaron circuitos integrados permitio un aumento significativo en la velocidad	\n\n"); 
	Color(0,LGREEN);
	printf("Cuarta generacion de computadoras	\n\n"); 
	printf("¿En que años fueron desarrolladas estas computadoras	\n\n"); 
	printf("De 1970 a 1980	\n\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	printf("Se implementaron microoprocesadores que tenian una mayor eficiencia y una mayor capacidad de procesamiento de aqui se basan los procesadores intel 4004 y 8086	\n\n"); 
	Color(0,YELLOW);
	printf("Quinta generacion de computadoras	\n\n"); 
	printf("¿En que años fueron desarrolladas estas computadoras	\n\n"); 
	printf("De 1980 a 1990	\n\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	printf("Se caracterizado por el desarrollo de tecnologias de la inteligencia artificial maquinas capaces de entender el lenguaje natural y aprender de la experiencia	\n\n"); 
	Color(0,BROWN);
	printf("Sexta generacion de computadoras	\n\n"); 
	printf("¿En que años fueron desarrolladas estas computadoras	\n\n"); 
	printf("De 1990 a 2000	\n\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	printf("Se asocia con avances tecnologicos en los campos de la informatica avances en la integracion de internet en la vida cotidiana con mejoras en la capacidad de procesamiento de las computadoras	\n\n"); 
	Color(0,BLUE);
	printf("Septima generacion de computadoras	\n\n"); 
	printf("¿En que años fueron desarrolladas estas computadoras	\n\n"); 
	printf("De 1990 a 2000	\n\n");  
	printf("Principales caracteristicas de estas computadoras	\n\n"); 
	Color(YELLOW,BLACK);
	printf(" Aun estamos en la etapa de desarrollo de las computadoras que no se ha podido determinar una fecha para el cambio de generacion y usamos como referencia el año 1999 hasta el dia de hoy 	\n\n"); 
return 0;
}

void Color(int Background, int Text){ // Función para cambiar el color del fondo y/o pantalla

 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); // Tomamos la consola.

 // Para cambiar el color, se utilizan números desde el 0 hasta el 255.
 // Pero, para convertir los colores a un valor adecuado, se realiza el siguiente cálculo.
 int    New_Color= Text + (Background * 16);

 SetConsoleTextAttribute(Console, New_Color); // Guardamos los cambios en la Consola.
}
