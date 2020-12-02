
![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/Cool%20Text%20-%2036%20ARM%2064%20bits%20370323854432618.png)

Generar la imagen y visualizar los recursos de su PC:

`docker build --tag arm64/lenginterfaz:compilador .` 

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/build.PNG)

`docker images`

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/images.PNG)

Para correrlo:

`docker run  -it --rm --name ensamblador arm64/lenginterfaz:compilador`

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/run.PNG)

Para clonar nuestro repositorio con el programa:

`git clone dirección`

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/git_clone.PNG)

Podemos configurarlo:
```
git config --global user.name "silviasalazar"
git config --global user.email "silvia.salazar18@tectijuana.edu.mx"
```

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/config.PNG)

Podemos visualizar nuestro código:

`cat helloworld.s`

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/cat.PNG)

## Make
Para utilizar make tenemos que tener nuestro archivo Makefile:
```bash
#Makefile
all: helloworld
helloworld: helloworld.o
	ld -o $@ $+
helloworld.o: helloworld.s
	as -g -mfpu=vfpv2 -o $@ $<
clean:
	rm -vf helloworld *.o

```
![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/make.PNG)

Resultado:

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/ejecutar.PNG)

## GEF

Instalamos GEF de forma manual:

```
wget -O ~/.gdbinit-gef.py -q http://gef.blah.cat/py
$ echo source ~/.gdbinit-gef.py >> ~/.gdbinit
```

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/installgef.PNG)

Podemos configurar nuestro GEF:

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/gef_config.PNG)

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/gef_help.PNG)

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/usegdb.PNG)

Al finalizar utilizamos `make clean`

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/makeclean.PNG)

## hello-world desde Docker
Descargamos la imagen:

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/imagedocker.PNG)

La corremos:

![](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/hello-world64/images/hellodocker.PNG)
