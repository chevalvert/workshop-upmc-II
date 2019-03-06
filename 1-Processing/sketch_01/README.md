# Description du programme

- Dessine lorsque l'utilisateur reste appuyé sur la souris.
- Sauvegarde lorsque l'utilisateur appuie sur <kbd>S</kbd>.
- Efface l'écran lorsque l'utilisateur appuie sur <kbd>R</kbd>.
- Change de couleur aléatoirement lorsque l'utilisateur appuie sur <kbd>espace</kbd>.

# Déroulé des actions programmées

- Ouvrir une fenêtre de 768px de large par 1024px de haut
- Afficher un arrière-plan blanc
  
- Si la souris est cliquée…
  - …on dessine un trait de la couleur définie dans `drawingColor`…
  - …de 10px d'épaisseur…
  - …de la position précédente de la souris, jusqu'à la position actuelle

- Si la touche appuyée est <kbd>R</kbd>…
  - …alors on applique un arrière-plan blanc

- Si la touche appuyée est <kbd>S</kbd>…
  - …alors on sauvegarde l'image actuelle

- Si la touche appuyée est <kbd>espace</kbd>…
  - …alors on change aléatoirement la couleur de dessin définie dans `drawingColor`
