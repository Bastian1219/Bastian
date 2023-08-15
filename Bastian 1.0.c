#include <stdio.h>
#include <locale.h>

int main (int argc,char **argv)
{
	setlocale(LC_ALL, "");
	printf("\033[5mGeneraciones de Computadoras\033[0m\n");
	printf("\n");
	printf("\033[4mcuantas generaciones de computadoras hay?\033[0m\n");
	printf("\033[1mPrimera Generación (1940-1956):\033[0m Durante esta época, las computadoras utilizaban válvulas (tubos de vacío) para procesar información. Ejemplos notables son la ENIAC y la UNIVAC.\n");
	printf("\033[1mSegunda Generación (1956-1963):\033[0m Se introdujeron los transistores, que eran más pequeños, más confiables y generaban menos calor que las válvulas. Esto permitió la creación de computadoras más compactas y eficientes energéticamente.\n");
	printf("\033[1mTercera Generación (1964-1971):\033[0m Se desarrollaron circuitos integrados (chips) que permitían colocar múltiples componentes electrónicos en una sola pastilla de silicio. Esto condujo a un aumento significativo en la capacidad de procesamiento y a una reducción del tamaño de las computadoras.\n");
	printf("\033[1mCuarta Generación (1971-1981):\033[0m La invención del microprocesador marcó esta era. Los microprocesadores permitieron que toda la unidad central de procesamiento (CPU) se integrara en un solo chip, lo que llevó a la creación de computadoras personales y sistemas más pequeños.\n");
	printf("\033[1mQuinta Generación (desde 1981 hasta el presente):\033[0m Esta generación se caracteriza por el desarrollo de microprocesadores más avanzados, junto con mejoras en la tecnología de almacenamiento, redes y software. También se ha producido una mayor integración de sistemas y dispositivos, lo que ha llevado a avances en la inteligencia artificial y la computación distribuida.\n");
	printf("\n");
	printf("\033[4mdame tres caracteristicas de la primera generacion\033[0m\n");
	printf("\033[1m1.-Válvulas (tubos de vacío):\033[0m Las computadoras de primera generación utilizaban válvulas electrónicas o tubos de vacío para realizar operaciones lógicas y de cálculo. Estas válvulas eran grandes, consumían mucha energía y generaban una cantidad significativa de calor, lo que limitaba la eficiencia y confiabilidad de las máquinas.\n");
	printf("\033[1m2.-Programación basada en lenguaje de máquina:\033[0m En esta época, los programas se escribían directamente en lenguaje de máquina, que consistía en códigos numéricos que representaban instrucciones específicas para la computadora. Esto hacía que la programación fuera tediosa y propensa a errores, ya que no existían lenguajes de programación de alto nivel en ese momento.\n");
	printf("\033[1m3.-Grandes dimensiones y limitaciones de capacidad:\033[0m Las computadoras de primera generación eran enormes y ocupaban salas enteras. A pesar de su tamaño, tenían una capacidad de procesamiento y almacenamiento muy limitada en comparación con las computadoras modernas. La ENIAC, por ejemplo, ocupaba un espacio considerable y requería un tiempo significativo para configurarse y realizar cálculos.\n");
	printf("\n");
	printf("\033[4mdime 3 caracteristicas de la segunda generacion de computadoras\033[0m\n");
	printf("\033[1m1.-Transistores:\033[0m La segunda generación de computadoras reemplazó las válvulas electrónicas de la primera generación con transistores. Los transistores eran dispositivos semiconductores mucho más pequeños, eficientes y confiables que las válvulas. Este avance permitió la creación de computadoras más compactas, rápidas y energéticamente eficientes.\n");
	printf("\033[1m2.-Sistemas más fiables y duraderos:\033[0m Los transistores eran mucho más resistentes al desgaste y al calor en comparación con las válvulas. Esto resultó en una mejora significativa en la confiabilidad y durabilidad de las computadoras de segunda generación. Además, las computadoras basadas en transistores requerían menos mantenimiento y tiempo de inactividad en comparación con sus predecesoras de válvulas.\n");
	printf("\033[1m3.-Lenguajes de programación de alto nivel:\033[0m Durante la segunda generación, comenzaron a surgir los primeros lenguajes de programación de alto nivel, como el lenguaje Fortran y el lenguaje COBOL. Estos lenguajes permitían a los programadores escribir código en una forma más cercana al lenguaje humano, lo que hacía que la programación fuera más accesible y menos propensa a errores en comparación con la programación en lenguaje de máquina.\n");
	return 0;
}
