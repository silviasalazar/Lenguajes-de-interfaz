# 1.1. Lectura Previa
## 1.1.1. Características generales de la arquitectura ARM
ARM es una arquitectura RISC (Reduced Instruction Set Computer=Ordenador
con Conjunto Reducido de Instrucciones) de 32 bits, salvo la versión del core ARMv8-
A que es mixta 32/64 bits (bus de 32 bits con registros de 64 bits). Se trata de una
arquitectura licenciable, quiere decir que la empresa desarrolladora ARM Holdings
diseña la arquitectura, pero son otras compañías las que fabrican y venden los chips,
llevándose ARM Holdings un pequeño porcentaje por la licencia.
### Registros
La arquitectura ARMv6 presenta un conjunto de 17 registros (16 principales más
uno de estado) de 32 bits cada uno.

Registros generales:
| R0  	|
|-----	|
| R1  	|
| R2  	|
| R3  	| 
| R4  	|
| R5  	|
| R6  	|
| R7  	|
| R8  	|
| R9  	|
| R10 	|
| R11 	|
| R12 	|

Registros especiales:
| SP (R13) 	| Stack Pointer ó Puntero de Pila. Sirve como puntero para almacenar variables locales y registros en llamadas a funciones.               |
|-----------|-----------------------------------------------------------------------------------------------------------------------------------------|
| LR (R14) 	|Link Register ó Registro de Enlace. Almacena la dirección de retorno cuando una instrucción BL ó BLX ejecuta una llamada a una rutina.   |
| PC (R15) 	|Program Counter ó Contador de Programa. Es un registro que indica la posición donde está el procesador en su secuencia de instrucciones. |


Registro CPSR:

Almacena las banderas condicionales y los bits de control. Los
bits de control definen la habilitación de interrupciones normales (I), interrupciones rápidas (F), modo Thumb
(T) y el modo de operación de la CPU.
| N 	| Z 	| C 	| V 	| sin usar 	| I 	| F 	| T 	| modo 	|
|---	|---	|---	|---	|----------	|---	|---	|---	|------	|

## 1.1.2. El lenguaje ensamblador
El ensamblador es un lenguaje de bajo nivel que permite un control directo de la CPU y todos los elementos asociados. Cada línea de un programa ensamblador consta de una instrucción del procesador y la posición que ocupan los datos de esa instrucción.
Generalmente, y dado que crear programas un poco extensos es laborioso, el
ensamblador se utiliza como apoyo a otros lenguajes de alto nivel para 3 tipos de situaciones:
- Operaciones que se repitan un número elevado de veces.
- Cuando se requiera una gran velocidad de proceso.
- Para utilización y aprovechamiento de dispositivos y recursos del sistema.

## 1.1.3. El entorno
Los pasos habituales para hacer un programa (en cualquier lenguaje) son los siguientes:
- El programa se escribe en el lenguaje fuente mediante un editor de programas. 
- El resultado es un fichero en un lenguaje que puede entender el usuario, pero no la máquina. 
- Para traducirlo a lenguaje máquina hay que utilizar un programa traductor. 
- Un fichero ejecutable contiene el programa traducido más una serie de códigos que debe tener todo programa que vaya a ser ejecutado en una máquina determinada. 
- El encargado de unir el código del programa con el código de estas librerías es un programa llamado montador (linker) que genera el programa ejecutable
Utilizaremos el editor nano para crear y editar los módulos fuente de nuestros programas. 

## 1.1.4. Configuración del entorno para realizar prácticas en casa
En nuestro caso seria lo que hicimos en clase, resumidamente los pasos son los siguientes:
- 1. Descargamos el emulador QEMU
- 2. Descargamos el kernel de linux
- 3. Creamos una carpeta nueva en ella pondremos nuestras descargas
- 4. Abrimos el simbolo del sistema (CMD)
- 5. Lo ejecutamos

## 1.1.5. Aspecto de un programa en ensamblador
*La estructura más general de un módulo fuente es:*
- **Sección de datos.** Viene identificada por la directiva .data. En esta zona se definen todas las variables que utiliza el programa con el objeto de reservar memoria para contener los valores asignados.
- **Sección de código.** Se indica con la directiva .text, y sólo puede contener código o datos no modificables.

## Ensamblar y linkar un programa
La traducción o ensamblado de un módulo fuente se realiza con el programa Gnu Assembler, con el siguiente comando:

`as -o nombreprograma.o nombreprograma.s`

El as genera un fichero **nombreprograma.o.**

Para montar (linkar) hay que hacer: `gcc -o nombreprograma nombreprograma.o`

Una vez hecho ésto, ya tenemos un fichero ejecutable (nombreprograma) que podemos ejecutar o depurar con el gdb.

## 1.2. Enunciados de la práctica
Una vez hecho ésto, ya tenemos un fichero ejecutable (nombreprograma) que podemos ejecutar o depurar con el gdb.

Como se muestra a continuación:

![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/nano_intro.PNG)
![imagen](https://github.com/silviasalazar/Lenguajes-de-interfaz/blob/main/Imagenes/ensamblar.PNG)
