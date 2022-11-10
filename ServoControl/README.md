# Control Servo Motor using MATLAB Application
[Blog Post Link](http://embeddedlaboratory.blogspot.com/2017/02/control-servo-motor-using-matlab.html)  

In this post, I will show you how to control Servo Motor using MATLAB Application GUI. I will use Arduino Uno which will receive commands from MATLAB and will control the Servo Motor based on the commands received from MATLAB.  
If you don't know what Arduino, MATLAB, and Servo Motor are, then I would request you guys learn the basics about MATLAB, Servo Motor, and Arduino. Basic learning of these things is required.  
So let's start, for designing GUI using MATLAB we have two choices the first one is GUIDE and the other option is MATLAB Application, so for this post, I am going to use MATLAB Application and not GUIDE, as MATLAB Application has lots of instrumentation widgets available.  
The Connection diagram for connecting Servo Motor to Arduino is very simple and is as follows:  

![Connection Diagram](https://3.bp.blogspot.com/-d9Iye2AsTFM/WKk9v98gtNI/AAAAAAAAAWE/Pzd0O_QP83MlnKdqbTmmxMeT0bzy8Su6wCLcB/s1600/Connection%2BDiagram.PNG)  

As clear from the above figure Servo Motor signal pin is connected to Arduino's 8th digital pin, which will provide pulses to Servo Motor for controlling its rotation.  
Servo Motor comes with three pins and the following diagram will help you identify the proper connections for your servo motor.  
![Servo Wiring](https://4.bp.blogspot.com/-oJvLOVrAsEk/WKk-2opJ0_I/AAAAAAAAAWQ/kShNnA3veNcmSUR3lFTihVO7Y_Yh0C-OwCLcB/s1600/ServoMotor-Wiring.png)  

## Program Flow
The Servo Motor which I am using can rotate from 0 degrees to 180 degrees, MATLAB Application will send these values to the serial port, based on the knob position selected by the user and Arduino Program will in-turn rotates the servo motor to the desired position.  
![MATLAB Application](https://2.bp.blogspot.com/-eCo_KpIpMDo/WKlAAZUWILI/AAAAAAAAAWg/e-FsyZr0oEklXS5utgMHPOqIT4gf1eYDQCLcB/s1600/MATLAB%2BApplication.PNG)  

[YouTube Video Link](https://youtu.be/xeTmqQvTlXI)

## Some Pictures of the Working Setup
![180 Degree](https://4.bp.blogspot.com/-H7mgN891dyI/WKlBCsgRYuI/AAAAAAAAAW0/pd0VEHXylaUpugPy3dmzvEzMZawQq26TQCLcB/s1600/180%2BDegree.png)  
![110 Degree](https://4.bp.blogspot.com/-8siHk-61AXA/WKlBCkEyTgI/AAAAAAAAAWw/aoBqr1mgKVoLgaG3HOoeZPXAveBYhNmdwCLcB/s1600/110%2BDegree.png)  
![30 Degree](https://1.bp.blogspot.com/-CZL-ICQscwU/WKlBCg5h3ZI/AAAAAAAAAWs/CEYnKxof3e8ZSECa4QD7SZlVpljnV_e4QCLcB/s1600/30%2BDegree.png)  
