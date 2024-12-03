# Arduino-Birdsongbox

This project is a little Arduino  DIY-Birdbox that plays relaxing sounds (e.g. birdsongs, rain sounds, ocean sounds) once you enter a room and turn on the lights. A photoresistor detects light and triggers an mp3-module that plays the sound.

The current program plays a mp3-file only for one time once a light is detected. That means the light has to be turned off and on again to trigger a new sound-event.

The battery shield supplies 3.3V to power the Arduino and 5V to power the mp3 module. To ensure communication between the Arduino and the DFPLayer Mini with their different voltages, a 2-channel logic level converter is connected in between.

Thanks to the battery shield the Birdsongbox can be powered by battery or by an external power source. I tried to increase battery life by removing the power-leds of the arduino and the photo resistor module and using the LowPower library to set the arduino into deepsleep state when nothing happens. The photo-resistor works as a trigger to wake up the arduino once a light is detected.

## Used Modules
- Arduino Pro Mini (3.3V) ([from Aliexpress](https://www.aliexpress.com/item/1005005682257328.html?spm=a2g0o.order_list.order_list_main.170.21ef1802MG1nAd))
- DFPlayer Mini ([from Aliepxress](https://www.aliexpress.com/item/1005005656568976.html?spm=a2g0o.order_list.order_list_main.94.33761802lrz29v))
- Photo Resistor (LM393) ([from Aliexpress](https://www.aliexpress.com/item/1005006157949482.html?spm=a2g0o.order_list.order_list_main.5.21ef1802MG1nAd))
- Speaker (3W) ([from ALiexpress](https://www.aliexpress.com/item/1005005699690954.html?spm=a2g0o.order_list.order_list_main.98.1f331802L8Zf65))
- 2-Channel Logic Level Converter ([from Aliexpress](https://www.aliexpress.com/item/1005002976498419.html?spm=a2g0o.order_list.order_list_main.52.21ef1802MG1nAd))
- Battery (18650 3.7V)
- Battery Shield ([from Aliexpress](https://www.aliexpress.com/item/1005007052223730.html?spm=a2g0o.order_list.order_list_main.33.33761802lrz29v))
- SD-Card
- Little Breadboard

## Simplified schematic

![](https://github.com/sanchopansen/Arduino-Birdsongbox/blob/b55efcbf96f68ed82781ca9670482a5de9a27ee4/schematic/birdsongbox_simple_schematic.png)

## Birdhouse
I built a small wooden birdhouse as a "case" for the arduino project. All electronics are inside the house. There is a big hole in the front for the speaker and a pretty small one for the LDR-sensor.

![](https://github.com/sanchopansen/Arduino-Birdsongbox/blob/bf54da6a8fc876d26d508ed0c24a10647eb99b33/pictures/pic1.jpeg)

There is a [Sketchup 3D Model](https://app.sketchup.com/share/tc/europe/pDmHIHXdnNE?stoken=lQ4t4gSU8HMbl9oz2908T24pAfAkvAikkbDwahcQJXhCgqBh8PKOoobSniSJDw6E&source=web!) available for those who are interested in recreating it:

![](https://github.com/sanchopansen/Arduino-Birdsongbox/blob/02a27dd52c7891c56a3dc949c97e2f10bf2a3a6f/pictures/sketchup_model.png)



## References and used libraries
- [DfPlayerMini_Fast](https://github.com/PowerBroker2/DFPlayerMini_Fast) by PowerBroker2
- [Low-Power](https://github.com/rocketscream/Low-Power/tree/master) by rocketscream


