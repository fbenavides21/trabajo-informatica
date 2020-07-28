
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nota_min 1.0
#define nota_max 7.0

float prom1, prom2, prom3;
int puntaje, puntaje2, puntaje3, puntaje_final, asist;
char asignatura [30];
	
	

float calculo_beca(float prom, int puntaje){ 
    if(prom>6.5 && prom<=7){ 
        puntaje=15;
    				}

    else if(prom<=6.5 && prom>6){ 
        puntaje=10;
    				}

    else if(prom<=6 && prom>5.5){ 
        puntaje=5;
    				}

    else { 
        puntaje=0;
    				}
    return puntaje;
}
int calculo_asistencia(int asistencia, int puntaje){ 
    if(asistencia>95 && asistencia<=100){ 
        puntaje=15;
    				}

    else if(asistencia<=95 && asistencia>90){ 
        puntaje=10;
    				}

    else if(asistencia<=90 && asistencia>80){ 
        puntaje=5;
    				}

    else { 
        puntaje=0;
    				}
    return puntaje;
}
void promedios (char asignatura [30]){
 do
    {
	  printf("Ingrese promedio del %s: ", asignatura);scanf("%f",&prom1);
		if (prom1<nota_min || prom1>nota_max)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(prom1<nota_min || prom1>nota_max);

do
    {
	   printf("Ingrese promedio de %s: ", asignatura);scanf("%i",&asist);
		if (asist<0 || asist>100)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(asist<0 || asist>100);

do
    {
	   printf("Ingrese promedio de notas de %s: ", asignatura);scanf("%f",&prom2);
		if (prom2<nota_min || prom2>nota_max)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(prom2<nota_min || prom2>nota_max);

do
    {
	printf("Ingrese promedio de notas de %s: ", asignatura);scanf("%f",&prom3);
		if (prom3<nota_min || prom3>nota_max)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(prom3<nota_min || prom3>nota_max);

}

int main(){

		
		promedios ("año anterior"); puntaje=calculo_beca(prom1,puntaje);
		promedios ("asistencia"); puntaje2=calculo_asistencia(asist,puntaje);
		promedios ("Calculo"); puntaje=calculo_beca(prom1,puntaje);
		promedios ("Algebra"); puntaje=calculo_beca(prom1,puntaje);
		
		
  

    return 0;
}
