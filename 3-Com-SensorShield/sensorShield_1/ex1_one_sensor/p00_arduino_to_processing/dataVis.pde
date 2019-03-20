void dataVis() {
  background(255);

  // textes
  fill(0);
  text("LUMIÈRE", 125, 200); 
  noFill();

  ////// LIGHT //////
  mappedLightValue =  map(lightValue, 140, 420, 0, 255);
  ellipse(150, 100, mappedLightValue, mappedLightValue);
}