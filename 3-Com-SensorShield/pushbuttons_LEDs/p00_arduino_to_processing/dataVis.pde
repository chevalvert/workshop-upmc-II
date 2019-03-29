void dataVis() {

  background(0);

  // textes
  fill(255);
  stroke(255);
  text("LEFT", width/4, height/2); 
  text("RIGHT", width-width/4, height/2);
  text("TOP", width/2, height/4);
  text("BOTTOM", width/2, height-height/4);

  noFill();
  ellipse(width/4, (height/2)-5, 100, 100);
  ellipse(width-width/4, (height/2)-5, 100, 100);
  ellipse(width/2, (height/4)-5, 100, 100);
  ellipse(width/2, height-(height/4)-5, 100, 100);

  if (btnLeft == 0) {    
    fill(255);
    ellipse(width/4, (height/2)-5, 100, 100);
  } else if (btnRight == 0) {    
    fill(255);
    ellipse(width-width/4, (height/2)-5, 100, 100);
  } else if (btnTop == 0) {    
    fill(255);
    ellipse(width/2, (height/4)-5, 100, 100);
  } else if (btnBottom == 0) {    
    fill(255);
    ellipse(width/2, height-(height/4)-5, 100, 100);
  }
}