# Speeduino-Esp8266-wifi
Wifi On Speeduino Poject

Here is how to use an esp8266 wifi with a Speeduino ECU on mega 2560.
You need esp-01 or esp-12 you can ckeck on Aliexpress many clone is selling

![2024-04-20_184204](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/440f38aa-82b9-431b-adda-a7cc072893bf)

![2024-04-20_184006](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/7900dfe9-0e1e-4d2c-8b1d-818b82042be6)

This is the easiest method to compile the firmware here
 
 Download and install Arduino Soft https://www.arduino.cc/en/software
 
 Download driver USB ch 340 and install https://www.arduined.eu/ch340-windows-10-driver-download/

Arduino Soft needs the library esp8266 community on this link explains how to install https://www.arduined.eu/ch340-windows-10-driver-download/
First Methode
Now you are ready to flash the firmware via Arduino soft.
open the project "Speeduino_esp8266.ino"
-You can mod the name "ssid" or "pw" is the password over 6 number or letter generic pass is 123456789
-Select Boards generic esp8266 or wenos D1 R2
-Select port com
-Compile the soft
![2024-04-20_191409](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/2b320a75-25bd-46b3-9357-9a7b63cb67a3)

Second method very fast 
Via binary file no modification is possible
Download this software Flash Download Tools Windows PC	V3.9.6
https://www.espressif.com/en/support/download/all
-Install the software 
-Select the file binary Speeduino_esp8266.ino.bin write start to 0x00000


 


