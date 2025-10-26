<aside>
🤖

**Autonomous Obstacle Avoidance Robot (Arduino Uno)**

A compact, low-cost robot that senses obstacles and navigates around them autonomously using ultrasonic ranging, a servo scanner, and dual DC motors.

</aside>

---

### **Project Overview**

- **Project Name:** Obstacle Avoidance Robot Using Arduino
- **Team Members:**
    - Krish Srivastava (25BCS10325)
    - Ayush Tiwari (25BCS10197)
- **Supervisor / Guide:** Purnima Sharma
- **Institution:** Chandigarh University, Department of Computer Science & Engineering
- **Duration:** [September 2025 – October 2025]
- **Links:**
    - GitHub Repository: [Insert URL if available]
    - Demo Video: [Insert URL if available]

---

### **Summary**

This project demonstrates the design and implementation of an **autonomous two-wheel drive obstacle-avoidance robot** using an **Arduino Uno** as the central controller.

The robot detects obstacles using an **HC-SR04 ultrasonic sensor** mounted on a **servo motor** for angular scanning. An **L298N motor driver shield** controls the direction and movement of two **DC motors** based on sensor input.

By integrating hardware and software, the system enables the robot to move independently, detect nearby obstacles, and adjust its path dynamically. This project combines core concepts of **embedded systems, control theory, and robotics**, resulting in a functional prototype that mimics basic autonomous navigation used in modern robotic vehicles.

---

### **Goals and Success Criteria**

- **Primary Goal:**
    
    To design and develop an autonomous robot that can detect and avoid obstacles without human intervention using Arduino-based control logic.
    
- **Secondary Goals:**
    - Implement servo-based environmental scanning for better path decision-making.
    - Build a cost-effective and modular robotic platform for educational research.
    - Demonstrate fundamental integration of sensors, actuators, and embedded programming.
- **Success Metrics:**
    - Robot avoids collisions with >90% accuracy in controlled environments.
    - Stable movement on flat surfaces with consistent sensor readings.
    - Operation duration >30 minutes per charge cycle.

---

### **Scope**

- **In Scope:**
    - Designing a 2WD robot using Arduino Uno
    - Obstacle detection via ultrasonic sensor
    - Servo-based scanning and direction control
    - Motor driver integration and autonomous navigation
- **Out of Scope:**
    - Wireless communication (Wi-Fi/Bluetooth)
    - GPS or outdoor navigation
    - Complex mapping or AI-based decision-making
- **Assumptions:**
    - Robot operates in indoor environments with flat surfaces
    - Obstacles are solid and detectable within ultrasonic range (2–200 cm)
- **Constraints and Risks:**
    - Limited battery capacity
    - Sensor inaccuracy due to reflective or absorbent materials
    - Overheating of motors during extended use

---

### **Requirements**

- **Functional Requirements:**
    - Detect obstacles within 15 cm radius.
    - Halt and change direction automatically when obstacle detected.
    - Scan surroundings via servo-mounted sensor.
    - Resume forward motion when clear path is detected.
- **Non-Functional Requirements:**
    - **Performance:** Real-time response within 500 ms to sensor input.
    - **Security:** Circuit-level safety for overcurrent protection.
    - **Reliability:** Continuous operation for at least 20 minutes without failure.

---

### **Architecture / Approach**

- **High-Level Design:**
    
    The system consists of a central Arduino Uno microcontroller that reads distance data from the ultrasonic sensor. The servo motor rotates the sensor for environmental scanning. Based on measured distances, the Arduino commands the L298N driver to move, stop, or turn the motors accordingly.
    
- **Alternatives Considered:**
    - IR sensors (rejected due to low range and accuracy)
    - ESP32 microcontroller (not used due to unnecessary complexity for basic control)
- **Tradeoffs:**
    - Simplicity and cost-effectiveness prioritized over advanced path planning.
    - Limited computational power accepted for reduced design complexity.
- **Diagrams and References:**
    
    A block diagram illustrates the interaction between Arduino, sensor, servo, and motors.
    
    [Attach schematic and circuit diagram here.]
    

---

### **Project Plan**

- **Workstreams:**
    1. Hardware assembly and integration
    2. Embedded software development
    3. Testing and performance validation
- **Deliverables:**
    - Fully assembled robot
    - Arduino codebase
    - Circuit schematic
    - Final report and presentation
- **Dependencies:**
    - Availability of electronic components
    - Stable power source for testing
    - Working Arduino IDE environment

---

### **Tasks**

- [x]  Create detailed specification
- [x]  Mechanical and electronic design complete
- [x]  Hardware assembly and wiring
- [x]  Implementation of control logic in Arduino
- [x]  Testing and validation
- [x]  Final presentation and report submission

---

### **Budget and Resources**

- **Budget Estimate:** ₹1,800 – ₹2,200 INR
    
    
    | Item | Cost (INR) |
    | --- | --- |
    | Arduino Uno | 400 |
    | L298N Shield | 300 |
    | Ultrasonic Sensor | 120 |
    | Servo Motor | 150 |
    | DC Motors (2) | 300 |
    | Chassis and Wheels | 400 |
    | Battery Pack and Holder | 250 |
    | Miscellaneous (wires, bolts, etc.) | 200 |
- **Tools and Vendors:**
    - Arduino IDE
    - Components sourced from Robu.in / Amazon / local electronics vendors
- **Resource Plan:**
    - 2 team members for development and testing
    - 1 faculty advisor for oversight
    - Lab workspace with soldering, multimeter, and debugging tools

---

### **Status**

- **Current Status:**
    
    Prototype assembled and functional. Obstacle avoidance behavior verified through multiple tests.
    
- **Recent Updates:**
    - Code optimized for smoother turning and reduced jitter.
    - Servo sweep angles adjusted for faster environmental scanning.
- **Blockers:**
    - Minor fluctuations in distance readings under certain lighting conditions.
- **Next Steps:**
    - Add power switch for controlled startup.
    - Optional integration of Bluetooth for manual override.

---

### **Notes and Decisions**

- The team agreed to maintain modularity for easy future upgrades (e.g., Bluetooth control, line-following mode).
- Servo rotation limited to 30°–150° range for faster obstacle detection.
- Chassis center of mass adjusted for stable motion during turns.

---

### **Appendix**

**Glossary:**

- **PWM (Pulse Width Modulation):** Technique used to control motor speed and servo angle.
- **HC-SR04:** Ultrasonic sensor for distance measurement.
- **L298N:** Dual H-Bridge motor driver IC used to control DC motors.

**Related Documents:**

- Arduino Source Code (`obstacle_avoidance.ino`)
- Circuit Diagram (schematic.pdf)
- Test Data Logs (distance_calibration.xlsx)


**Changelog:**

- v1.0 — Initial draft created
- v1.1 — Hardware integration completed
- v1.2 — Report finalized for submission

---

### **Conclusion**

The Obstacle Avoidance Robot Using Arduino successfully demonstrates the integration of sensor feedback, motor control, and embedded decision logic. Through precise coordination between software and hardware, the system achieves real-time autonomous navigation.

This project provides a foundation for advanced robotics research and demonstrates the power of simple embedded systems to achieve intelligent automation. Future extensions could include wireless communication, GPS navigation, and AI-based path learning for more complex applications.

---
