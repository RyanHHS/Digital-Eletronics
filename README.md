# Digital-Eletronics

## Final Project - Par 03



## Final Project - Part 02

03. Building and Troubleshoot:

There are two sets of code I am working on, one is the Arduino RGB color sensor code, and the other one is the RGB diffused common anode LED lights. Then I will combine both of them when they work separately. The following steps are how I progress with the 
First, I try to connect the hardware, as you can see below. The schematic shows the connection between RGB sensor and Arduino Uno.

![arduino](/Final_2/Schematic1.png)

Then, I test out the RGB sensor library code with out with the Serial Monitor and fix any hardware problem if theres any. With the benefit of Serial Monitor I am able to adjust and test out the color sensitivity by looking at the data. 

![arduino](/Final_2/ezgif.com-video-to-gif.gif)

Second, I test the RGB diffused common cathode/anode LED lights by setting up the hardware as well as testing the code for RGB diffused common cathode/anode LED lights. During the process I was stuck with the problem not working for a long time because I did not know the difference between common cathode and anode. normally we use Common Cathode but in this case I had a common anode LED light and the code will work differently with common anode. 

![arduino](/Final_2/rgb_led_arduino_bb_sY5LOs2VhK.png)

You cannot distinguish between the common cathode and common anode type by just looking at the RGB led because both look same. You will have to make the connections to see that either it is common cathode or common anode.

The RGB led has one big lead than the other leads. In the common cathode case, it will be connected to GND and in the common anode case; it will be connected to 5V.

![arduino](/Final_2/common_cathode_and_common_anode_rgb_led_6yyt7t5x44.jpeg)

After figuring the Common cathode/anode difference and the RGB LED code works, its time for me to combine the two code together.

Lastly, I search online with information and other instructions I combine the two hardwares and testing the code out.

![arduino](/Final_2/ezgif.cof.gif)

02. Gathering Materials:

To make a notification amplifier, I gathered the following items:

Essential Items:

Arduino Uno Board

![arduino](/Final_2/light_50_MED.jpg)

Arduino RGB color sensor (tcs34725)

![RGBsensor](/Final_2/light_1334_MED.jpg)

resistors 220 ohm

![RGBsensor](/Final_2/4415447.jpg)

RGB diffused common cathode/anode LED lights (both cathode and anode works but be clear which one you get)

![RGBsensor](/Final_2/09264-LED_-_RGB_Diffused_Common_Cathode-03.jpg)
![RGBsensor](/Final_2/common_cathode_and_common_anode_rgb_led_6yyt7t5x44.jpeg)

Nice To Have Items:

 - Jumper wires

 - breadboard

The above shows the essential items and "nice to have" items to create this project. The essential items are the primary components, an Arduino board to load and run the codes. In this case, I use the Uno board. The Arduino RGB color sensor (tcs34725) that is able to detect the colors when the phone screen lights up. Lastly, the resistors that connect the board to the LED light.

Jumper wires and breadboard are the tools for fast prototyping, so I don't need to solder anything on to the Uno board.

01. Purpose:

![conceptdrawing](/Final_2/IMG_9161.jpg)

During the Covid-19 pandemic, the Stay At Home policy paused all work and study. We recommend to stay at home and do not go out unless it is necessary. This increased the time I stayed at home drastically. Since then, I go out only for grocery and home essentials once every 2-3 weeks. Because of this, I start to enjoy life, and I want to use this chance to limit myself from using phones all the time. It is so effective that I rarely check my phone, sometimes forget where it is at home. This caused my friends and family were not able to find me instantly. Slow or late reply becomes regular.

Because most of the time, I leave my phone on the table. When I am doing other things, I will not be able to check my phone all the time and to hear or see the notification. To balance the situation, I want to create a notification amplifier. 

After doing some testing, I found out that often missing notification is because the phone is lying flat on the table, which makes it harder to see for distance. Based on human's most used sense, sight, I want to create a notification lamp that signals me when there's a notification by making the notification amplifier verticle so I can see it from far away. 

## Final Project - Part 01

With the final project, I came up with 3 initial idea. Due to limited supply and other constraint, in the end I choose the Notification Amplifier. 

![FinalIdea01](/Final/IMG_notificationamplifier.jpg)

Third idea: Due to the Covid-19 pandemic, the SF Bay Area is carrying out WORK FROM HOME and SOCIAL DISTANCING policy. During the time at home I tend to leave my phone on the table and check the phone less than usual. the become a problem because people is hard to find me or for me to access information at first hand. Therefore I want to create a lamp that tells me if I have a notification coming in.

![FinalIdea01](/Final/IMG_washhandtimer.jpg)

Second idea: Due to the recent (2020 April) Covid-19 pandemic, I want to create something that can make our lives better in the situation. So I want to create a hand wash timer, where it will be placed beside the sink or on the wall. Whenever the user is washing hands, the most effective duration is at least 20 seconds in order to kill all the virus.

![FinalIdea01](/Final/IMG_dooropener.jpg)

![FinalIdea01](/Final/unnamed.jpg)

First idea: I am think of hacking the push bar door with a "Door Opener", because I in my daily life, I constainly gets lock out of this one-way door. If I want to get back inside the building, I will have to go all the way to another door. 



## Week 7 (Midterm)



### Midterm Arduino Code Please See File: "midterm_arduino_code/accelsensor"



In the future, I want to make the sensor and the LED lights on the jacket so it's easier to wear and more fashionable. I found some conductive thread that I think would work great on clothes, as well as other smaller boards (eg. Feather). I also want to make the backside of the jacket for slowing/stopping signals, which may use other sensors to activate. Overall I really enjoy making the project. Starting from scratch, solving problems step by step towards making a workable prototype. 


Then I attach all the components together. I bought some velcro strips for the handles on the sides, for straping the prototype on to the hand.

![week4-7_16](/Week_07/DE_midterm_process_small.gif)
![week4-7_15](/Week_06/IMG_9098.jpg)
![week4-7_14](/Week_06/IMG_9097.jpg)


## Week 6 (Midterm)

After I am done with testing and I start making the outer case with Rhino5 for prototype. Then I 3D printed in the lab.
Schematic:
![week4-7_09](/Week_07/Schematic.png)

![week4-7_13](/Week_04-07_01/RH03.PNG)
![week4-7_12](/Week_04-07_01/RH05.PNG)
![week4-7_11](/Week_04-07_01/RH04.PNG)
![week4-7_10](/Week_04-07_02/RH01.PNG)
![week4-7_09](/Week_04-07_02/RH02.PNG)

testing the sensor and the code, you will be able to find the X, Y, Z axis directions in the sensor and then fine tune it to the hand gestures of the rider rasing hand to signal turning left or right. After setting up the code for the sensor, then I add LED light code together to turn on/off when different gesture is made.

![week4-7_06](/Week_05/IMG_9068.jpg)
![week4-7_07](/Week_05/IMG_9069.jpg)
![week4-7_08](/Week_05/IMG_9096.jpg)


## Week 5 (Midterm)
I seperate the idea into smaller parts. For this project I am creating the hands part, where when rider raise the hand, LED lights will light up to signal turns.

 To do this I gethered the materials listed below:

   1. Arduino UNO board
   2. Adafruit Flora LSM303DLHM Accel + Compass Sensor
   3. Adafruit NeoPixel RGB LED lights (4)

![week4-7_04](/Week_04/IMG_9067.jpg)
![week4-7_03](/Week_04/IMG_9034.jpg)
![week4-7_02](/Week_04/IMG_9033.jpg)
![week4-7_01](/Week_04/IMG_9032.jpg)

## Week 4 (Midterm)
After some more inspiration, I changed my idea to a wearable tech (consider my background as jewelry designer). I want to make a Bike light that is attached to rider's hand and body, and is able to signal when turning left and right. My bigger idea is to create a suit for safer ride in the city. I want to create it with everyday clothes like denim jacket. with LED lights and sensors attached.
![week4-7_05](/Week_04-07_02/IMG_9015.jpg)

## Week 3
![week31](/images/week31.png)
![week32](/images/week32.png)
![week33](/images/week33.png)

## Week 2
-I like this project because as a chinese speaker, it is very natural for me to use the tones. But it is a good idea for a learning device.

https://www.dougiemann.co.uk/voiceblox
![week22](/images/week22.png)


LED Testing:

![week23](/images/week23.gif)
![week2](/images/week2.png)

## Week 1
