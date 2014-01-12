#Lendo Temperaturas
Neste titorial imos ver un xeito de ler temperaturas en Arduino. Para iso imos empregar simplemente un sensor de temperatura moi barato e moi común, o LM335. Nóns comprámolo en [Tayda] (http://www.taydaelectronics.com/lm335-precision-temperature-sensor-40c-to-100c-ic.html), unha tenda moi barata que está en Thailandia.
Este titorial está basado en [este outro](http://spacetinkerer.blogspot.com.es/2011/03/build-thermometer-using-lm335-sensor.html).

##Precisamos:
* Un LM335.
* Unha resistencia de 2,2K (vermello|vermello|vermello).
* Cable.
* O Arduino.
* Breadboard

##Funcionamento:
O LM335 ten tres patillas, a da esquerda (mirando según ten a cara plana con letras) é un pin de axuste que non imos empregar neste titorial, a do medio é a alimentación positiva e saída analóxica (V+/Vout) e a da dereita é a terra (GND).
![pinout LM335](http://www.learningaboutelectronics.com/images/LM335-pinout.png)

O que fai o sensor é darnos unha voltaxe de saída que varía en función da temperatura á que esteamos, esa voltaxe (en milivoltios) partida por 10 será a temperatura en graos Kelvin. Se queremos atopar os graos centígrados, coma ti xa sabes, haberá que restarlle a ese valor 273, iso o faremos no sketch de Arduino.

##Montaxe:
Este é o esquema de conexión:
![Conexión con Arduino](https://lh6.googleusercontent.com/-RsfzgB4YwGk/TXoz9VYShII/AAAAAAAAAFk/KQ5fouPUASA/s1600/Untitled%2BSketch_bb2.png)
Unha vez montado e subido o sketch, poderás ler a temperatura polo monitor serie (a lupiña de arriba á dereita no IDE).

##Reto:
Serías capaz de introducir no programa o código preciso para que expresara tamén a temperatura en graos [Fahrenheit](http://gl.wikipedia.org/wiki/Grao_Fahrenheit)?

