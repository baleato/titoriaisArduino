/* Neste programa imos ver como relacionar unha entrada cunha saida.
Isto nos vai permitir que Arduino execute accións en función de como
sexan as entradas, o cal mola moito.
*/


//isto e novo, aqui declaro unhas variables, algo asi como dicir que de
//agora en diante, ao numero 7 lle chamo verde e ao 9 vermello.
int verde=7;
int vermello=9;

//preparo todo como xa explicamos outras veces
void setup(){
pinMode(verde,OUTPUT);
pinMode(vermello,OUTPUT);
Serial.begin(9600);
}


void loop(){
//chamolle valorPote a lectura de A0, que estaba entre 0 e 1023
int valorPote=analogRead(A0);

Serial.println(valorPote);

//se valorPote e maior de 500
if (valorPote>500) {
//encende o vermello	
digitalWrite(vermello,HIGH);
//apaga o verde	
digitalWrite(verde,LOW);
	}
//en calquera outro caso
else {
//apaga o vermello
digitalWrite(vermello,LOW);
//e encende o verde
digitalWrite(verde,HIGH);
}


delay(10);
}
