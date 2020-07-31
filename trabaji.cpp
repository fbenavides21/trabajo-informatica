//integrante 1: Giovanny Frank Vargas Papa
//integrante 2: Maria Ignacia Torres Cofré
//integrante 3: Franco Andree Benavides Riveros
//Fecha: 31/07/2020
//Compilador: DEV-C++ version 5.11



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nota_min 1.0
#define nota_max 7.0
#define asist_max 100
#define asist_min 1
float prom1, prom2, prom3;
int puntaje1, puntaje2, puntaje3, puntaje_final, puntaje4, asist, monto_beca, ingreso, matricula,ff, ptmin, ptmax;
int fondo=600000;
int fondo_inicial=600000;
int cont_mat=0;
int cont_bec=0;
int cont_nobec=0;
int puntaje_maximo(int pf){
	if(pf>ptmax){
		ptmax=pf;
		return ptmax;	
	}		
}
int puntaje_minimo(int pf){
	if(pf<ptmax){
		if (pf<ptmin){
			ptmin=pf;
			}
	return ptmin;	}
		
	}
int becado(int pf, int mb){
	if(pf>=35){
		printf("Felicitaciones!! te han asigando una Beca, el valor asignado es de:  %d mil pesos.\n\n",mb);
		cont_bec++;
	}
	else {
		printf("\tNo Corresponde Beca, puntaje insuficiente :c\n");
		cont_nobec++;
	}
	
}
int resta_fondo (int mb){
	if (mb>=180000 ){
		fondo= fondo-mb;	}
	
}
int saldo_beca (int pf){
	if (pf>=55){
		return 300000;
	}
	if (pf<55 && pf>=50 ){
		return 270000;
	}
	if (pf<50 && pf>=45){
		return 240000;
	}
	if (pf<45 && pf>=40){
		return 210000;
	}
	if (pf<40 && pf>=35){
		return 180000;
	}
	if (pf<35){
		return 0;
	}
	monto_beca=pf;
	return monto_beca;	
}
int calculo_final (int p1, int p2, int p3, int p4){
	int resultado;
	resultado= p1+p2+p3+p4;
	return resultado;	
}
float calculo_beca(float prom){ 
    if(prom>6.5 && prom<=7){ 
        return 15;
    				}

	if(prom<=6.5 && prom>6){ 
        return 10;
    				}

    if(prom<=6 && prom>5.5){ 
        return 5;
    				}
    else { 
        return 0;
    				}
    return prom;
}
int calculo_asistencia(int asistencia){ 
    if(asistencia>95 && asistencia<=100){ 
        return 15;
    				}

    if(asistencia<=95 && asistencia>90){ 
        return 10;
    				}

    if(asistencia<=90 && asistencia>80){ 
        return 5;
    				}

    else { 
        return 0;
    				}
    return asistencia;
}
int promedios (float prom1, int asist, float prom2, float prom3){
 do
    {
	  printf("Ingrese promedio del ano anterior: ");scanf("%f",&prom1);
		if (prom1<nota_min || prom1>nota_max)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(prom1<nota_min || prom1>nota_max);

do
    {
	   printf("Ingrese promedio de asistencia en numeros enteros: ");scanf("%i",&asist);
		if (asist<asist_min || asist>asist_max)
            printf("El porcentaje esta fuera de rango, intente de nuevo\n\n");
    } while(asist<0 || asist>100);

do
    {
	   printf("Ingrese promedio de notas Algebra: ");scanf("%f",&prom2);
		if (prom2<nota_min || prom2>nota_max)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(prom2<nota_min || prom2>nota_max);

do
    {
	printf("Ingrese promedio de notas de Calculo: ");scanf("%f",&prom3);
		if (prom3<nota_min || prom3>nota_max)
            printf("La nota esta fuera de rango, intente de nuevo\n\n");
    } while(prom3<nota_min || prom3>nota_max);
	
	
	puntaje1 = calculo_beca(prom1);
	puntaje2 = calculo_asistencia(asist);	
	puntaje3 = calculo_beca(prom2);
	puntaje4 = calculo_beca(prom3);
	
	puntaje_final= calculo_final(puntaje1, puntaje2, puntaje3, puntaje4);
	
	
	return 0;

}
void pedir_datos (int i, int ma){
	printf ("----------------------------------------------------------------------------------------------------\n");
	printf ("\t\t ***Bienvenido al programa de becas de la Universidad Master***\t\t\n\n");
	printf ("\t\t\t\t**Ingrese sus datos para otorgar beca**\t\t\t\n\n");
	printf ("Digite su numero de ingreso: "); scanf("%d",&ingreso);
	printf ("Digite su numero de matricula: "); scanf("%d",&matricula);	
	printf ("-----------------------------------------------------------------------------------------------------\n");
}
void resultados (int i, int m, int pf, int mb){
	printf ("-----------------------------------------------------------------------------------------------------\n");
	printf("Alumno Numero; %d", ingreso);printf("\t\t\t\t\t\t\tMatricula Numero: %d\n\n", matricula);
	printf("Puntaje obtenido:  %d pts.\n",puntaje_final);
	becado(puntaje_final, monto_beca);
	puntaje_maximo(puntaje_final);	
	puntaje_minimo(puntaje_final);
	printf ("-----------------------------------------------------------------------------------------------------\n");
}
void reporte (int ptmax, int ptmin, int ctp, int ctb, int ctnb){
	printf ("-----------------------------------------------------------------------------------------------------\n");	
	printf ("\t\t ***REPORTE DE ENTREGA DE BECAS UNIVERSIDAD MASTER***\t\t\n\n");	
	printf("-Puntaje mas alto: %d\n",ptmax);
	printf("-Puntaje mas bajo: %d\n",ptmin);
	printf("-Alumnos postulados: %d\n",ctp);
	printf("-Alumnos becados: %d\n",ctb);
	printf("-Alumnos no becados: %d\n",ctnb);
	ff= (fondo_inicial-fondo);
	printf("-Monto total entregado en becas: %d\n",ff);
	printf("31/07/2020");printf("\t\t\t\t\t\t\tUniversisad Master\n");
	printf ("-----------------------------------------------------------------------------------------------------\n");
}
int main(){
	do {
		pedir_datos(ingreso, matricula);
		cont_mat++;
		system ("pause");
		system ("cls");	
		promedios(prom1, asist, prom2, prom3);
		monto_beca= saldo_beca(puntaje_final);
		resta_fondo(monto_beca);
		system ("pause");
		system ("cls");
		resultados(ingreso, matricula, puntaje_final, monto_beca);
		printf("Saldo fondo %i\n\n",fondo);
		system ("pause");
		system ("cls");		
	}
	while (fondo>=300000);{
		printf("Ya no quedan fondos para mas becas.\n");
		printf("A continuacion se entregara el reporte del programa de becas de la U M\n");
		
		system ("pause");
		system ("cls");
		reporte(ptmax, ptmin, cont_mat, cont_bec, cont_nobec);	
	}	
    return 0;
}
