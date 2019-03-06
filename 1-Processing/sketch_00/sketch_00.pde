/**
 * sketch_00
 */

void setup () {
  // Fenêtre de 800 pixels de large par 800 pixels de haut
  size(800, 800);
}

void draw () {
  // Arrière-plan en gris 100
  // background(100) revient à écrire background(100, 100, 100)
  background(100, 100, 100);

  // Le manche de la poêle est un rectangle sans contour ( noStroke ),
  // rempli de gris 20 ( fill(20) ),
  // placé en [x=350;y=400], de 100 pixels de haut par 400 pixels de large.
  noStroke();
  fill(20);
  rect(350, 400, 100, 400);

  // La poêle est une ellipse rempli en gris 50 ( fill(50) ),
  // avec un contour de couleur gris 20 ( stroke(20) )
  // et épais de 50 pixels ( strokeWeight(50) ).
  // Son centre est en [x=400;y=400], et elle fait 400x400 pixels.
  fill(50);
  stroke(20);
  strokeWeight(50);
  ellipse(400, 400, 400, 400);

  // L'oeuf a un contour blanc large de 40px, rempli d'un jaune [Rouge=255, Vert=255, Bleu=127]
  stroke(255);
  strokeWeight(40);
  fill(255, 255, 127);
  ellipse(400, 400, 150, 150);
}
