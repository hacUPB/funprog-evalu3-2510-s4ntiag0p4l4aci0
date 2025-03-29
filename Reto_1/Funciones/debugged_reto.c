#include <stdio.h>
#include <math.h>

// Declaración de funciones
void cargando(void);
int menu(void);
int case1(void);
int case2(void);
int case3(void);
int case4(void);
void ley_ohm(void);
void fac_pot(void);
void calc_resist_cond(void);
void calc_resist_led(void);

int main() {
    int x = 0;

    while (x != 5) {
        x = menu();  

        switch (x) {
            case 1:
                cargando();
                printf("Calculadora Ley de Ohm\n");
                ley_ohm();
                break;

            case 2:
                cargando();
                printf("Calculadora de Factor de Potencia\n");
                fac_pot();
                break;
                
            case 3:
                cargando();
                printf("Calculadora de Resistencia de un Conductor\n");
                calc_resist_cond();
                break;

            case 4:
                cargando();
                printf("Valor de la Resistencia para un LED\n");
                calc_resist_led();
                break;

            case 5:
                cargando();
                printf("Muchas gracias\n");
                break;

            default:
                printf("Opción inválida.\n");
                break;
        }
    }
    return 0;
}

void cargando(void) {
    printf("Cargando...\n");
}

int menu(void) {
    int opcion;
    printf("Menú\n\
        \t1. Ley de Ohm.\n\
        \t2. Factor de Potencia.\n\
        \t3. Resistencia de un Conductor.\n\
        \t4. Valor de la Resistencia para un LED.\n\
        \t5. Salir.\n\n\
Ingrese el número de la opción: ");
    scanf("%d", &opcion);
    return opcion;
}

void calc_resist_cond(void) {
    float resistiv, coef_temp, longit, area, temp, resist;
    int opcion = case3();
    
    while (opcion != 7) {
        switch (opcion) {
            case 1: resistiv = 1.59e-8; coef_temp = 0.0061; break;
            case 2: resistiv = 1.724e-8; coef_temp = 0.0068; break;
            case 3: resistiv = 2.65e-8; coef_temp = 0.00429; break;
            case 4: resistiv = 9.71e-8; coef_temp = 0.00651; break;
            case 5: resistiv = 10.6e-8; coef_temp = 0.003927; break;
            case 6:
                printf("Ingrese la resistividad del material en ohm metro: ");
                scanf("%f", &resistiv);
                printf("Ingrese el coeficiente de temperatura del material: ");
                scanf("%f", &coef_temp);
                break;
            case 7:
                printf("Muchas gracias.\n");
                cargando();
                return;
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

void calc_resist_led(void) {
    float v_fuente, v_led, i_led, r_led, p_resist, p_total, i_total;
    int num_leds, opcion;
    
    opcion = case4();
    while (opcion != 3) {
        if (opcion == 3) {
            printf("Muchas gracias.\n");
            cargando();
            break;
        }
        printf("Ingrese la tensión de la fuente en voltios: ");
        scanf("%f", &v_fuente);
        printf("Ingrese el número de LEDs en el circuito: ");
        scanf("%d", &num_leds);
        printf("Ingrese la tensión nominal del LED en voltios: ");
        scanf("%f", &v_led);
        printf("Ingrese la corriente nominal del LED en amperios: ");
        scanf("%f", &i_led);
        
        if (opcion == 1) { // serie
            r_led = (v_fuente - (num_leds * v_led)) / i_led;
            i_total = i_led;
        } else if (opcion == 2) { // paralelo
            r_led = (v_fuente - v_led) / (num_leds * i_led);
            i_total = num_leds * i_led;
        } else {
            printf("Opción inválida.\n");
            continue;
        }
        
        p_resist = r_led * (i_total * i_total);
        p_total = v_fuente * i_total;
        
        printf("Valor de la resistencia: %f ohm\n", r_led);
        printf("Potencia de la resistencia: %f W\n", p_resist);
        printf("Potencia total del circuito: %f W\n", p_total);
        printf("Corriente total suministrada por la fuente: %f A\n", i_total);
    }
}
