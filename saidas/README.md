# Saídas
Xa fixemos parpadear o LED que o Arduino leva incorporado, pero se só puideramos facer iso o único que teriamos sería unha máquina moi cara para acender e apagar un LED. Imos saír do propio Arduino, e empregalo para controlar cousas que están fóra del e conectadas ás súas saídas.
Neste caso, imos controlar a intensidade dun LED vermello que está conectado ao pin 9 do Arduino. 
## Precisas:
*Un LED vermello estándar
*Unha resistencia de 220 ohmnios.
*Unha placa de prototipado ou "Breadboard".
*Cables de conexión para a breadboard.
## Conexións:
Conecta o circuito da seguinte maneira:
![Image] (http://fritzing.org/media/fritzing-repo/projects/s/saidas/images/saidass.png)

* Descarga o arquivo saidas.ino deste repositorio, e ábreo co Arduino IDE. 
* Cárgao no Arduino.
* Comproba o resultado.
* Le os comentarios do código e tenta facer os retos.
## Retos:
* Proba a cambiar o intervalo de aumento de brillo para que aumente máis rapidamente.
* Podes facer o reto anterior sen alterar o delay(30)?
* Tenta facer que o brillo cambie nas dúas direccións, aumentando e disminuíndo (tes unha pista máis abaixo).





##Pista:
Para facer que o led cambie de intensidade nos dous sentidos, haberá que dicirlle que, se brillo chega a 255, cambie o signo da variable "variacion". Tamén haberá que dicirlle que, cando brillo chegue a 0, ten que voltar a cambiar ese signo.




