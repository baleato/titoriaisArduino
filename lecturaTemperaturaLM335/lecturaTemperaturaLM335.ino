//Definimos o pin onde lemos o valor do sensor
int entradaLM335= 0;

//Abrimos a comunicación co monitor serie
void setup()
{
Serial.begin(9600);
}


void loop()
{
//creamos unha variable lectura para coller o valor do sensor
//e int por ser un numero enteiro
int voltaxe= analogRead(entradaLM335);

//creamos unha variable con decimais (float) onde imos calcular os milivoltios
//aos que equivale esa lectura do sensor, que xa sabes que vai entre 0 e 1024
//multiplicamos por 5000 porque estamos a traballar cos 5V do Arduino
float milivoltios= (voltaxe/1024.0) * 5000;

//calculamos o valor Kelvin e o almacenamos na variable kelvin
float kelvin= (milivoltios/10);

//imprimimos o valor da variable kelvin
Serial.print(kelvin);
Serial.println(" degrees Kelvin");

//facemos o calculo e o mesmo proceso para o valor en graos celsius
float celsius= kelvin - 273.15;
Serial.print(celsius);
Serial.println(" degrees Celsius");

//o tempo que quero que pase entre unha e outra lectura
delay(3000);
}
