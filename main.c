#include <stdio.h>
#include <math.h>

int main()
{
    double capital, tasaInteres, tiempo, monto, interes, capitalizaciones, valorPresente, terminoRenta, periodosNoPago, periodosAnticipados;                                                                               // Definir variables
    char entrada[256];                                                                                                                                                                                                     // String para almacenar la entrada
    char modo;                                                                                                                                                                                                             // Caracter para el modo de cálculo
    printf("Que tipo de interes quieres calcular? (s)imple, (c)ompuesto, (t)asa nominal, (a)mortizacion, amortización (p)agos vencidos, a(m)ortización pagos anticipados, amortización (d)iferida de pagos anticipados "); // Preguntar lo que se quiere calcular
    scanf("%s", entrada);                                                                                                                                                                                                  // Almacenar input en string de entrada
    modo = entrada[0];                                                                                                                                                                                                     // El modo a calcular es el primer carácter de la entrada                                                                                      // El modo a calcular es el primer carácter de la entrada

    switch (modo) // Casos de modos de cálculo
    {
    case 's': // Interés simple
        printf("Que quieres calcular? (c)apital, (m)onto, t(a)sa de interes, (t)iempo ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'c': // Capital
            printf("Ingresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            capital = monto / (tasaInteres / 100 * tiempo);
            printf("\nEl capital es %0.lf", capital);
            break; // Terminar caso
        case 'm':  // Monto
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            monto = capital * (1 + tasaInteres / 100 * tiempo);
            interes = monto - capital;
            printf("\nEl monto es %.0lf y el interes es %.0lf", monto, interes);
            break; // Terminar caso
        case 'a':  // Tasa de interés
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            interes = monto - capital;
            tasaInteres = interes / (capital * tiempo) * 100;

            printf("\nLa tasa de interes es %.4lf%%", tasaInteres);
            break; // Terminar caso
        case 't':  // Tiempo
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            interes = monto - capital;
            tiempo = interes / (capital * tasaInteres / 100);

            printf("\nEl tiempo es %.4lf", tiempo);
            break; // Terminar caso
        default:
            break; // Terminar caso
        }
        break; // Terminar caso
    case 'c':  // Interés compuesto
        printf("Que quieres calcular? (c)apital, (m)onto, t(a)sa de interes, (t)iempo ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'c': // Capital
            printf("Ingresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            capital = monto / powl((1 + tasaInteres / 100), tiempo);
            printf("\nEl capital es %0.lf", capital);
            break; // Terminar caso
        case 'm':  // Monto
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            monto = capital * powl((1 + tasaInteres / 100), tiempo);
            interes = monto - capital;
            printf("\nEl monto es %.0lf y el interes es %.0lf", monto, interes);
            break; // Terminar caso
        case 'a':  // Tasa de interés
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            interes = monto - capital;
            tasaInteres = (powl(monto / capital, 1.0 / tiempo) - 1) * 100;

            printf("\nLa tasa de interes es %.4lf%%", tasaInteres);
            break; // Terminar caso
        case 't':  // Tiempo
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            interes = monto - capital;
            tiempo = (log10l(monto) - log10l(capital)) / log10l(1 + tasaInteres / 100);

            printf("\nEl tiempo es %.4lf", tiempo);
            break; // Terminar caso
        }
        break; // Terminar caso
    case 't':  // Tasa nominal
        printf("Que quieres calcular? (c)apital, (m)onto, t(a)sa de interes, (t)iempo ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'c': // Capital
            printf("Ingresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar numero de capitalizaciones: ");
            while (scanf("%lf%c", &capitalizaciones, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar numero de capitalizaciones: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            capital = monto / powl((1 + tasaInteres / 100 / capitalizaciones), tiempo * capitalizaciones);
            printf("\nEl capital es %0.lf", capital);
            break; // Terminar caso
        case 'm':  // Monto
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar numero de capitalizaciones: ");
            while (scanf("%lf%c", &capitalizaciones, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar numero de capitalizaciones: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            monto = capital * powl((1 + tasaInteres / 100 / capitalizaciones), (tiempo * capitalizaciones));
            interes = monto - capital;
            printf("\nEl monto es %.0lf y el interes es %.0lf", monto, interes);
            break; // Terminar caso
        case 'a':  // Tasa de interés
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar numero de capitalizaciones: ");
            while (scanf("%lf%c", &capitalizaciones, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar numero de capitalizaciones: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            interes = monto - capital;
            tasaInteres = (powl(monto / capital, 1.0 / tiempo * capitalizaciones) - 1) * 100 * capitalizaciones;
            printf("\nLa tasa de interes es %.4lf%%", tasaInteres);
            break; // Terminar caso
        case 't':  // Tiempo
            printf("Ingresar capital: ");
            while (scanf("%lf%c", &capital, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar capital: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar monto: ");
            while (scanf("%lf%c", &monto, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar monto: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar numero de capitalizaciones: ");
            while (scanf("%lf%c", &capitalizaciones, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar numero de capitalizaciones: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            interes = monto - capital;
            tiempo = (log10l(monto) - log10l(capital)) / log10l(1 + tasaInteres / 100 * capitalizaciones) * capitalizaciones;
            printf("\nEl tiempo es %.4lf", tiempo);
            break; // Terminar caso
        }
        break; // Terminar caso
    case 'a':  // Amortización
        printf("Que quieres calcular? (r)enta, valor (p)resente ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'r': // Renta
            printf("Ingresar valor presente: ");
            while (scanf("%lf%c", &valorPresente, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar valor presente: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            terminoRenta = (valorPresente * tasaInteres / 100 * powl((1 + tasaInteres / 100), tiempo)) / (powl((1 + tasaInteres / 100), tiempo) - 1);
            printf("\nEl termino de renta es %.4lf", terminoRenta);
            break; // Terminar caso
        case 'p':  // Valor presente
            printf("Ingresar el termino de renta: ");
            while (scanf("%lf%c", &terminoRenta, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            valorPresente = terminoRenta * ((1 - powl(1 + tasaInteres / 100, -tiempo)) / (tasaInteres / 100));

            printf("\nEl valor presente es %.4lf", valorPresente);
            break; // Terminar caso
        }
        break; // Terminar caso
    case 'p':  // Amortización de pagos vencidos
        printf("Que quieres calcular? (r)enta, valor (p)resente ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'p':
            printf("Ingresar el termino de renta: ");
            while (scanf("%lf%c", &terminoRenta, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar periodos de no pago: ");
            while (scanf("%lf%c", &periodosNoPago, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            valorPresente = terminoRenta * ((powl(1 + tasaInteres / 100, tiempo - periodosNoPago) - 1) / (tasaInteres / 100 * powl(1 + tasaInteres / 100, tiempo)));

            printf("\nEl valor presente es %.4lf", valorPresente);
            break; // Terminar caso
        case 'r':
            printf("Ingresar el valor presente: ");
            while (scanf("%lf%c", &valorPresente, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar periodos de no pago: ");
            while (scanf("%lf%c", &periodosNoPago, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            terminoRenta = (valorPresente * tasaInteres / 100 * powl(1 + tasaInteres / 100, tiempo)) / (powl(1 + tasaInteres / 100, tiempo - periodosNoPago) - 1);

            printf("\nEl término de renta es %.4lf", terminoRenta);
            break; // Terminar caso
        }
        break;
    case 'm': // Amortización de pagos anticipados
        printf("Que quieres calcular? (r)enta, valor (p)resente ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'p':
            printf("Ingresar el termino de renta: ");
            while (scanf("%lf%c", &terminoRenta, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            valorPresente = terminoRenta * (powl(1 + tasaInteres / 100, tiempo) - 1) / (tasaInteres / 100 * powl(1 + tasaInteres / 100, tiempo - 1));

            printf("\nEl valor presente es %.4lf", valorPresente);
            break; // Terminar caso
        case 'r':  // Término de Renta
            printf("Ingresar el valor presente: ");
            while (scanf("%lf%c", &valorPresente, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            terminoRenta = valorPresente * tasaInteres / 100 * (powl(1 + tasaInteres / 100, tiempo - 1)) / (powl(1 + tasaInteres / 100, tiempo) - 1);

            printf("\nEl término de renta es %.4lf", terminoRenta);
            break; // Terminar caso
        }
        break;
    case 'd': // Amortización diferida de pagos anticipados
        printf("Que quieres calcular? (r)enta, valor (p)resente ");
        scanf("%s", entrada); // Almacenar input en string de entrada
        modo = entrada[0];    // El modo a calcular es el primer carácter de la entrada
        switch (modo)
        {
        case 'p': // Valor Presente
            printf("Ingresar el termino de renta: ");
            while (scanf("%lf%c", &terminoRenta, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar períodos anticipados: ");
            while (scanf("%lf%c", &periodosAnticipados, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar períodos anticipados: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            valorPresente = terminoRenta * (powl(1 + tasaInteres / 100, tiempo - periodosAnticipados) - 1) / (tasaInteres / 100 * powl(1 + tasaInteres / 100, tiempo - 1));

            printf("\nEl valor presente es %.4lf", valorPresente);
            break; // Terminar caso
        case 'r':  // Término de Renta
            printf("Ingresar el valor presente: ");
            while (scanf("%lf%c", &valorPresente, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar el termino de renta: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tasa de interes: ");
            while (scanf("%lf%c", &tasaInteres, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tasa de interes: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar tiempo: ");
            while (scanf("%lf%c", &tiempo, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar tiempo: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }
            printf("\nIngresar períodos anticipados: ");
            while (scanf("%lf%c", &periodosAnticipados, &modo) != 2 || modo != '\n') // Si el parámetro no es válido
            {
                printf("Ingresar períodos anticipados: ");
                while (getchar() != '\n')
                    ; // Mientras no se presione enter
            }

            terminoRenta = valorPresente * tasaInteres / 100 * (powl(1 + tasaInteres / 100, tiempo - 1)) / (powl(1 + tasaInteres / 100, tiempo - periodosAnticipados) - 1);

            printf("\nEl término de renta es %.4lf", terminoRenta);
            break; // Terminar caso
        }

        getchar(); // No terminar ejecución inmediatamente
        return 0;  // Terminar ejecución sin errores
    }
}