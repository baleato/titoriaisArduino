/*
  Blink
  Acende e apaga un LED alternativamente.
 */
 
// A parte que vai entre as chaves (setup) executase unha soa vez para determinar
//como vai funcionar todo
void setup() {                
  //dicimoslle que o pin 13 vai estar en modo saida (OUTPUT)
  pinMode(13, OUTPUT);     
}

// Esta parte (loop) executase continuamente de principio a fin
void loop() {
  //Escrebe (Write) o pin 13 alto (HIGH). 
  //HIGH normalmente equivale a aceso
  digitalWrite(13, HIGH);  
  //Espero (delay) un segundo (1000 milisegundos)
  delay(1000);               // wait for a second
  //Escrebe o pin 13 baixo (LOW), isto apaga o led. 
  digitalWrite(13, LOW);    
 //Espero (delay) un segundo (1000 milisegundos)
  delay(1000);   

  //agora o programa voltara ao principio do loop e se executara
  //outra vez  
}
