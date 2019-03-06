# Description du programme

- Dessine lorsque l'utilisateur reste appuyé sur la souris.
- Annule le dernier trait lorsque l'utilisateur appuie sur <kbd>z</kbd>.

# Déroulé des actions programmées

- Ouvrir une fenêtre de 768px de large par 1024px de haut
  
- 60 fois par seconde, pour chaque valeur du tableau `strokes`…
  - …on trace une ligne de la première position à la seconde.

- Si la souris est cliquée…
  - …on stocke dans un tableau `strokes` la position précédente de la souris et la position actuelle.

- Si la touche <kbd>z</kbd> est appuyée…
  - on efface la dernière valeur du tableau `strokes`
