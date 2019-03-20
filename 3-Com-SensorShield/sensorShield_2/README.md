# UE Outils de représentation et d'interaction :  communication entre Processing et Arduino


# Librairie
[SensorShield Library](https://github.com/MAKIO135/sensorShieldLib) de Lionel Radisson

# Shields de capteurs
[overview/sensorshield-1-2.png](overview/sensorshield-1-2.png)
[overview/sensorshield2-schematics.png](overview/sensorshield2-schematics.png)

## Shield n2
- [Photoresistor](https://www.sparkfun.com/products/9088) → Lumière → `capteurLDR`
- [Piezo Vibration Sensor](https://www.sparkfun.com/products/9197) → Vibration → `capteurPIEZO`
- [Soft potentiometer](https://www.sparkfun.com/products/8680) → Variation de résistance par le toucher → `capteurPOT` 
- [Temperature Sensor](https://www.sparkfun.com/products/10988) → Température → `capteurTEMP` 
- [Triple Axis Accelerometer](https://www.sparkfun.com/products/12756) → Accélération sur trois axes → `inclinaison` / `xValue` / `yValue` / `zValue` 

### Exercice 1 : un capteur
- [Photoresistor](https://www.sparkfun.com/products/9088) → Lumière → `capteurLDR`

[→ Programme data input un capteur](/ex1_one_sensor)

### Exercice 2 : tous les capteurs du shield

- [Photoresistor](https://www.sparkfun.com/products/9088) → Lumière → `capteurLDR`
- [Piezo Vibration Sensor](https://www.sparkfun.com/products/9197) → Vibration → `capteurPIEZO`
- [Soft potentiometer](https://www.sparkfun.com/products/8680) → Variation de résistance par le toucher → `capteurPOT` 
- [Temperature Sensor](https://www.sparkfun.com/products/10988) → Température → `capteurTEMP` 
- [Triple Axis Accelerometer](https://www.sparkfun.com/products/12756) → Accélération sur trois axes → `inclinaison` / `xValue` / `yValue` / `zValue` 

[→ Programme data input tous les capteurs](/ex2_all_sensors)


## License

[MIT.](https://tldrlegal.com/license/mit-license)
