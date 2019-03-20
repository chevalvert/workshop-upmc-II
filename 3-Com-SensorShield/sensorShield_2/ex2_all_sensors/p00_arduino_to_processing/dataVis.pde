void dataVis() {
  
  background(255);

  // textes
  fill(0);
  text("LUMIÈRE", 125, 200); 
  text("VIBRATION", 265, 200);
  text("POTENTIOMÈTRE", 400, 200);
  text("TEMPÉRATURE", 560, 200);
  text("X ACCEL", 125, 500); 
  text("Y ACCEL", 270, 500);
  text("Z ACCEL", 420, 500);
  noFill();

  ////// LIGHT //////  
  mappedLightValue =  map(lightValue, 280, 600, 0, 150);
  ellipse(150, 100, mappedLightValue, mappedLightValue); 

  ////// VIBRATION //////  
  mappedVibrationValue =  map(vibrationValue, 1023, 0, 10, 150);
  ellipse(300, 100, mappedVibrationValue, mappedVibrationValue);

  ////// POT //////  
  mappedPotValue =  map(potValue, 1023, 0, 10, 150);
  ellipse(450, 100, mappedPotValue, mappedPotValue);

  ////// TEMP //////  
  mappedTempValue =  map(tempValue, 17, 27, 10, 150);
  ellipse(600, 100, mappedTempValue, mappedTempValue);

  ////// X ////// 
  mappedXValue =  map(xValue, -2, 2, 0, 150);
  ellipse(150, 400, mappedXValue, mappedXValue);

  ////// Y ////// 
  mappedYValue =  map(yValue, -2, 2, 0, 150);
  ellipse(300, 400, mappedYValue, mappedYValue);

  ////// Z ////// 
  mappedZValue =  map(zValue, -2, 2, 0, 150);
  ellipse(450, 400, mappedZValue, mappedZValue);

  // inclinaison
  if (orientation == 1) {    
    text("Portrait Up", 575, 500);
  } else if (orientation == 2) {
    text("Portrait Down", 575, 500);
  } else if (orientation == 3) {
    text("Landscape Right", 575, 500);
  } else if (orientation == 4) {
    text("Landscape Left", 575, 500);
  } else {
    text("Flat", 575, 500);
  }
}