# Infrared-Controlled Motor 🚀  

## 📜 Overview  
This project demonstrates how to control a **DC motor** using an **infrared (IR) sensor** and an **external interrupt mechanism**.  

- When the **IR sensor detects an object** (logical "1"), the **motor starts running**.  
- When the **IR sensor does not detect an object** (logical "0"), the **motor stops**.  

This setup enables automated motor control based on the presence or absence of objects within the sensor’s range.  

---

## 📂 Project Structure  
- 📁 circuit_diagram/ - Contains the circuit simulation image (.png)
- 📁 simulation/ - Includes the Proteus simulation file (.pdsprj)
- 📁 src/ - Contains the source code (.c file)
- 📁 hex/ - Includes the compiled .hex file for flashing
- 📁 README.md - Project documentation
- 📁 LICENSE - License file

---

## 🛠 Components Used  
- **Microcontroller**: PIC18F4550  
- **Motor Driver**: L293D  
- **Motor**: DC Motor  
- **Infrared Proximity Sensor**: Detects objects  
- **Red LED Light**: Indicates motor status  
- **Inductors, Resistors, and Capacitors**: For circuit stability  

---

## 🔌 Circuit Diagram  
The circuit consists of:  
✔ **IR proximity sensor** as an external interrupt source.  
✔ **L293D motor driver** to control motor movement.  
✔ **PIC18F4550 microcontroller** for decision-making.  
✔ **Red LED** to indicate motor activation.  

You can find the circuit simulation **image** in the [`circuit_diagram`](circuit_diagram/) folder and the **Proteus simulation file** in the [`simulation`](simulation/) folder.  

---

## 💻 Code Implementation  
The **C source code** is located in the [`src`](src/) folder. The **compiled HEX file** for programming the microcontroller is in the [`hex`](hex/) folder.  

---

## **Authors**
This project was developed by Abdulbasit Hamid 

## 🔓 Open-Source Notice  
This project is **open-source**, and you are free to use, modify, and share it. However, please give **proper credit** if you use this work in any way.  

*No formal license is applied to this project.*  
