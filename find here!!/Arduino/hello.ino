// Hello World in Arduino
// Issue #54: https://github.com/bugOpsX/Hello-World-in-Every-Language/issues/54

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
  
  // Wait for serial port to connect (needed for native USB)
  while (!Serial) {
    ; // wait for serial port to connect
  }
  
  // Print "Hello, World!" to the serial monitor
  Serial.println("Hello, World!");
  Serial.println("Arduino is ready!");
}

void loop() {
  // Empty loop - Hello World only needs to print once
  // Could add: delay(1000); Serial.println("Still running...");
}
