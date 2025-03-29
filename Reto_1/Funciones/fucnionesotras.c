
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
    
            //CASE 4 DESARROLLADO
    
    
            void calc_resist_cond(void) {
                float v, i, r;
                int opcion = case1();
                
                while (opcion != 4) {

                    switch(opcion){

                        case 1: printf("Calcular tensión");
                            printf("Ingrese el valor de la corriente en amperios");
                            scanf("%f", &i);
                            printf("Ingrese el valor de la resistencia en ohmios");
                            scanf("%f", &r);
                            v = i*r;
                            cargando();
                            printf("La tensión / voltaje es %f V / voltios", v);


                             break;
                                

                        case 2: printf("Calcular corriente");
                            printf("Ingrese el valor del voltaje en voltios");
                            scanf("%f", &v);
                            printf("Ingrese el valor de la resistencia en ohmios");
                            scanf("%f", &r);
                            i = v/r;
                            cargando();
                            printf("La corriente es  %f A / amperios", i);
                                break;
                        

                        case 3: printf("Calcular resistencia");
                            printf("Ingrese el valor de la corriente en amperios");
                            scanf("%f", &i);
                            printf("Ingrese el valor del voltaje en voltios");
                            scanf("%f", &v);
                            r = v/i;
                            cargando();
                            printf("La tensión/ voltaje es %f V / voltios", v);
                            break;
                        
                            case 4:
                                printf("Muchas gracias");
                                cargando();
                            break;
                              
                    }

                }
            }