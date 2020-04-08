# LAB0-ProgAv

## Un proyecto en Git se llama repositorio, este tendrá todos los archivos de cualquier formato. Cada uno tendra su propia rama en la que trabajar y una mas que será la rama master.


## Mas Info https://github.com/joshnh/Git-Commands


### Para instalar git
en consola de bash
```
sudo apt install git-all
git --version
```


### Para descargarse el proyecto
en consola: ir hasta donde se quiera descargar - 
copiar el https en el boton verde de la pagina
```
git clone https://github.com/eugenio-perdomo/LAB0-ProgAv.git
```


### Para subir algo a la rama de uno (Por ahora no usaremos este metodo): 
```
-en la consola llegar hasta el la carpeta del proyecto
-asegurarse que guardaron las cosas
git status
git add main.cpp
git commit -m "Hoy hice esto: ..."
git push origin master
```
Recuerden que no siempre van a estar pusheando a master sino que a su rama
