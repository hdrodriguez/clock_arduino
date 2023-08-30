#define A  3
#define F0 4
#define F1 5
#define G  6
#define E0 9
#define E1 10
#define D  11


int active = 0;

int a = HIGH;
int l = LOW;
int f =0;


void convert(int num)
{
  f = 500;

  if(num == 0)
  {
        digitalWrite(A, l);
        digitalWrite(F0, a);
        digitalWrite(F1, a);
        digitalWrite(G, l);
        digitalWrite(E0, a);
        digitalWrite(E1, a);
        digitalWrite(D, l);

        delay(f);


        digitalWrite(A, a);
        digitalWrite(F0, l);
        digitalWrite(F1, l);
        digitalWrite(G, a);
        digitalWrite(E0, l);
        digitalWrite(E1, l);
        digitalWrite(D, a);

        delay(f);
      

        digitalWrite(A, a);
        digitalWrite(F0, l);
        digitalWrite(F1, l);
        digitalWrite(G, a);
        digitalWrite(E0, l);
        digitalWrite(E1, l);
        digitalWrite(D, a);
       
        delay(f);

        digitalWrite(A, a);
        digitalWrite(F0, l);
        digitalWrite(F1, l);
        digitalWrite(G, a);
        digitalWrite(E0, l);
        digitalWrite(E1, l);
        digitalWrite(D, a);
        
        delay(f);
        digitalWrite(A, l);
        digitalWrite(F0, a);
        digitalWrite(F1, a);
        digitalWrite(G, l);
        digitalWrite(E0, a);
        digitalWrite(E1, a);
        digitalWrite(D, l);
        delay(1000);     
        
  }

}

void setup() {
  // put your setup code here, to run once:


  pinMode(A, OUTPUT);
  pinMode(F0, OUTPUT);
  pinMode(F1, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(E0, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(D, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  convert(0);

}
