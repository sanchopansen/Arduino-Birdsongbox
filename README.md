# Arduino-Birdsongbox

This project is a little Arduino powered DIY-Birdbox that plays relaxing sounds (e.g. birdsongs, rain sounds, ocean sounds) once you enter a room and turn on the lights. A photoresistor detects light and triggers an mp3-module that plays the sound.

The current program plays a mp3-file only for one time once a light is detected. That means the light has to be turned off and on again to trigger a new sound-event.

## Used Modules
- Arduino Pro Mini (5V) ([from Aliexpress](https://www.aliexpress.com/item/1005005682257328.html?spm=a2g0o.order_list.order_list_main.43.33761802lrz29v))
- DFPlayer Mini ([from Aliepxress](https://www.aliexpress.com/item/1005005656568976.html?spm=a2g0o.order_list.order_list_main.94.33761802lrz29v))
- Photo Resistor (KY-018) ([from Aliexpress](https://www.aliexpress.com/item/32820189174.html?spm=a2g0o.order_list.order_list_main.48.33761802lrz29v))
- Speaker (3W) ([from ALiexpress](https://www.aliexpress.com/item/1005005699690954.html?spm=a2g0o.order_list.order_list_main.98.1f331802L8Zf65))
- Resistor (1KΩ)
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


