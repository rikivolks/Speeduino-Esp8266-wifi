# Speeduino-Esp8266-wifi
Wifi On Speeduino Poject

Here is how to use an esp8266 wifi with a Speeduino ECU on Mega 2560.
You need esp-01 or esp-12 (D1 Mini TYPE-C/MICRO ESP8266) you can ckeck on Aliexpress many clones is selling

Mega ok stm32 done nothing fucking problem communication lol

For serial 3  i dont have tested (relply please)

For serial 1 you need to change resistor 220 for 1k on tx rx on mega pro or mega ch340 clone  

But fuel pump is not activated before 10 sec is work fine after wait  and you can start engine

Here is how to use an esp8266 wifi with a Speeduino ECU on Mega 2560.
You need esp-01 or esp-12 (D1 Mini TYPE-C/MICRO ESP8266) you can ckeck on Aliexpress many clones is selling

![2024-04-20_184204](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/440f38aa-82b9-431b-adda-a7cc072893bf)

![2024-04-20_184006](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/7900dfe9-0e1e-4d2c-8b1d-818b82042be6)

Documentation esp8266 https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/

This is the easiest method to compile the firmware here
 
 Download and install Arduino Soft https://www.arduino.cc/en/software
 
 Download driver USB ch 340 and install https://www.arduined.eu/ch340-windows-10-driver-download/

Arduino Soft needs the library esp8266 community on this link for explains 

How to install https://www.arduined.eu/ch340-windows-10-driver-download/

First Methode

Now you are ready to flash the firmware via Arduino soft.
open the project "Speeduino_esp8266.ino"

-You can mod the name "ssid" or "pw" is the password over 6 number or letter generic pass is 123456789

-Select Boards generic esp8266 or wenos D1 R2

-Select port com

-Compile the soft

![2024-04-20_191409](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/2b320a75-25bd-46b3-9357-9a7b63cb67a3)

The second method is fast 

Via binary file no modification is possible

Download this software Flash Download Tools Windows PC	V3.9.6

https://www.espressif.com/en/support/download/all

-Install the software 

-Select the file binary Speeduino_esp8266.ino.bin write start to 0x00000

-Select port com

-START


![2024-04-20_193058](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/3a611e79-ef86-4bc5-9ff7-3c786c9506db)

Pin-out wiring is important 

you need to connect 

-TX esp8266 to RX mega pro

-RX esp8266 to TX mega pro

-GND

-5volt

When the connection is established on Tuner Studio the LED blue is open on Wemos D1 r2 board and esp-01 the LED blinks.
if you lose communication the LED keeps open normally i can not close the LED without good communication on Wemos D1 mini but the D1 is very fast communication.


Vidéo Watch you tube 

https://youtu.be/FwHLLHvOsPQ

Give Me a Tequila's Shot 🍺😜

News Results 

After many tests The TX RX ( I'm supposed ) needs a Bi-Directional Logic Level Converter. When is connected on esp the speeduino lag to start the code no fuel pump and no primary injection without a big delay time.
no need this this a problem with stm32  not need this !!!

![12009-06](https://github.com/rikivolks/Speeduino-Esp8266-wifi/assets/65349824/b152d5c2-a388-495c-bec2-96d67973a935)




 


