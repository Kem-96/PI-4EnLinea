# Proyecto Integrador Ensamblador: "4 en Linea"
INTEGRANTES:<br/>
********************
* Rodrigo Mendoza (C04813): rodrigo.mendozaquesada@ucr.ac.cr<br/>
* Kembly Paniagua (B95822): kembly.paniagua@ucr.ac.cr<br/>
* Nathan Murillo (B95506): joseph.murillovargas@ucr.ac.cr<br/>
* Isaac Vargas (C08195): isaac.vargasjimenez20@ucr.ac.cr<br/>
*********************
GENERALIDADES:<br/>
  Este es un proyecto que que consiste en implementar un juego de "4 en Linea/Conecta 4", en 3 fases principales:<br/>
  
* Documento Inicial/Presentacion:<br/>
  Esta fase consiste en presentar la idea fundamental detras del proyecto: diseño básico, explicacion del juego, funcionamiento base, lenguage ensamblador a utilizar para la tercera fase y potenciales candidatos para la interfaz grafica. También se hizo una presentación para dar a entender la idea principal.  <br/>

* Implementacion en Logisim:<br/>
  En esta etapa del trabajo se implementa una versión funcional con la aplicación Logisim, basándose en el diseño propuesto en la primera etapa. La idea es que se pueda jugar y completar una partida, determinando los 2 estados de juego: Ganador (Jugador 1 o 2) o Empate (La matriz se llena sin haber determinado un ganador).

* Implementacion en Lenguaje Ensamblador:<br/>
El funcionamiento de logisim se traslada en lenguaje ensamblador, realizando las modificaciones y adaptaciones necesarias para que funcione correctamente. <br/>

* Aspectos Adicionales:<br/>
La versión implementada en lenguaje ensamblador deberá recibir mejoras a lo largo (e incluso después) de su implementación básica, estas también serán implementadas.
Finalmente, se debe implementar una especie de interfaz gráfica para mostrar la información de forma más clara y efectiva. Esto aún está en discusión. <br/>

IMAGENES ILUSTRATIVAS:<br/>

![Conecta 4](https://user-images.githubusercontent.com/102835455/188782153-d3daecbf-741f-4154-8891-93b6e317a2f4.PNG)


![diseno](https://user-images.githubusercontent.com/102835455/188782334-08c5e605-a5ea-42d2-9c40-8b864d7244d8.png)

AVANCES:<br/>

* Implementación en logisim:<br/>
  * Primera semana:<br/>
  La primera semana se busco implementar la interfaz del tablero, para el cuál se utilizó una matriz de leds interconectadas a una caja que contiene el ciruito encargado de verificar que la ficha sea colocada en el lugar correto, y a la vez conectada a otro circuito que verifica el turno de cada jugador <br/>
    * Problemas encontrados:<br/>
      Se puntuaron todos los puntos faltantes, que son necesarios para el correcto funcionamiento del juego. <br/>
  
  * Segunda semana: <br/>
    Se implemento el circuito de verificación que coloca una ficha en el tablero, solo si esta disponible el espacio y cambia el color del led dependiendo del jugador que este en turno en ese momento <br/>
  
    * Problemas encontrados:<br/>
      * La sincronía del tiempo del reloj con el tiempo de respuesta del mismo:<br/>
se pretende que se coloque solo una ficha por presión, sin embargo, las iteraciones del reloj son prácticamente constante, el toque 
de "entrada" debe ser de unos pocos nanosegundos para evitar colocaciones indeseadas:
si el botón se deja presionado se coloca una ficha en cada ciclo de reloj. Deberia colocarse 1 ficha por ocasión que se presione.<br/>

      * Se debe comenzar en 1 y pasar a 2 cuando se presiona un botón. (Alternar jugadores).<br/>

      * Se cambia de ficha por columnas, pero debe ser un cambio constante para todo el tablero. <br/>


    * Soluciones:<br/>
      * Se soluciono con un contador de un bit: se mantiene en falling edge (se activa solo cuando esta en falling edge), se activa apenas se apague (se almacena cuando se suelta, cuando el reloj se enciende, el 1 pasa y se activa el mecanismo de colocar ficha). De esa forma previene que se coloque mas de una ficha por presión (incluso cuando se deja presionado).<br/>

      * 2 contadores, coloca uno de ellos en 1 y el otro en 2. <br/> 


DOCUMENTO ESCRITO:
https://docs.google.com/document/d/1BfGdqtu4Y8jVS69qu4cW3j3yB31Auw5hteyRXAAXGY0/edit?usp=sharing<br/>


 

 

