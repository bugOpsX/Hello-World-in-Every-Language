# 🤖 Arduino - Hello World

<div align="center">

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Language](https://img.shields.io/badge/Language-C%2FC%2B%2B-blue?style=for-the-badge)
![Hardware](https://img.shields.io/badge/Hardware-Embedded-red?style=for-the-badge)

</div>

---

## 📖 About Arduino

**Arduino** is an open-source electronics platform based on easy-to-use hardware and software. It's perfect for beginners and professionals to create interactive electronic projects.

| Property | Details |
|----------|---------|
| **Year Created** | 2005 |
| **Creator** | Massimo Banzi & Team |
| **Type** | Embedded Systems / C/C++ |
| **Paradigm** | Procedural, Object-Oriented |
| **Use Cases** | IoT, Robotics, Prototyping, Education |

---

## 🚀 How to Run

### Prerequisites
- Arduino IDE ([Download](https://www.arduino.cc/en/software))
- Arduino board (Uno, Mega, Nano, etc.)
- USB cable

### Steps
1. Open `hello.ino` in Arduino IDE
2. Connect your Arduino board via USB
3. Select **Tools → Board** → Your Arduino model
4. Select **Tools → Port** → Your COM port
5. Click **Upload** (→ button)
6. Open **Serial Monitor** (Ctrl+Shift+M)
7. Set baud rate to **9600**
8. See "Hello, World!" printed! 🎉

---

## 💡 Code Explanation

```cpp
void setup() {
  Serial.begin(9600);        // Initialize serial communication
  while (!Serial) { ; }      // Wait for serial port (USB boards)
  Serial.println("Hello, World!");
}

void loop() {
  // Runs repeatedly - empty for Hello World
}
```

**Key Functions:**
- `setup()` - Runs once when Arduino starts
- `loop()` - Runs continuously after setup()
- `Serial.begin(9600)` - Opens serial port at 9600 baud
- `Serial.println()` - Prints text to serial monitor

---

## 🎯 Fun Facts

- **25+ million** Arduino boards sold worldwide
- Used in **NASA** and **CERN** projects
- Powers thousands of **IoT** and **robotics** projects
- **Open-source hardware** - you can build your own!
- Arduino UNO is the most popular board

---

## 🔗 Resources

- [Official Website](https://www.arduino.cc/)
- [Documentation](https://docs.arduino.cc/)
- [Tutorials](https://www.arduino.cc/en/Tutorial/HomePage)
- [Community Forum](https://forum.arduino.cc/)
- [Project Hub](https://create.arduino.cc/projecthub)

---

## 🏆 Contributing

This implementation was created for:
- **Repository**: [Hello-World-in-Every-Language](https://github.com/bugOpsX/Hello-World-in-Every-Language)
- **Issue**: [#54 - Add Hello world in Arduino.ino](https://github.com/bugOpsX/Hello-World-in-Every-Language/issues/54)
- **Contributor**: @ldeong
- **Date**: October 2025

---

<div align="center">

Made with ❤️ for the Arduino Community

</div>
