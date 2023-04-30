// Code made by Gaurv@Electrovilla :- www.youtube.com/@Electrovilla
// Watch full Tutorail here:- https://youtu.be/HIxaGZjd8pk

#define in1 5  // in1 connected on Digital pin 5
#define in2 6  // in2 connected on Digital pin 6
#define in3 7  // in3 connected on Digital pin 7
#define in4 8  // in4 connected on Digital pin 8

#define frontled 2  //front lights connected on D2
#define backled 3   //front lights connected on D3

#define horn 4  //front lights connected on D4

void setup() {
  //Defining all pins as output

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(frontled, OUTPUT);
  pinMode(backled, OUTPUT);
  Serial.begin(9600);
  pinMode(horn, OUTPUT);
}

char value;

void loop() {
  if (Serial.available() > 0) {  //Check if Data is available via HC-05
    value = Serial.read();
    Serial.println(value);
    //Move Forward
    if (value == 'F') {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }

    //Move Backward
    else if (value == 'B') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }

    //Turn Right
    else if (value == 'R') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
    //Turn Left
    else if (value == 'L') {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }

    //Forward Right
    else if (value == 'I') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }

    //Forward Left
    else if (value == 'G') {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
    }

    //Backward Right
    else if (value == 'J') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }

    // Backward Left
    else if (value == 'H') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
    }

    // Stop
    else if (value == 'S') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
    }

    //Frontled ON
    else if (value == 'W') {
      digitalWrite(frontled, HIGH);
    }

    //Frontled OFF
    else if (value == 'w') {
      digitalWrite(frontled, LOW);
    }

    //Backled ON
    else if (value == 'U') {
      digitalWrite(backled, HIGH);
    }

    //Backled OFF
    else if (value == 'u') {
      digitalWrite(backled, LOW);
    }

    //Horn On
    else if (value == 'V') {
      digitalWrite(horn, HIGH);
    }

    //Horn OFF
    else if (value == 'v') {
      digitalWrite(horn, LOW);
    }
  }
}
