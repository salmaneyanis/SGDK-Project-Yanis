# SGDK-Project-Yanis
Petit Jeu 2D développé avec SGDK (Sega Genesis Development KitE) sur VSCODE


## 🚀 Lancement du projet

### 0. Playlist Tuto (il n'y aura pas eu de projet sans cette playlist de vidéo)

  https://youtube.com/playlist?list=PL1xqkpO_SvY2_rSwHTBIBxXMqmek--GAb&si=f_9oXXz4f1iCXiA7

### 1. Prérequis
- **SGDK** installé (par défaut dans `C:\SGDK`)
- **Java** (nécessaire pour `rescomp.jar`)
- **VS Code** avec l’extension C/C++

### 2. Structure du projet

res/ → Ressources (images, sons, palettes, .res)
src/ → Code source C
out/ → Fichiers compilés (ROM, objets, symboles)
.vscode/ → Configurations de build VS Code


### 3. Compilation

Dans VS Code (Compiler et Lancer le jeu) : (Ctrl+ p) + >Genesis Code: Compile & Run Project

Le fichier ROM sera généré ici :
out/rom.bin


### Outils utiles

SGDK sur GitHub
Tiled Palette Quantizer : pour convertir les images
Gens Emulator
LibreSprite
