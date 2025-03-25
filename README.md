<div align='center'>

<h1>Hand Gesture Recognition with IoT and OpenCV</h1>
<p>This project detects the number of fingers you're showing in front of your camera and displays the count on a 7-segment display connected to an Arduino.</p>

<h4> <span> · </span> <a href="https://github.com/liam1550/iot_opencv/blob/master/README.md"> Documentation </a> <span> · </span> <a href="https://github.com/liam1550/iot_opencv/issues"> Report Bug </a> <span> · </span> <a href="https://github.com/liam1550/iot_opencv/issues"> Request Feature </a> </h4>

</div>

# :notebook_with_decorative_cover: Table of Contents

- [About the Project](#star2-about-the-project)
- [Hardware Requirements](#gear-hardware-requirements)
- [Software Requirements](#floppy_disk-software-requirements)
- [Installation](#toolbox-installation)
- [Usage](#eyes-usage)
- [Circuit Diagram](#electric_plug-circuit-diagram)
- [Contact](#handshake-contact)


## :star2: About the Project

This project combines computer vision and IoT to create an interactive finger counting system. The Python script uses OpenCV and the HandTrackingModule to detect hands and count raised fingers in real-time. This count is then sent via serial communication to an Arduino, which displays the number on a 7-segment display.

## :gear: Hardware Requirements

- Arduino board (ESP32 or similar)
- 7-segment display
- Jumper wires
- USB cable for Arduino
- Webcam
- Computer with USB ports

## :floppy_disk: Software Requirements

- Python 3.x
- OpenCV
- cvzone library with HandTrackingModule
- pyserial
- Arduino IDE

## :toolbox: Installation

1. Clone the repository:
   ```
   git clone https://github.com/liam1550/iot_opencv.git
   cd iot_opencv
   ```

2. Install required Python packages:
   ```
   pip install opencv-python cvzone pyserial
   ```

3. Upload the Arduino code:
   - Open `arduino.cpp` in the Arduino IDE
   - Select your board and port
   - Upload the code to your Arduino

4. Connect the 7-segment display to the Arduino as per the pins defined in the code:
   - Pin a: 2
   - Pin b: 5
   - Pin c: 16
   - Pin d: 0
   - Pin e: 4
   - Pin f: 12
   - Pin g: 14

## :eyes: Usage

1. Connect your Arduino to your computer via USB
2. Ensure your webcam is connected and working
3. Update the serial port in `python.py` if necessary:
   ```python
   seriala = serial.Serial('COM5', 115200)  # Change COM5 to your Arduino port
   ```
4. Run the Python script:
   ```
   python python.py
   ```
5. Show your hand to the webcam and the 7-segment display will show the count of raised fingers
6. Press ESC to exit the program

## :electric_plug: Circuit Diagram

Connect the 7-segment display to the Arduino as follows:
- Segment a → Arduino pin 2
- Segment b → Arduino pin 5
- Segment c → Arduino pin 16
- Segment d → Arduino pin 0
- Segment e → Arduino pin 4
- Segment f → Arduino pin 12
- Segment g → Arduino pin 14

Note: Make sure to use appropriate resistors to limit current to the 7-segment display.

## :handshake: Contact

Mohammad Khalili (Liam Williams) - mohammad.khalili1515@gmail.com

Project Link: [https://github.com/liam1550/iot_opencv](https://github.com/liam1550/iot_opencv)
