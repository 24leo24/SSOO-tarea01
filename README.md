# LEONARDO ARANCIBIA
# leonardo.arancibia@alumnos.uv.cl

Como se dice en una inicio en el documento entregado, se nos pide trabajar con señales y procesos de Linux. Basado en lo anterior es que se utilizan ciertas
variables y funciones, para dar una solucion al problema, que a continuacion seran explicadas. Como se nos pide entregar la fecha y hora actuales del sistema,
pero atravez de señales, es que en un inico se incluye time.h y signal.h, en donde entragan todas las funciones a utilizar, por ejemplo,dentro del void sings,
esta time_t, que es un tipo de dato que definira a una variable ṕara que recepcione valores devueltos por time(), en este caso fue la varible de nombre tiempo1, que se iguala a time() 
recibiendo los valores de fecha y hora actuales del sistema, que es uno de los requisitos que se nos solicitaba. 

Pero lo anterior se debe poder ejecutar al recibir una señal con el nombre SIGUSR1 y el pid desde otra terminal, por lo que se generan 2 ciclos whiles anidados, 
el primer while se genera un printf que tendra un breve mensaje y retornara el pid, luego en el siguinte while se genera otra printf que tambien contendra un breve 
mensaje, ademas de una señal de tipo signal,en donde su funcion es recibir la señal SIGUSR1, haciendo que se realice todo el contenido dentro del void sings,
mostrando la fecha y hora actuales del sistema que es lo solicitado en el enunciado. 
