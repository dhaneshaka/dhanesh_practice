Project Connections 
=====================================================
Board-1 (STM32F401) → Sensor Node (DHT11 + SPI Master)

Board-2 (STM32F401) → Gateway Node (SPI Slave + UART to PC)
=============================================================

3. First i done the loopback test for  spi  master if it works the master supports the spi communication else not

4. Then i hve tested  both master and slave are communicating or not. with  printing  some data on pc via spi communication
   betweeen two micro controllers if the transmitted data is printed on pc it works else check the connections and code once

5. After this connect a dht11 sensor to the master and print the data by using spi via uart to pc to print the data on pc.

6)	This project is about reading temperature and humidity using a DHT11 sensor and sending the data to a
         PC using  STM32F401 microcontroller boards.

       2)In this project, the first STM32F401 board works as a sensor board.

       3) It is connected to a DHT11 sensor and reads the temperature and humidity values at regular time intervals.

       4) After reading the sensor data, this board sends the information to the second STM32F401 board using SPI communication.

       5)The second STM32F401 board works as a receiver board. It receives the data from the first board through SPI and then
         sends the same data to a PC by using UART communication.

       6) On the PC, the data can be seen on a serial terminal, which helps in monitoring the temperature
          and humidity in real time.

==================================================================
OLED + DHT11 sensor
==================================================================

	1) first i have priented the some data on OLED using the the STM32f401ccu6 microcontroller and OLED display.

	2) some data is printed in the OLED display.

	3)To check the temparature and humidity i have connected the DHT11 sensor.

	4) i have connected the DHT11 sensor to the STM32401 to DHT11 sensor to OLED display.

	5) i have printed the temparature and humidity on the OLED disply by using the STM32f401 micro controller and DHT11 senor
=======================================================================================   
