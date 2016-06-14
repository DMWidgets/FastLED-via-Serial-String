# Analog LED control via ESP8266

MQTTLEDCONTROL.ino

grabs vars from MQTT broker (io.adafruit.com) and with the help of their useful example code, outputs the corresponding values to the analog RGB Strip. Allows independent control of hue, saturation, and brightness via the FastLED library.

# analogLEDviaSerial.ino
//expansion on code provided by FastLED (original [here](http://platformio.org/lib/show/126/FastLED))

serial/color code parses string from serial, matches it to the list of [HTMLColorCodes](http://fastled.io/docs/3.1/group___pixeltypes.html#gaeb40a08b7cb90c1e21bd408261558b99) provided in the FastLED API and produces the chosen color


-forthcoming python script-

1. Parses clipboard (in this case, specifically a copied list of colors and hex values from the [FastLED API reference](http://fastled.io/docs/3.1/)) 
2. Iterates through matched list and produces an "if" statement for each color
2. Writes to file a list of these expression for use in Arduino in conjuction with the [FastLED library](http://fastled.io/)
