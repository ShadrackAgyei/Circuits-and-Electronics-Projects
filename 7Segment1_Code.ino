void setup() {
  // put your setup code here, to run once:
     // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
}

  int a = 8;
  int b = 2;
  int c = 3;
  int d = 4;
  int e = 5;
  int f = 6;
  int g = 7;


// function to clear the display
void clearDisplay(void) 
{ 
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);  
  digitalWrite(e,HIGH);  
  digitalWrite(f,HIGH);  
}

// function to show all segments
void DisplayAll(void) 
{ 
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);  
  digitalWrite(e,LOW);  
  digitalWrite(f,LOW);  
}

void loop() {
  // 0
  clearDisplay();
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);

// 1
  delay(1000);
  clearDisplay();
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
    

  delay(1000);
  clearDisplay();
// 2
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW) ;
  
// 3
  delay(1000);    
  clearDisplay();
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  
// 4
  delay(1000);
  clearDisplay();
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  
// 5
  delay(1000);
  clearDisplay();
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  
// 6

  delay(1000);
  clearDisplay();
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);


  delay(1000);
  clearDisplay();

// 7
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);


  delay(1000);
  clearDisplay();

// 8
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);

  
  delay(1000);
  clearDisplay();

// 9
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  

  delay(1000);
  clearDisplay();

// A
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(g, LOW);
  
// C
  delay(1000);
clearDisplay();
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);

delay(1000);
clearDisplay();
// E
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(g, LOW);
  
// F
delay(1000);
clearDisplay();
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  

delay(1000);
}