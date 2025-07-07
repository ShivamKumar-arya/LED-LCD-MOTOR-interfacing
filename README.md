 
This project demonstrates how to interface multiple output devices—LEDs, a 16x2 LCD, and a DC motor—simultaneously using an Arduino Uno or ATmega328P microcontroller. The LEDs blink in sequence while the motor runs and the LCD provides real-time status updates.

The objective is to show how to handle parallel peripheral control in embedded systems and can be a helpful experiment for beginners in electronics and Arduino programming.

Use Case: Ideal for learning multitasking on Arduino, understanding pin management, and combining digital I/O with actuators and displays.

It showcases basic multitasking by combining visual output, motor control, and display feedback in one embedded system.

🧩 Components Used:
| Component                     | Quantity |
| ----------------------------- | -------- |
| Arduino Uno / ATmega328P      | 1        |
| 16x2 LCD (parallel mode)      | 1        |
| LED                           | 1        |
| 220Ω Resistors                | 2        |
| DC Motor                      | 1        |
| H-bridge / L293D Motor Driver | 1        |
| Breadboard + Jumper Wires     | -        |
| External Power Supply (Motor) | 1        |

🔌 Pin Configuration:

| Arduino Pin | Connected To                        |
| ----------- | ----------------------------------- |
| D2          | LCD DB7                             |
| D3          | LCD DB6 / Transistor base (via 1kΩ) |
| D4          | LCD DB5                             |
| D5          | LCD DB4                             |
| D8          | LED Anode (via 220Ω)                |
| D9          | L293D Input 1                       |
| D11         | LCD EN                              |
| D12         | LCD RS                              |
| GND / VCC   | LCD, LED, Motor GND/Power           |


🧩 Additional Wiring Details:

LCD (16x2, Parallel Mode)

VSS, K → GND

VDD, A → +5V

RW → GND

V0 → Middle pin of potentiometer (for contrast control)

🧩LED:

Anode → 220Ω Resistor → D8

Cathode → GND

🧩Motor:

Motor +ve → Collector of transistor

Motor -ve → GND


🛠 How It Works:

✅LED:

The LED blinks whenever the DC motor is rotating in any direction.
The LED is turn OFF when the motor is in the OFF state.

✅LCD (16x2 Display):

Displays the motor status:

"Motor ON" when running

"Motor OFF" when stopped

✅Shows the direction of rotation:

"Clockwise" when serial monitor input is "1"

"Anticlockwise" when serial monitor input is "2"

"No Direction"when serial monitor input is " any value remaining 1 or 2" and  motor is off.

✅DC Motor:

The motor turns ON for a short time (as per logic/code)

Then automatically stops, with status updated on the LCD

📋 Features 

✅ Controls multiple peripherals simultaneously (LED, LCD, Motor)

✅ Provides real-time feedback using the LCD

✅ Demonstrates basic multitasking without RTOS

✅ Can be extended to real-world applications like:
                                              
-Automation systems

-Robotics control

-DIY home appliances

🧠 Future Improvements

- Add **push buttons** to control motor direction manually  
- Replace LED with **RGB LED** for color-coded status  
- Include **sensors** for feedback-based motor control  
- Use **interrupts** or **timers** for advanced multitasking

                                                                
![circuit image](https://github.com/user-attachments/assets/5095763a-ea83-4912-bf71-29ec09877246)
![Screenshot 2025-07-07 090349](https://github.com/user-attachments/assets/8ef5cc2f-598d-4b86-8781-a67e4de06148)
![Screenshot 2025-07-07 091255](https://github.com/user-attachments/assets/7be3f0de-ee8e-48c2-9eee-0d19d611f690)
![Screenshot 2025-07-07 090130](https://github.com/user-attachments/assets/470c5031-2da0-40c5-877f-340ba4d7c326)
![Screenshot 2025-07-07 091310](https://github.com/user-attachments/assets/dd2fda18-df41-49da-ae47-69ee6773c84d)

## 🙏 Thank You

Thanks for checking out this project!  
Feel free to fork it, try the simulation, or suggest improvements via pull request or issue.

[Happy Tinkering! 🚀](https://www.tinkercad.com/)
                                                                  
