## Práctica B2.1. RaspbianOS
#### 1. Instalar QEMU en Windows 10 de 64 bits
Vaya al siguiente sitio web https://www.qemu.org/download/ y descargue el último instalador de QEMU para Windows de 64 bits.
![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/downloadqemu.PNG)
#### 2. Descargar un Kernel de Linux
Vaya al siguiente sitio web https://github.com/dhruvvyas90/qemu-rpi-kernel y descargue un kernel adecuado, p. Ej. kernel-qemu-4.4.34-jessie
#### 3. Descargar imagen del sistema operativo Raspbian
- Vaya al siguiente sitio web http://downloads.raspberrypi.org/raspbian/images/ y descargue la última imagen, p.Ej.2019-06-20-raspbian-buster.zip
- Descomprima el archivo de imagen en una carpeta, p.Ej./Temp/raspbian/2019-06-20-raspbian-buster.img
#### 4. Crear un archivo bat de Windows
Ejecute un editor de texto.
Escriba las siguientes líneas.
```
"c:\Program Files\qemu\qemu-system-arm.exe" ^
-kernel kernel-qemu-4.4.34-jessie ^
-cpu arm1176 ^
-m 256 ^
-M versatilepb ^
-serial stdio ^
-append "root=/dev/sda2 rootfstype=ext4 rw" ^
-hda 2019-06-20-raspbian-buster.img ^
-net nic ^
-net user,hostfwd=tcp::5022-:22 ^
-no-reboot
```
- Guardar como un archivo bat
**NOTA:** Para ello creamos una carpeta llamada rpi y en ella guadamos el archivo .bat junto con la imagen
#### 5. Ejecutar QEMU
Abre un símbolo del sistema.
Cambie el directorio a la carpeta que contiene el núcleo y los archivos de imagen, cambie la ruta segun sea pertinente Escriba el comando:
`C:\> nombre_archivo.bat`
Después de ejecutarlo aparecerá la ventana de QEMU ejecutando Raspbian OS

![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/QEMU.PNG)

Para correr nuestros programas CPP y helloWorld.s tenemos que escribir en la terminal los siguientes comandos:
`sudo apt-get update`
`sudo apt-get install build-essential` 

El paquete build essential lleva la mayoría de las herramientas, entre estas el gcc

Después clonaremos el repositorio con nuestros programas
`git clone https://github.com/silviasalazar/Lenguajes-de-interfaz.git`

Para ejecutar los programas escribimos lo siguiente:
`g++ o- nombre nombre.cpp`

Resultados:

![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/helloWorld.PNG)
![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/AdivinaNumero.PNG)
![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/AdivinarNumeroCercano.PNG)
![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/DirectrizyFoco.PNG)
![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/Pendiente.PNG)

