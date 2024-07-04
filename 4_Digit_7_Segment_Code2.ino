
 // set up pins for easy identification
  int a = 2;
  int b = 3;
  int c = 4;
  int d = 5;
  int e = 6;
  int f = 7;
  int g = 8;

  int d1 = 9;
  int d2 = 10;
  int d3 = 11;
  int d4 = 12;

void setup() {
  // put your setup code here, to run once:
  // set the pins as output
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void clearDisplay(void) 
{ 
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);  
  digitalWrite(e,LOW);  
  digitalWrite(f,LOW);  
}

void display1() {
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display2() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH) ;
}

void display3() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void display4() {
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display5() {
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void display6() {
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
}

void display7() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
}

void display8() {
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
}

void display9() {
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}

void display0() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH); 
}

void partA() {
  digitalWrite(d1,HIGH);
  display0();
  delay(500);
  display4();
  delay(500);
  display0();
  delay(500);
  display4();
  delay(500);
}

void display0000() {
  digitalWrite(d1,HIGH);
  digitalWrite(d2,HIGH);
  digitalWrite(d3,HIGH);
  digitalWrite(d4,HIGH);

  display0();
}

void display0123() {
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  display0();
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display1()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  display2()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  display3()  ;
  clearDisplay();
  
  }



void display0234() {
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  display0();
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display2()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  display3()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  display4()  ;
  clearDisplay();

}

void display0345() {
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  display0();
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display3()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  display4()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  display5()  ;
  clearDisplay();

}

void display0456() {
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  display0();
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display4()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  display5()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  display6()  ;
  clearDisplay();

}

void display0567() {
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  display0();
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display5()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  display6()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  display7()  ;
  clearDisplay();

}

void display1678() {
  
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  display1();
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, LOW);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display6()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, LOW);
  digitalWrite(d4, HIGH);
  display7()  ;
  clearDisplay();

  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, LOW);
  display8()  ;
  clearDisplay();

}



void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display0();
  delay(3500);
  clearDisplay();

  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display4();
  delay(3500);
  clearDisplay();

  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display5();
  delay(3500);
  clearDisplay();

  digitalWrite(d1, LOW);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);
  display8();
  delay(3500);
  clearDisplay();

for (int i = 1; i < 30000; i++) { 
  display0123();
  
}


for (int i = 1; i < 30000; i++) { 
  display0234();
  
}


for (int i = 1; i < 30000; i++) { 
  display0345();
  
}


for (int i = 1; i < 30000; i++) { 
  display0567();
  
}


for (int i = 1; i < 30000; i++) { 
  display1678();
  
}



}

