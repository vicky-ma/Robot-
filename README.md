# Robot
Robot implementation

# Sensor-Test:
* How to make changes to code to use it on your robot:
The sensor-test file includes a piece of Arduino code that help implement the sensor system used on a robot. Four HC-SR04 Ultrasonic sensors, a Arduino Mega 2560 board and some jumper wires are used in this case. If you are using a different kind of board, make sure the board has 8 digital PWM pins which are used to connect with Trig and Echo pin of the sensors. When uploading the code, the defined Trig and Echo pins should be consistent with the pin connected on the board.
For instance:
        // define the pin and variable
            int trigPin1 = 3;
            int echoPin1 = 4;
In this case, the Trig pin of the first sensor should be connected to port 3 on the board, and the Echo pin to the port 4 on the board. Once you change the connection, the pin and variable definition should also be changed.
I make 250 microseconds delay between each working cycle, which is indicated in the codes below (at the end of the code):
       //set time delay
          delay (250);
This is another place that can be made some changes to. If you want to collect the data faster and more efficiently, you can decrease the time delay.
* How does the sensor work:
The Trig pin of the sensor is a transmitter that send out a high-frequency sound signal. As the signal finds an object, it will be reflected and received by the other transmitter (Echo pin). Trig and Echo are digital output and input respectively, so that for each sensor, we need 2 digit PWM ports on the board. The sensor also needs a 5V voltage supply to be connected to the VCC pin, you can either use the one on the mega board or the voltage generator outside of the board. The distance can be found by reading the signal from the sensor-a duration from the sending (Trig) to the reception of the dignal (Echo) and calculating usding the formula:
        distance = (duration/2) * speed
