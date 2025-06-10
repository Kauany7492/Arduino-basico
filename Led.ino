/*
Neste arquivo você vera como ligar um LED utilizando o arduino
*/

void setup()  // Todo o código que está dentro dessa função(própria do arduino IDE) é executada apenas uma vez no início do programa.
{  // Indica que a parte do código após este { estará denro do void setup.
  pinMode(11, OUTPUT);  // Aqui estamos dizendo ao arduino que a porta digital 11(LED) é uma porta de saída.
} // Indica que a parte do código após este } estará fora do void setup.

void loop()  // Todo o código que está dentro dessa função(própria do arduino IDE) será executada após o void setup em forma de loop(até ser desligado).
{  // Indica que a parte do código após este { estará denro do void loop.
  digitalWrite(11, HIGH); // Indica que a porta digital 11(LED) será definida como HIGH (TRUE/1/ligada).
  delay(1000);  // Indica que terá uma espera de 1 segundo para poder ir a próxima parte do código.
  digitalWrite(11, LOW);  // Indica que a porta digital 11(LED) será definida como LOW (FALSE/0/desligada).
  delay(1000);  // Indica que terá uma espera de 1 segundo para poder ir a próxima parte do código.
}  // Indica que a parte do código após este } estará fora do void loop.
