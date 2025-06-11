/*
Neste arquivo você verá como fazer um semáforo de carro e de pedestre, utilizando LEDs.

Veja de maneira visual no link a seguir:
https://wokwi.com/projects/391433773334299649
*/

int vermelho_car = 10;  // Declara a variável "vermelho_car" como o número inteiro "10"
int amarelo_car = 9;  // Declara a variável "amarelo_car" como o número inteiro "9"
int verde_car = 8;  // Declara a variável "verde_car" como o número inteiro "8"
int vermelho = 7;  // Declara a variável "vermelho" como o número inteiro "7"
int verder = 6;  // Declara a variável "verder" como o número inteiro "6"
 
 void setup()  // Todo o código que está dentro dessa função(própria do arduino IDE) é executada apenas uma vez no início do programa.
{  // Indica que a parte do código após este { estará denro do void setup.
  pinMode(vermelho_car, OUTPUT);  // Aqui estamos dizendo ao arduino que a variável "vermelho_car"(LED) é uma porta de saída.
  pinMode(amarelo_car, OUTPUT);  // Aqui estamos dizendo ao arduino que a variável "amarelo_car"(LED) é uma porta de saída.
  pinMode(verde_car, OUTPUT);  // Aqui estamos dizendo ao arduino que a variável "verde_car"(LED) é uma porta de saída.
  pinMode(vermelho, OUTPUT);  // Aqui estamos dizendo ao arduino que a variável "vermelho"(LED) é uma porta de saída.
  pinMode(verde, OUTPUT);  // Aqui estamos dizendo ao arduino que a variável "verde"(LED) é uma porta de saída.
}  // Indica que a parte do código após este } estará fora do void setup.
          
void loop()  // Todo o código que está dentro dessa função(própria do arduino IDE) será executada após o void setup em forma de loop(até ser desligado). 
{  // Indica que a parte do código após este { estará denro do void loop.
  digitalWrite(vermelho, HIGH); // Indica que a variável "vermelho"(LED) será definida como HIGH (TRUE/1/ligada).
  digitalWrite(verde, LOW);  // Indica que a variável "verde"(LED) será definida como LOW (FALSE/0/desligada).
  digitalWrite(vermelho_car, LOW);  // Indica que a variável "vermelho_car"(LED) será definida como LOW (FALSE/0/desligada).
  digitalWrite(amarelo_car, HIGH); // Indica que a variável "amarelo_car"(LED) será definida como HIGH (TRUE/1/ligada).
  digitalWrite(verde_car, LOW);  // Indica que a variável "verde_car"(LED) será definida como LOW (FALSE/0/desligada).
  delay(2000);  // Indica que terá uma espera de 2 segundos para poder ir a próxima parte do código.
  digitalWrite(vermelho, LOW);  // Indica que a variável "vermelho"(LED) será definida como LOW (FALSE/0/desligada).
  digitalWrite(verde, HIGH); // Indica que a variável "verde"(LED) será definida como HIGH (TRUE/1/ligada).
  digitalWrite(amarelo_car, LOW);  // Indica que a variável "amarelo_car"(LED) será definida como LOW (FALSE/0/desligada).
  digitalWrite(vermelho_car, HIGH); // Indica que a variável "vermelho_car"(LED) será definida como HIGH (TRUE/1/ligada).
  delay(5000);  // Indica que terá uma espera de 5 segundos para poder ir a próxima parte do código.  
  digitalWrite(verde, LOW);  // Indica que a variável "verde"(LED) será definida como LOW (FALSE/0/desligada).
  digitalWrite(vermelho, HIGH); // Indica que a variável "vermelho"(LED) será definida como HIGH (TRUE/1/ligada).
  digitalWrite(verde_car, HIGH); // Indica que a variável "verde_car"(LED) será definida como HIGH (TRUE/1/ligada).
  digitalWrite(vermelho_car, LOW);  // Indica que a variável "vermelho_car"(LED) será definida como LOW (FALSE/0/desligada).
  digitalWrite(amarelo_car, LOW);  // Indica que a variável "amarelo_car"(LED) será definida como LOW (FALSE/0/desligada).
  delay(5000);  // Indica que terá uma espera de 5 segundos para poder ir a próxima parte do código.
}  // Indica que a parte do código após este } estará fora do void loop.
