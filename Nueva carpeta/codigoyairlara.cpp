#include <iostream>
using namespace std;

int main(){

const double PRECIO_CAFE_AREPA_HUEVOS = 6000;
const double PRECIO_CALDO_COSTILLA = 8000;
const double PRECIO_CAFE_LECHE_PASTEL = 6000;
const double PRECIO_HUEVOS_REVUERTOS = 7000;

const double PRECIO_SOPA_VERDURAS = 10000;
const double PRECIO_SANCOCHO = 10000;
const double PRECIO_MUTE = 10000;
const double PRECIO_CARNE_PLANCHA = 16000;
const double PRECIO_CARNE_GUISADA = 16000;
const double PRECIO_CARNE_BARRIL = 16000;
const double PRECIO_CERDO_BARRIL = 16000;
const double PRECIO_POLLO_ASADO = 39000;
const double PRECIO_TRUCHA = 18000;
const double PRECIO_MOJARRA = 18000;
const double PRECIO_ALBONDIGAS = 16000;
const double PRECIO_JUGO_MORA = 2000;
const double PRECIO_JUGO_MANGO = 2000;
const double PRECIO_JUGO_NARANJA = 2000;
const double PRECIO_JUGO_FRESA = 2000;
const double PRECIO_JUGO_GUANABANA = 2000;

const double PRECIO_HAMBURGUESA = 14000;
const double PRECIO_PERRO = 8000;
const double PRECIO_PICADA = 30000;
const double PRECIO_PAPAS_FREIDAS = 9000;
const double PRECIO_GASEOSA_PEPSI = 6000;
const double PRECIO_GASEOSA_COCA_COLA = 6000;
const double PRECIO_GASEOSA_SEVENUP = 6000;
const double PRECIO_JUGO_NATURAL = 6000;

const double PRECIO_POSTRE_LIMON = 8000;
const double PRECIO_POSTRE_FRESA = 8000;
const double PRECIO_POSTRE_MARACUYA = 8000;
const double PRECIO_POSTRE_CHOCOLATE = 10000;
const double PRECIO_POSTRE_MORA = 8000;
const double PRECIO_POSTRE_KIWI = 10000;
const double PRECIO_POSTRE_DURAZNO = 8000;
const double PRECIO_POSTRE_MANGO = 8000;
const double PRECIO_POSTRE_FRESAS_CON_CREMA = 12000;
const double PRECIO_YOGURT_MORA = 10000;
const double PRECIO_YOGURT_FRESA = 10000;
const double PRECIO_CUMIS = 10000;

const double PRECIO_AGUILITA = 4000;
const double PRECIO_POKER = 4000;
const double PRECIO_COSTENA = 4000;
const double PRECIO_DORADA = 6000;
const double PRECIO_CORONA = 9000;
const double PRECIO_CLUB_COLOMBIA = 4000;
const double PRECIO_BUDWEISER = 4000;
const double PRECIO_AGUARDIENTE_BLANCO = 40000;
const double PRECIO_AGUARDIENTE_AMARILLO = 40000;
const double PRECIO_VINO = 40000;

double total_pedido = 0;
double saldo_cliente = 0;
int opcion_comida, opcion_categoria, metodo_pago, edad_cliente;
string seguir_comprando = "si";
string continuar_programa = "si";
double ganancias_totales = 0;
int hora_actual;

while (continuar_programa=="si") {

        cout<<" BIENVENIDO AL CAFE-BAR ROMA."<< endl;
        cout<<" Es un gusto atenderte el dia de hoy."<< endl;
        cout <<"Antes de empezar por favor,¿Dime cual es tu edad?."<< endl;
        cin >> edad_cliente;

        if (edad_cliente < 18) {
            cout << "Lo siento, no puedes entrar al bar ya que eres menor de edad, pero puedes entar a los postres o a los demas menus" << endl;
        }

        cout<< "Para ofrecerte el menu adecuado, dime:"<< endl;
        cout << "La hora actual en formato 24 horas (0-23): ";
        cin >> hora_actual;

        if (hora_actual >= 6 && hora_actual <= 9) {
          cout << "MENU DE DESAYUNO:";
          cout << "1. Cafe y Arepa con Huevo - $" << PRECIO_CAFE_AREPA_HUEVOS << endl;
          cout << "2. Caldo de Costilla - $" << PRECIO_CALDO_COSTILLA << endl;
          cout << "3. Cafe con Leche y Pastel - $" << PRECIO_CAFE_LECHE_PASTEL << endl;
          cout << "4. Huevos Revueltos - $" << PRECIO_HUEVOS_REVUERTOS << endl;
          cout << "17. Ir al Bar." << endl;
          cout << "18. Ir a los postres." << endl;
        }else if (hora_actual >= 10 && hora_actual <= 15) {
          cout << "MENU DE ALMUERZO:";
          cout << "1. Sopa Verduras - $" << PRECIO_SOPA_VERDURAS << endl;
          cout << "2. Sancocho - $" << PRECIO_SANCOCHO << endl;
          cout << "3. Mute - $" << PRECIO_MUTE << endl;
          cout << "4. Carne a la Plancha - $" << PRECIO_CARNE_PLANCHA << endl;
          cout << "5. Carne Guisada - $" << PRECIO_CARNE_GUISADA << endl;
          cout << "6. Carne Barril - $" << PRECIO_CARNE_BARRIL << endl;
          cout << "7. Cerdo Barril - $" << PRECIO_CERDO_BARRIL << endl;
          cout << "8. Pollo Asado - $" << PRECIO_POLLO_ASADO << endl;
          cout << "9. Trucha - $" << PRECIO_TRUCHA << endl;
          cout << "10. Mojarra - $" << PRECIO_MOJARRA << endl;
          cout << "11. Albondigas - $" << PRECIO_ALBONDIGAS << endl;
          cout << "Y tenemos esta variedad de jugos para ti." << endl;
          cout << "12. Jugo de Mora - $"<< PRECIO_JUGO_MORA << endl;
          cout << "13. Jugo de Mango - $" << PRECIO_JUGO_MANGO << endl;
          cout << "14. Jugo de Naranja - $" << PRECIO_JUGO_NARANJA << endl;
          cout << "15. Jugo de Fresa - $" << PRECIO_JUGO_FRESA << endl;
          cout << "16. Jugo de Guanabana - $" << PRECIO_JUGO_GUANABANA << endl;
          cout << "17. Ir al Bar." << endl;
          cout << "18. Ir a los postres." << endl;
        }else if (hora_actual >= 16 && hora_actual <= 24) {
          cout << "MENU DE COMIDA:";
          cout << "1. Hamburguesa - $" << PRECIO_HAMBURGUESA << endl;
          cout << "2. Perro - $" << PRECIO_PERRO << endl;
          cout << "3. Picada - $" << PRECIO_PICADA << endl;
          cout << "4. Papas Fritas - $" << PRECIO_PAPAS_FREIDAS << endl;
          cout << "Y tenemos las siguientes bebidas:)" << endl;
          cout << "5. Gaseosa Pepsi - $" << PRECIO_GASEOSA_PEPSI << endl;
          cout << "6. Gaseosa Coca Cola - $" << PRECIO_GASEOSA_COCA_COLA << endl;
          cout << "7. Gaseosa SevenUp - $" << PRECIO_GASEOSA_SEVENUP << endl;
          cout << "8. Jugo Natural - $" << PRECIO_JUGO_NATURAL << endl;
          cout << "17. Ir al Bar." << endl;
          cout << "18. Ir a los postres." << endl;
        } else if (hora_actual >=1 && hora_actual <=5){
            cout << "Aun no abrimos, vuelve mas tarde." << endl;}

        while (seguir_comprando == "si") {
            cout << "Que quieres ordenar hoy? " << endl;
            cout << "Escoge una opcion del menu. "<< endl;
            cin >> opcion_comida;

         if (opcion_comida == 1) {
                if (hora_actual >= 6 && hora_actual < 9) {
                    total_pedido += PRECIO_CAFE_AREPA_HUEVOS;
                    cout << "Has elegido Cafe y Arepa con Huevo." << endl;
                } else if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_SOPA_VERDURAS;
                    cout << "Has elegido Sopa Verduras." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_HAMBURGUESA;
                    cout << "Has elegido Hamburguesa." << endl;
                }
            }else if (opcion_comida == 2) {
                if (hora_actual >= 6 && hora_actual < 9) {
                    total_pedido += PRECIO_CALDO_COSTILLA;
                    cout << "Has elegido Caldo de Costilla." << endl;
                } else if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_SANCOCHO;
                    cout << "Has elegido Sancocho." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_PERRO;
                    cout << "Has elegido Perro." << endl;
                }
            }else if (opcion_comida == 3) {
                if (hora_actual >= 6 && hora_actual < 9) {
                    total_pedido += PRECIO_CAFE_LECHE_PASTEL;
                    cout << "Has elegido Cafe con Leche y Pastel." << endl;
                } else if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_MUTE;
                    cout << "Has elegido Mute." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_PICADA;
                    cout << "Has elegido Picada." << endl;
                }
            }else if (opcion_comida == 4) {
                if (hora_actual >= 6 && hora_actual < 9) {
                    total_pedido += PRECIO_HUEVOS_REVUERTOS;
                    cout << "Has elegido Huevos Revueltos." << endl;
                } else if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_CARNE_PLANCHA;
                    cout << "Has elegido Carne a la Plancha." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_PAPAS_FREIDAS;
                    cout << "Has elegido Papas Fritas." << endl;
                }
            }else if (opcion_comida == 5) {
                     if (hora_actual >= 10 && hora_actual < 15) {
                     total_pedido += PRECIO_CARNE_GUISADA;
                     cout << "Has elegido Carne Guisada." << endl;
                     } else if (hora_actual >= 16 && hora_actual < 24) {
                     total_pedido += PRECIO_GASEOSA_PEPSI;
                     cout << "Has elegido Gaseosa Pepsi." << endl;
                     }
            } else if (opcion_comida == 6) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_CARNE_BARRIL;
                    cout << "Has elegido Carne Barril." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_GASEOSA_COCA_COLA;
                    cout << "Has elegido Gaseosa Coca Cola." << endl;
                }
            } else if (opcion_comida == 7) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_CERDO_BARRIL;
                    cout << "Has elegido Cerdo Barril." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_GASEOSA_SEVENUP;
                    cout << "Has elegido Gaseosa SevenUp." << endl;
                }
            }else if (opcion_comida == 8) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_POLLO_ASADO;
                    cout << "Has elegido Pollo Asado." << endl;
                } else if (hora_actual >= 16 && hora_actual < 24) {
                    total_pedido += PRECIO_JUGO_NATURAL;
                    cout << "Has elegido Jugo Natural." << endl;
                }
            }else if (opcion_comida == 9) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_TRUCHA;
                    cout << "Has elegido Trucha." << endl;
                } 
            }else if (opcion_comida == 10) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_MOJARRA;
                    cout << "Has elegido Mojarra." << endl;
                } 
            }else if (opcion_comida == 11) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_ALBONDIGAS;
                    cout << "Has elegido Albondigas." << endl;
                } 
            }else if (opcion_comida == 12) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_JUGO_MORA;
                    cout << "Has elegido Jugo de Mora." << endl;
                } 
            }else if (opcion_comida == 13) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_JUGO_MANGO;
                    cout << "Has elegido Jugo de Mango." << endl;
                } 
            }else if (opcion_comida == 14) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_JUGO_NARANJA;
                    cout << "Has elegido Jugo de Naranja." << endl;
                } 
            }else if (opcion_comida == 15) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_JUGO_FRESA;
                    cout << "Has elegido Jugo de Fresa." << endl;
                } 
            }else if (opcion_comida == 16) {
                 if (hora_actual >= 10 && hora_actual < 15) {
                    total_pedido += PRECIO_JUGO_GUANABANA;
                    cout << "Has elegido Jugo de Guanabana." << endl;
                } 
            }else if (opcion_comida == 17) {  
                if (edad_cliente >= 18) {  
                    cout << "Este es el menu de bar que tenemos para ti.;)" << endl;
                    cout << "MENU DE BAR:";
                    cout << "1. Aguilita - $" << PRECIO_AGUILITA << endl;
                    cout << "2. Poker - $" << PRECIO_POKER << endl;
                    cout << "3. Costeña - $" << PRECIO_COSTENA << endl;
                    cout << "4. Dorada - $" << PRECIO_DORADA << endl;
                    cout << "5. Corona - $" << PRECIO_CORONA << endl;
                    cout << "6. Club Colombia - $" << PRECIO_CLUB_COLOMBIA << endl;
                    cout << "7. Budweiser - $" << PRECIO_BUDWEISER << endl;
                    cout << "8. Aguardiente Blanco - $" << PRECIO_AGUARDIENTE_BLANCO << endl;
                    cout << "9. Aguardiente Amarillo - $" << PRECIO_AGUARDIENTE_AMARILLO << endl;
                    cout << "10. Vino - $" << PRECIO_VINO << endl;
                    cin >> opcion_categoria;

                    if (opcion_categoria == 1) {
                        total_pedido += PRECIO_AGUILITA;
                        cout << "Has elegido Aguilita." << endl;
                    } else if (opcion_categoria == 2) {
                        total_pedido += PRECIO_POKER;
                        cout << "Has elegido Poker." << endl;
                    }else if (opcion_categoria == 3) {
                        total_pedido += PRECIO_COSTENA;
                        cout << "Has elegido Costeña." << endl;
                    }else if (opcion_categoria == 4) {
                        total_pedido += PRECIO_DORADA;
                        cout << "Has elegido Dorada." << endl;
                    }else if (opcion_categoria == 5) {
                        total_pedido += PRECIO_CORONA;
                        cout << "Has elegido Corona." << endl;
                    }else if (opcion_categoria == 6) {
                        total_pedido += PRECIO_CLUB_COLOMBIA;
                        cout << "Has elegido Club Colombia." << endl;
                    }else if (opcion_categoria == 7) {
                        total_pedido += PRECIO_BUDWEISER;
                        cout << "Has elegido Budweiser." << endl;
                    }else if (opcion_categoria == 8) {
                        total_pedido += PRECIO_AGUARDIENTE_BLANCO;
                        cout << "Has elegido Aguardiente Blanco." << endl;
                    }else if (opcion_categoria == 9) {
                        total_pedido += PRECIO_AGUARDIENTE_AMARILLO;
                        cout << "Has elegido Aguardiente Amarillo." << endl;
                    }else if (opcion_categoria == 10) {
                        total_pedido += PRECIO_VINO;
                        cout << "Has elegido Vino." << endl;
                    }
                } else {
                    cout << "No puedes acceder al Bar, eres menor de 18 años." << endl;
                }
            }else if (opcion_comida == 18) {  // Postres
               cout << "Este e el menu de postres que tenemos para ti.:]"<< endl;
               cout << "MENU DE POSTRES:";
               cout << "1. Postre de Limon - $" << PRECIO_POSTRE_LIMON << endl;
               cout << "2. Postre de Fresa - $" << PRECIO_POSTRE_FRESA << endl;
               cout << "3. Postre de Maracuya - $" << PRECIO_POSTRE_MARACUYA << endl;
               cout << "4. Postre de Chocolate - $" << PRECIO_POSTRE_CHOCOLATE << endl;
               cout << "5. Postre de Mora - $" << PRECIO_POSTRE_MORA << endl;
               cout << "6. Postre de Kiwi - $" << PRECIO_POSTRE_KIWI << endl;
               cout << "7. Postre de Durazno - $" << PRECIO_POSTRE_DURAZNO << endl;
               cout << "8. Postre de Mango - $" << PRECIO_POSTRE_MANGO << endl;
               cout << "9. Fresas con Crema - $" << PRECIO_POSTRE_FRESAS_CON_CREMA << endl;
               cout << "10. Yogurt de Mora - $" << PRECIO_YOGURT_MORA << endl;
               cout << "11. Yogurt de Fresa - $" << PRECIO_YOGURT_FRESA << endl;
               cout << "12. Cumis - $" << PRECIO_CUMIS << endl;
               cin >> opcion_categoria;

                if (opcion_categoria == 1) {
                    total_pedido += PRECIO_POSTRE_LIMON;
                    cout << "Has elegido Postre de Limon." << endl;
                } else if (opcion_categoria == 2) {
                    total_pedido += PRECIO_POSTRE_FRESA;
                    cout << "Has elegido Postre de Fresa." << endl;
                }else if (opcion_categoria == 3) {
                    total_pedido += PRECIO_POSTRE_MARACUYA;
                    cout << "Has elegido Postre de Maracuya." << endl;
                }else if (opcion_categoria == 4) {
                    total_pedido += PRECIO_POSTRE_CHOCOLATE;
                    cout << "Has elegido Postre de Chocolate." << endl;
                }else if (opcion_categoria == 5) {
                    total_pedido += PRECIO_POSTRE_MORA;
                    cout << "Has elegido Postre de Mora." << endl;
                }else if (opcion_categoria == 6) {
                    total_pedido += PRECIO_POSTRE_KIWI;
                    cout << "Has elegido Postre de Kiwi." << endl;
                }else if (opcion_categoria == 7) {
                    total_pedido += PRECIO_POSTRE_DURAZNO;
                    cout << "Has elegido Postre de Durazno." << endl;
                }else if (opcion_categoria == 8) {
                    total_pedido += PRECIO_POSTRE_MANGO;
                    cout << "Has elegido Postre de Mango." << endl;
                }else if (opcion_categoria == 9) {
                    total_pedido += PRECIO_POSTRE_FRESAS_CON_CREMA;
                    cout << "Has elegido Fresas con Crema." << endl;
                }else if (opcion_categoria == 10) {
                    total_pedido += PRECIO_YOGURT_MORA;
                    cout << "Has elegido Yogurt de Mora." << endl;
                }else if (opcion_categoria == 11) {
                    total_pedido += PRECIO_YOGURT_FRESA;
                    cout << "Has elegido Yogurt de Fresa." << endl;
                }else if (opcion_categoria == 12) {
                    total_pedido +=  PRECIO_CUMIS;
                    cout << "Has elegido Cumis." << endl;
                }
            }

            cout << "¿Quieres seguir comprando? Recuerda que hay variedad de productos. (si/no): "<< endl ;
            cin >> seguir_comprando;

        }

         // Mostrar total del pedido
        cout << "Veo que ya no vas a ordenar mas."<< endl;
        cout << "Mira el total de su pedido es: " << total_pedido << "$" << endl;

        // Leer saldo del cliente
        cout << "Vamos a ver si te alcanza." << endl ;
        cout << "Dime,¿Cuál es su saldo disponible? " << endl;
        cin >> saldo_cliente;

        // Verificar si tiene suficiente dinero
        if (saldo_cliente >= total_pedido) {
            cout << "Veo que si puedes pagar tu pedido." << endl;

            // Elegir método de pago
            cout << "¿Cómo quieres pagar?" << endl;
            cout << "1. Al contado" << endl;
            cout << "2. Con tarjeta" << endl;
            cin >> metodo_pago;

            if (metodo_pago == 1) {  // Pago al contado
                saldo_cliente -= total_pedido;
                cout << "OK,Has pagado al contado. Tu saldo restante es: " << saldo_cliente << "$" << endl;
            } else if (metodo_pago == 2) {  // Pago con tarjeta
                saldo_cliente -= total_pedido;
                cout << "OK,Has pagado con tarjeta. Tu saldo restante es: " << saldo_cliente << "$" << endl;
            }

            // Añadir a las ganancias del café
            ganancias_totales += total_pedido;
        } else {
            cout << "Lo siento, no tienes suficiente saldo para realizar el pedido, la proxima recuerda traer dinero :)" << endl;
        }

        cout << "Gracias por tu visita, esperamos que allas tenido una experiencia acogedora,!VUELVE PRONTO TE ESPERAMOS" << endl;
        // Preguntar si desea continuar con otro usuario
        cout << "Jefe¿Deseas que otro cliente haga su pedido? (si/no): " << endl;
        cout << "Jefe recuerde que si hay mas clientes abra mayor ganancia." << endl;
        cin >> continuar_programa;

        // Resetear el total del pedido para el siguiente cliente
        total_pedido = 0;
        seguir_comprando = "si";  // Resetear para el siguiente cliente
}
 // Mostrar las ganancias totales
    cout << "Mire Jefe las ganancias totales de hoy son: " << ganancias_totales << "$" << endl;
    cout << "Nos vemos mañana jefe, Adios." << endl;

    return 0;
}
