color drawingColor = color(0);

// Ce bloc est exécuté une seule fois au lancement du programme
void setup () {
  // Fenêtre de 768px de large par 1024px de haut
  size(768, 1024);
  // Arrière-plan de la fenêtre blanc
  background(255);
}


// Ce bloc est exécuté en boucle, 60 fois par secondes
void draw () {
  if (mousePressed == true) { // Si la souris est cliquée…
    stroke(drawingColor);     // …on dessine un trait de la couleur "drawingColor"…
    strokeWeight(10);         // …de 10px d'épaisseur
    line(pmouseX, pmouseY, mouseX, mouseY); // …de la position précédente de la souris, jusqu'à la position actuelle
  }
}

// Ce bloc est exécuté à chaque fois que l'utilisateur appuie sur une touche du clavier
void keyPressed () {
  if (key == 'R') {  // Si la touche appuyée est r majuscule…
    background(255); // …alors on applique un arrière-plan blanc
  }

  if (key == 'S') {  // Si la touche appuyée est s majuscule…
    save("mon-beau-dessin.png");  // …alors on sauvegarde l'image actuelle
  }

  if (key == ' ') {  // Si la touche appuyée est la barre d'espace…
    drawingColor = color(random(255), random(255), random(255)); // …alors on change aléatoirement la couleur de dessin
  }
}

// Ce bloc est exécuté à chaque fois que l'utilisateur clique
void mousePressed () {

}
