#include <stdio.h>
#include <locale.h>

int main (int argc,char **argv)
{
	setlocale(LC_ALL, "");
	printf("\033[5mGeneraciones de Computadoras\033[0m\n");
	printf("\n");
	printf("\033[4mcuantas generaciones de computadoras hay?\033[0m\n");
	printf("\033[1mPrimera Generaci�n (1940-1956):\033[0m Durante esta �poca, las computadoras utilizaban v�lvulas (tubos de vac�o) para procesar informaci�n. Ejemplos notables son la ENIAC y la UNIVAC.\n");
	printf("\033[1mSegunda Generaci�n (1956-1963):\033[0m Se introdujeron los transistores, que eran m�s peque�os, m�s confiables y generaban menos calor que las v�lvulas. Esto permiti� la creaci�n de computadoras m�s compactas y eficientes energ�ticamente.\n");
	printf("\033[1mTercera Generaci�n (1964-1971):\033[0m Se desarrollaron circuitos integrados (chips) que permit�an colocar m�ltiples componentes electr�nicos en una sola pastilla de silicio. Esto condujo a un aumento significativo en la capacidad de procesamiento y a una reducci�n del tama�o de las computadoras.\n");
	printf("\033[1mCuarta Generaci�n (1971-1981):\033[0m La invenci�n del microprocesador marc� esta era. Los microprocesadores permitieron que toda la unidad central de procesamiento (CPU) se integrara en un solo chip, lo que llev� a la creaci�n de computadoras personales y sistemas m�s peque�os.\n");
	printf("\033[1mQuinta Generaci�n (desde 1981 hasta el presente):\033[0m Esta generaci�n se caracteriza por el desarrollo de microprocesadores m�s avanzados, junto con mejoras en la tecnolog�a de almacenamiento, redes y software. Tambi�n se ha producido una mayor integraci�n de sistemas y dispositivos, lo que ha llevado a avances en la inteligencia artificial y la computaci�n distribuida.\n");
	printf("\n");
	printf("\033[4mdame tres caracteristicas de la primera generacion\033[0m\n");
	printf("\033[1m1.-V�lvulas (tubos de vac�o):\033[0m Las computadoras de primera generaci�n utilizaban v�lvulas electr�nicas o tubos de vac�o para realizar operaciones l�gicas y de c�lculo. Estas v�lvulas eran grandes, consum�an mucha energ�a y generaban una cantidad significativa de calor, lo que limitaba la eficiencia y confiabilidad de las m�quinas.\n");
	printf("\033[1m2.-Programaci�n basada en lenguaje de m�quina:\033[0m En esta �poca, los programas se escrib�an directamente en lenguaje de m�quina, que consist�a en c�digos num�ricos que representaban instrucciones espec�ficas para la computadora. Esto hac�a que la programaci�n fuera tediosa y propensa a errores, ya que no exist�an lenguajes de programaci�n de alto nivel en ese momento.\n");
	printf("\033[1m3.-Grandes dimensiones y limitaciones de capacidad:\033[0m Las computadoras de primera generaci�n eran enormes y ocupaban salas enteras. A pesar de su tama�o, ten�an una capacidad de procesamiento y almacenamiento muy limitada en comparaci�n con las computadoras modernas. La ENIAC, por ejemplo, ocupaba un espacio considerable y requer�a un tiempo significativo para configurarse y realizar c�lculos.\n");
	printf("\n");
	printf("\033[4mdime 3 caracteristicas de la segunda generacion de computadoras\033[0m\n");
	printf("\033[1m1.-Transistores:\033[0m La segunda generaci�n de computadoras reemplaz� las v�lvulas electr�nicas de la primera generaci�n con transistores. Los transistores eran dispositivos semiconductores mucho m�s peque�os, eficientes y confiables que las v�lvulas. Este avance permiti� la creaci�n de computadoras m�s compactas, r�pidas y energ�ticamente eficientes.\n");
	printf("\033[1m2.-Sistemas m�s fiables y duraderos:\033[0m Los transistores eran mucho m�s resistentes al desgaste y al calor en comparaci�n con las v�lvulas. Esto result� en una mejora significativa en la confiabilidad y durabilidad de las computadoras de segunda generaci�n. Adem�s, las computadoras basadas en transistores requer�an menos mantenimiento y tiempo de inactividad en comparaci�n con sus predecesoras de v�lvulas.\n");
	printf("\033[1m3.-Lenguajes de programaci�n de alto nivel:\033[0m Durante la segunda generaci�n, comenzaron a surgir los primeros lenguajes de programaci�n de alto nivel, como el lenguaje Fortran y el lenguaje COBOL. Estos lenguajes permit�an a los programadores escribir c�digo en una forma m�s cercana al lenguaje humano, lo que hac�a que la programaci�n fuera m�s accesible y menos propensa a errores en comparaci�n con la programaci�n en lenguaje de m�quina.\n");
	return 0;
}
