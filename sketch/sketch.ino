// C++ code
//

const int A = 4;
const int B = 5;
const int C = A0;
const int D = A1;
const int E = A2;
const int F = 3;
const int G = 2;

const int led_rojo = 6 ;

const int pulsador_tiempo = 8;
const int pulsador_inicio = 9;

int contador = 0;

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(pulsador_tiempo, INPUT_PULLUP);
  pinMode(pulsador_inicio, INPUT_PULLUP);
}

void loop() {
  // Al inicio siempre se pondra el contador de la variable
  // En un primer arranque sera cero, pero si incrementamos
  // sera el valor de la suma de la variable
  mostrar_display(contador);
  
  // Logica para el contador de tiempo
  if (digitalRead(pulsador_tiempo) == LOW) {
    delay(500);
    //Evitamos el efecto rebote
    while (digitalRead(pulsador_tiempo) == LOW) {};
    if (contador == 9) {
      contador = 0;
      mostrar_display(contador);
    } else {
      contador++;
      mostrar_display(contador);
    }
  }

  // Logica para el inicio
  if (digitalRead(pulsador_inicio) == LOW) {
    if (contador > 0) {
      for (contador; contador > 0; contador--) {
        digitalWrite(led_rojo, HIGH);
        mostrar_display(contador);
        delay(1000);
      }
    }
    digitalWrite(led_rojo, LOW);
  }
}

// CUIDADO
// Al estar todo en los catodos del arduino
// Si es HIGH es a la inversa, es decir, apagado
void mostrar_display(int numero) {
  switch(numero) {
    case 0:
    cero();
  break;
  case 1:
    uno();
    break;
  case 2:
    dos();
    break;
  case 3:
    tres();
    break;
  case 4:
    cuatro();
    break;
  case 5:
    cinco();
    break;
  case 6:
    seis();
    break;
  case 7:
    siete();
    break;
  case 8:
    ocho();
    break;
  case 9:
    nueve();
    break;
}

return;
}

void cero() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  return;
}

void uno() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  return;
}

void dos() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  return;
}

void tres() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  return;
}

void cuatro() {
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  return;
}

void cinco() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  return;
}

void seis() {
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  return;
}

void siete() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  return;
}

void ocho() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  return;
}

void nueve() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  return;
}