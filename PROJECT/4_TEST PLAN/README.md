Firstly we can connect IR sensor to Arduino Uno.<br>

Connect the left pin of IR sensor which is ground to the ground of the Arduino<br>
Connect the middle pin which is 5V input to the 5V output pin of the Arduino.<br>
Connect the right pin which is signal output pin to the digital pin 2 of the Arduino.<br>
We are using a 9V battery to power 2 DC motors.<br>
Now we can connect L293D IC to Arduino Uno. The pin out of the IC is shown below.<br>


Connections are as follows :<br>

Connect enable pins (Pin 1, Pin 2) of L293D to 5V output of Arduino. This enables two H-Bridge channels inside the IC to drive two DC motors.<br>
Connect logic voltage input (Pin 16) of L923D to 5V output of Arduino. This defines the voltage (5V) logic of control signals .<br>
Connect motor/drive supply (Pin 8) of L293D to +ive of the 9V battery.<br>
Connect ground pins (Pin 4, 5, 12, 13) to ground of Arduino and -ive of the battery.<br>
Connect pin 2 of L293D to digital pin 6 of the Arduino.<br>
Connect pin 7 of L293D to digital pin 5 of the Arduino.<br>
Connect pin 10 of L293D to digital pin 11 of Arduino.<br>
Connect pin 15 of L293D to digital pin 12 of Arduino<br>
Connect first DC motor to Pin 3 and Pin 6 of L293D.<br>
Connect second DC motor to Pin 11 and Pin 14 of L293D.<br>
