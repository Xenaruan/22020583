# 22020583
一：
<b>Design sketches</b>
<br>
The design solution uses an ultrasonic sensor and Touchdesigner to generate interaction with Serial, when the ultrasonic sensor detects the distance, /1 cm is 29.15 microseconds, after sending to receiving the return wave, the sound travels 2 times the distance. The prediction divided by the actual distance is 1 cm, corresponding to 58.3 microseconds. In fact, the whole distance measurement process is measured from the time the sound wave is sent to the time the return wave is received, and the first distance in your program is actually time us.
So to convert to distance cm, you have to divide by 58, but of course dividing by 58.3 may be more accurate. (The sensitivity of 58.3 decreases later on, so adjust to 50.2, distance = duration / 50.2.
When distance is detected < 60, the ball in Touchdesigner starts to interact.


<b>Sketch</b>
<br>
![微信图片_20230626105205](https://github.com/Xenaruan/22020583/assets/116006841/ee7a968f-c9a6-4cec-a198-1e4ca04abe62)
<br>
<br>
二：
设计Touchdesigner


<img width="400" alt="TD3" src="https://github.com/Xenaruan/22020583/assets/116006841/9f684cce-c823-4b68-b5f3-c14b4f4cc7e8">
<img width="400" alt="TD2" src="https://github.com/Xenaruan/22020583/assets/116006841/264e7a14-c94a-4b76-b63b-e7ed84224e68">
<img width="721" alt="td1" src="https://github.com/Xenaruan/22020583/assets/116006841/98dbfd3d-5bba-43a3-ba47-dba0bce6445a">



三：
<b>加入arduino</b>
<br>
1：超声波传感器
<img width="778" alt="monitu 2" src="https://github.com/Xenaruan/22020583/assets/116006841/65ba5f84-273a-481e-916d-e5c96b1264c6">
<img width="409" alt="加led小灯" src="https://github.com/Xenaruan/22020583/assets/116006841/702252b8-512c-49a5-b0b6-66496fe3664a">


https://github.com/Xenaruan/22020583/assets/116006841/b96daae5-799c-43cb-afb0-446c96b896da
![GIF 2023-6-26 0-54-52](https://github.com/Xenaruan/22020583/assets/116006841/51e30098-d262-4527-b68f-acece4f81b19)
![GIF 2023-6-26 0-52-06](https://github.com/Xenaruan/22020583/assets/116006841/f82f513d-47b3-483d-ac4a-a1d1f13e3e63)
// Two serial displays

<br>
<br>

4：
The use of Serial enables the digital transmission of ultrasound to the Touchdesigner
![image](https://github.com/Xenaruan/22020583/assets/116006841/d11d3b56-c2d8-4fcc-a71f-22be1d758e98)
TD截图

<img width="305" alt="微信截图_20230626010826" src="https://github.com/Xenaruan/22020583/assets/116006841/967b1aea-2eb2-4f9e-858c-3d94004b72e2">
Arduino screenshot
When I was debugging I found that the distance of the bulb was much shorter than predicted because the distance sensed by the sensitive sensor switch in Touchdesigner /50 is much shorter than the regular short change so the distance itself will be much further than predicted.


https://github.com/Xenaruan/22020583/assets/116006841/6a004275-80d3-4969-80a3-eabdbd122595
<b>Ultrasonic sensor welding success</b>
<br>

![solder111](https://github.com/Xenaruan/22020583/assets/116006841/d715584e-53b6-4775-9bb2-02a658b5daa8)

![solder1](https://github.com/Xenaruan/22020583/assets/116006841/a8c3d208-73ca-4985-b250-19d8acf228fe)



<b>LED Lamp distance test video<b>

https://github.com/Xenaruan/22020583/assets/116006841/40e3d56c-1f1b-4460-89e4-384a96ee92e2







<b>Final results</b>
<br>

![GIF 2023-6-26 10-56-23](https://github.com/Xenaruan/22020583/assets/116006841/a4d79c86-1bba-4225-9656-13fd7a4e3fc7)


https://github.com/Xenaruan/22020583/assets/116006841/f0c4c5cd-0cd2-4bba-9811-9eaa122a9cc1




