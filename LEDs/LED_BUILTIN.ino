/*
Neste arquivo você vai ver como ligar o LED presente no Arduino.

Veja o projeto de maneira visual no link a seguir:
https://wokwi.com/projects/433420478460056577
*/

void setup()  // Todo o código que está dentro dessa função(própria do arduino IDE) é executada apenas uma vez no início do programa.
{  // Indica que a parte do código após este { estará denro do void setup.
  pinMode(LED_BUILTIN, OUTPUT);  // Aqui estamos dizendo ao arduino que o LED presente nele será uma saída(as informações saíram do arduino para o pin OUTPUT).
} // Indica que a parte do código após este } estará fora do void setup.

void loop()  // Todo o código que está dentro dessa função(própria do arduino IDE) será executada após o void setup em forma de loop(até ser desligado).
{  // Indica que a parte do código após este { estará denro do void loop.
  digitalWrite(LED_BUILTIN, HIGH);  // Indica que a saída(LED_BUILTIN) será definida como HIGH (TRUE/1/ligada).
  delay(1000);  // Indica que terá uma espera de 1 segundo para poder ir a próxima parte do código.
  digitalWrite(LED_BUILTIN, LOW);  // Indica que a saída(LED_BUILTIN) será definida como LOW (FALSE/0/desligada).
  delay(1000);  // Indica que terá uma espera de 1 segundo para poder ir a próxima parte do código.
}  // Indica que a parte do código após este } estará fora do void loop.
