/*
 Esvaecer
 Este exemplo nos ensina a controlar o esvaecemento dun LED conectado ao pin 9.
 
 */

//definimos variables:

int pinLed = 9;           // definimos o numero 9 como pinLed
int brillo = 0;    // variable onde teremos o brillo do LED
int variacion = 5;    // como de rapido vai variar a intensidade do LED

// xa sabes que o setup se executa unha soa vez
void setup()  { 
  // facemos que o pinLed sexa unha saida (OUTPUT)
  pinMode(pinLed, OUTPUT);
} 

// xa sabes que loop se executa unha e outra vez de principio a fin
void loop()  { 
  // dicimoslle en que estado esta o led:
  analogWrite(pinLed,brillo);    

  // facemos que o brillo se incremente segundo o que vale "variacion":
  brillo=brillo+variacion;

  //o brillo so chega ate 255, polo que hai que dicirlle que ten que 
  //facer se chegamos a ese limite: 
  if (brillo>255) {
	//se o brillo pasa de 255 o poñemos a cero:    
	brillo=0 ; 
  }     
  // esperamos 30 milisegundos para que a cousa non vaia demasiado rapido.    
  delay(30);                            
}

