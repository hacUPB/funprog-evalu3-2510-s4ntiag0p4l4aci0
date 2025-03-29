
#include <stdio.h>
#include <math.h>

void cargando(void);
int menu(void);
int case1(void);
int case2(void);
int case4(void);
void ley_ohm(void);
void fac_pot(void);
void calc_resist_cond(void);
void calc_resist_led(void);

int main(){

int x;

x = 0;


while(x != 5){

    x = menu();  


switch(x){

    case 1: cargando();
        printf("Calculadora Ley de Ohm");
        ley_ohm();
            break;

    case 2: cargando();
        printf("Calculadora de Factor de Potencia");
        fac_pot();
            break;
                
    case 3: cargando();
        printf("Calculadora de Resistencia de un Conductor");
        calc_resist_cond();
            break;

    case 4: cargando();
        printf("Valor de la Resistencia para un LED");
        calc_resist_led();
            break;

    case 5: cargando();
            printf("muchas gracias");
            break;

    default: printf("Opción inválida.");
            break;

    return 0;

}


}
printf("muchas gracias");

return 0;

}

void cargando(void){
    int i = 0;
    for (i = 0; i <= 100000; i++){
        printf("\rcargando %d %c", i/1000, 37);
    }
    printf("\n");
}

int menu(void){
int opcion;
printf("Men%c\n \
    \t1. Ley de Ohm.\n\
    \t2. Factor de Potencia.\n\
    \t3. Resistencia de un Conductor.\n\
    \t4. Valor de la Resistencia para un LED.\n\
    \t5. Salir.\n\n\
Ingrese el n%cmero de la opci%cn\n", 163, 163, 162);

scanf("%d", &opcion);

return opcion;

}

//CASE 1

//MENU CASE 1
int case1(void) {
	int opcion;
	printf("Valor a calcular: \n \
            \t1. Tensi%cn.\n\
            \t2. Corriente.\n\
            \t3. Resistencia.\n\n\
            \t4. Salir.\n\n\
    Ingrese el n%cmero de la opci%cn\n", 162, 163, 162);
	scanf("%d", &opcion);
	return opcion;
}

//CASE 1 DESARROLLADO


void ley_ohm(void) {
	float v, i, r;
	int opcion = case1();

	while (opcion != 4) {

		switch(opcion) {

		case 1:
			printf("Calcular tensi%cn", 162);
			printf("Ingrese el valor de la corriente en amperios");
			scanf("%f", &i);
			printf("Ingrese el valor de la resistencia en ohmios");
			scanf("%f", &r);
			v = i*r;
			cargando();
			printf("La tensi%cn / voltaje es %f V / voltios", 162, v);


			break;


		case 2:
			printf("Calcular corriente");
			printf("Ingrese el valor del voltaje en voltios");
			scanf("%f", &v);
			printf("Ingrese el valor de la resistencia en ohmios");
			scanf("%f", &r);
			i = v/r;
			cargando();
			printf("La corriente es  %f A / amperios", i);
			    break;


		case 3:
			printf("Calcular resistencia");
			printf("Ingrese el valor de la corriente en amperios");
			scanf("%f", &i);
			printf("Ingrese el valor del voltaje en voltios");
			scanf("%f", &v);
			r = v/i;
			cargando();
			printf("La tensi%cn/ voltaje es %f V / voltios",162, v);
			    break;

		case 4:
			printf("Muchas gracias");
			cargando();
			break;

		}

	}
}

//CASE 2

//MENU CASE 2
int case2(void) {
	int opcion;
	printf("Valor a calcular: \n \
            \t1. Potencia Activa.\n\
            \t2. Potencia Aprente.\n\
            \t3. Factor de Potencia.\n\
            \t4. Salir.\n\
    Ingrese el n%cmero de la opci%cn\n", 162, 163, 162);
	scanf("%d", &opcion);
	return opcion;
}

//CASE 2 DESARROLLADO


void fac_pot(void) {
	float s, fp, s, q, p, s2, p2, q2;
	int opcion = case2();

	while (opcion != 4) {

		switch(opcion) {

		case 1:
			printf("Calcular Potencia Activa");
			printf("Ingrese el potencia aparente en VA");
			scanf("%f", &s);
			printf("Ingrese el Factor potencia cos(phi)");
			scanf("%f", &fp);
			p = s *fp;
			cargando();
			printf("La potencia %f Vw / vatios", p);


			break;


		case 2:
			printf("Potencia Aprente");
			printf("Ingrese el Factor Potencia cos(phi)");
			scanf("%f", &fp);
			printf("Ingrese la potencia en W");
			scanf("%f", &p);
			s = p/fp;
			cargando();
			printf("La potencia aparente es  %f VA /voltiamperios", s);
			break;


		case 3:
			printf("Calcular Factor de Potencia");
			printf("Ingrese la potencia aparente en VA");
			scanf("%f", &s);
			printf("Ingrese la potencia activa en W");
			scanf("%f", &p);
			fp = p/s;
			cargando();
			printf("El Factor de Potencia es %f ", fp);
			break;

		case 4:
			printf("Muchas gracias");
			cargando();
			break;

		}

        if(opcion == 4)
        {break;}

        else{

            prinft("El cos(phi) es %p", p);
            s2= s * s;
            p2 = p *p;
            q2 = s2 -p2;
            q = sqrt(q2);
            printf("La Potencia Reactiva es %f VAR", q);

	}
}
}
            

//CASE 3

    //MENU CASE 3

int case3(void) {
    int opcion;
    printf("Opciones:\n\
    \t1. Plata\n\
    \t2. Cobre\n\
    \t3. Aluminio\n\
    \t4. Hierro\n\
    \t5. Platino\n\
    \t6. Otro\n\
    \t7. Salir\n\
Ingrese el n%cmero de la opci%cn\n", 163, 163, 162 );
    scanf("%d", &opcion);
    return opcion;
}

    //CASE 4 DESARROLLADO
void calc_resist_cond(void) {
    float resistiv, coef_temp, longit, area, temp, resist;
    int opcion = case3();
    
    while (opcion != 7) {
        switch (opcion) {
            case 1:
                cargando();
                resistiv = 1.59e-8;
                coef_temp = 0.0061;
                break;
            case 2:
                cargando();
                resistiv = 1.724e-8;
                coef_temp = 0.0068;
                break;
            case 3:
                cargando();
                resistiv = 2.65e-8;
                coef_temp = 0.00429;
                break;
            case 4:
                cargando();
                resistiv = 9.71e-8;
                coef_temp = 0.00651;
                break;
            case 5:
                cargando();
                resistiv = 10.6e-8;
                coef_temp = 0.003927;
                break;
            case 6:
                printf("Ingrese la resistividad del material en ohm metro: ");
                scanf("%f", &resistiv);
                printf("Ingrese el coeficiente de temperatura del material: ");
                scanf("%f", &coef_temp);
                cargando();
                break;
            case 7:
                printf("Muchas gracias.\n");
                cargando();
                break;
            default:
                printf("Opción inválida.\n");
                continue;
        }
        
        printf("Ingrese la longitud del conductor en metros: ");
        scanf("%f", &longit);
        printf("Ingrese el área de la sección transversal del conductor en metros cuadrados: ");
        scanf("%f", &area);
        printf("Ingrese la temperatura del conductor en grados Celsius: ");
        scanf("%f", &temp);
        
        resist = (resistiv * longit / area) * (1 + coef_temp * (temp - 20));
        
        printf("La resistencia del conductor es: %f ohm\n", resist);
    }
    

}




//CASE 4

    //MENU CASE 4
int case4(void) {
    int opcion;
    printf("Men%c\n \
        \t1. Serie.\n\
        \t2. Paralelo.\n\
        \t3. Salir.\n\n\
Ingrese el n%cmero de la opci%cn\n", 163, 163, 162);
    scanf("%d", &opcion);
    return opcion;
}

        //CASE 4 DESARROLLADO


void calc_resist_led(void) {
    float v_fuente, v_led, i_led, r_led, p_resist, p_total, i_total;
    int num_leds, opcion;
    
    opcion = case4();
    while (opcion != 3) {

        if(opcion == 3){
            printf("Muchas gracias.\n");
            cargando();
            break;

        if (opcion != 1 && opcion != 2) {
            printf("Opción inválida.\n");
            continue;


        }
        
        printf("Ingrese la tensión de la fuente en voltios: ");
        scanf("%f", &v_fuente);
        printf("Ingrese el número de ledes en el circuito: ");
        scanf("%d", &num_leds);
        printf("Ingrese la tensión nominal del LED en voltios: ");
        scanf("%f", &v_led);
        printf("Ingrese la corriente nominal del LED en amperios: ");
        scanf("%f", &i_led);
        
        switch (opcion) {
            case 1: // serie
                r_led = (v_fuente - (num_leds * v_led)) / i_led;
                i_total = i_led;
                break;
            case 2: // paralelo
                r_led = (v_fuente - v_led) / (num_leds * i_led);
                i_total = num_leds * i_led;
                break;
        }
        
        p_resist = r_led * (i_total * i_total);
        p_total = v_fuente * i_total;
        
        printf("Valor de la resistencia: %f ohm\n", r_led);
        printf("Potencia de la resistencia: %f W\n", p_resist);
        printf("Potencia total del circuito: %f W\n", p_total);
        printf("Corriente total suministrada por la fuente: %f A\n", i_total);
    }
    
    
}
}