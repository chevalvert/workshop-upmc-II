# UE Outils de représentation et d'interaction :  communication entre Processing et Arduino


# Librairie
[SensorShield Library](https://github.com/MAKIO135/sensorShieldLib) de Lionel Radisson

# Shields de capteurs
[overview/sensorshield-1-2.png](overview/sensorshield-1-2.png)
[overview/sensorshield1-schematics.png](overview/sensorshield1-schematics.png)
[overview/sensorshield2-schematics.png](overview/sensorshield2-schematics.png)


## Shield n1
- [Photoresistor](https://www.sparkfun.com/products/9088) → Lumière → `capteurLDR`
- [Force Sensitive Resistor](https://www.sparkfun.com/products/9375) → Force (pression) → `capteurFSR`
- [Flex sensor](https://www.sparkfun.com/products/10264) → Flexion → `capteurFLEX`
- [Pulse sensor](https://www.sparkfun.com/products/11574) → Pouls → `capteurPOULS`
- [Ultrasonic Range Finder](https://www.sparkfun.com/products/639) → Distance → `capteurSONAR`
- [Humidity sensor](https://www.adafruit.com/product/1899) → Humidité → `humidity` et `temperature`

[→ Programme data input Shield n1](/sensorShield_1)


## Shield n2
- [Photoresistor](https://www.sparkfun.com/products/9088) → Lumière → `capteurLDR`
- [Piezo Vibration Sensor](https://www.sparkfun.com/products/9197) → Vibration → `capteurPIEZO`
- [Soft potentiometer](https://www.sparkfun.com/products/8680) → Variation de résistance par le toucher → `capteurPOT` 
- [Temperature Sensor](https://www.sparkfun.com/products/10988) → Température → `capteurTEMP` 
- [Triple Axis Accelerometer](https://www.sparkfun.com/products/12756) → Accélération sur trois axes → `inclinaison` / `xValue` / `yValue` / `zValue`  

[→ Programme data input Shield n2](/sensorShield_2)


## License

[MIT.](https://tldrlegal.com/license/mit-license)
