// Pour toutes questions sur ce programme : arnaud@chevalvert.fr

ArrayList<PVector[]> strokes = new ArrayList<PVector[]>();

void setup () {
  size(768, 1024);
}

void draw () {
  background(255);

  for (PVector[] stroke : strokes) {
    stroke(0);
    strokeWeight(10);
    line(stroke[0].x, stroke[0].y, stroke[1].x, stroke[1].y);
  }

  if (mousePressed == true) {
    PVector[] stroke = {
      new PVector(pmouseX, pmouseY),
      new PVector(mouseX, mouseY)
    };
    strokes.add(stroke);
  }
}

void keyPressed () {
  if (key == 'z') {
    if (strokes.size() > 0) {
      strokes.remove(strokes.size() - 1);
    }
  }
}
