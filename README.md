# Smart Home System Project 🏡✨

This project is a **Smart Home Automation System** that allows users to control various home components such as doors, fans, and lights. It features real-time status updates on an LCD and includes fire safety and light detection systems, all controlled remotely via a mobile app. The project includes password protection with limited login attempts and hardware safety features.

## Features 🌟

### 1. **User Authentication 🔒**
- **Username and Password**: Users are prompted to enter a username and password with a maximum of 3 attempts.
- **Exceeded Attempts**: If the user enters incorrect credentials 3 times, an alarm and buzzer will be triggered, the system will lock for 10 seconds, and a message will appear on the LCD displaying the lock status.
- **Security Mechanism**: After the 10 seconds lock period, the system resets and allows re-entry of credentials.

### 2. **Control Options 🎮**
Once authenticated, the user is presented with a list of options on the mobile app to control different components:

- **Open/Close Door**: Control the door using a **servo motor** 🚪.
- **Open/Close Fan**: Control the fan using a **DC motor** 🌀.
- **Control Room Lights**: Open or close lights for **3 rooms** using LEDs 💡.

### 3. **Interrupts and Sensors 🚨**
- **LDR Sensor**: Detects low light in the garden and automatically turns on the garden lights 🌞.
- **Fire Safety System (LM35 Sensor)**:
  - At **30°C**, the fan automatically activates.
  - At **70°C**, both a buzzer and a red LED are triggered to alert the user of a fire hazard 🔥.

## Hardware and Software Requirements 🛠️
- **Microcontroller**: AVR-based microcontroller
- **Servo Motor**: For door control
- **DC Motor**: For fan control
- **LEDs**: For room and garden lights
- **LDR Sensor**: For light detection in the garden
- **LM35 Sensor**: For fire detection and safety
- **Buzzer and Red LED**: For alert systems
- **Proteus Simulation**: To simulate the circuit setup
- **LCD Display**: To show real-time status updates and security messages
- **Mobile Application**: For remote control of the system

  
## Video Demo 🎥
- A **video demo** of the project simulation using Proteus is available in the repository.
- To check an actual **hardware demonstration** : https://drive.google.com/file/d/1ocPjh16BgtIy2B6YKTEFRNZhMOkvQA7j/view

Enjoy automating your home with our Smart Home System! 🏡🔧
