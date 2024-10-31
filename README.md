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
Bild...
![](https://github.com/sanchopansen/Arduino-Birdsongbox/blob/b55efcbf96f68ed82781ca9670482a5de9a27ee4/schematic/birdsongbox_simple_schematic.png)


## Pinout
### SD Card > Arduino pinout:
```
SCK  (5) -> Pin 13 must be!
CS (1)   -> Pin 10 (Chip select)
MOSI (2) -> Pin 11 must be!
MISO (7) -> Pin 12 must be!
```
## Birdhouse
Bild...

Link zum Sketchup: 
## References and used libraries
- [DfPlayerMini_Fast](https://github.com/PowerBroker2/DFPlayerMini_Fast) by PowerBroker2
- [Low-Power](https://github.com/rocketscream/Low-Power/tree/master) by rocketscream


