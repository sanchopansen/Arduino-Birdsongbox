# Arduino-Birdsongbox

This project is a little Arduino powered DIY-Birdbox that plays relaxing sounds (e.g. birdsongs, rain sounds, ocean sounds) once you enter a room and turn on the lights. A photoresistor detects light and triggers an mp3-module that plays the sound.

The current program plays a mp3-file only for one time once a light is detected. That means the light has to be turned off and on again to trigger a new sound-event.

## Used Modules
- Arduino Pro Mini (5V) (I used a cheap copy from Aliexpress)
- ...
- ...
- ...



## Simplified schematic
Bild...
![](https://github.com/rediculum/SoundBox/raw/master/SoundBox_fritzing.png)

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
- Dfplayer mini fast (oder so) https://github.com/TMRh20/TMRpcm or install it from Arduino IDE Lib Manager
- lowpower....


