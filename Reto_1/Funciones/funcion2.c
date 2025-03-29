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


void calc_resist_cond(void) {
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