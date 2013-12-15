/*
  AnalogRead
  Le unha entrada analoxica no pin A0, e imprime o resultado no monitor
  serie.
  Unir o pin central do potenciometro ao A0, un dos extremos a 5V
  e o outro a GND.
  
 */

// Isto xa sabes o que fai polo exemplo anterior:
void setup() {
  // isto hai que poñelo cando imos usar comunicacion serie, xa o
  //veremos con mais detalle:
  Serial.begin(9600);
}

// Xa sabes que o loop se executa unha e outra vez:
void loop() {
  // isto crea unha variable que se chama valorSensor que garda
  //o valor que lea en A0:
  int valorSensor = analogRead(A0);
  // imprime o que vale valorSensor
  Serial.println(valorSensor);
  delay(100);   // poñemoslle un delay para que dea menos lecturas
}
