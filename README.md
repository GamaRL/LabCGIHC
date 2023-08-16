# Laboratorio de Computación Gráfica e Interacción Humano Computadora
- **Semestre:** 2024-1
- **Alumno:** Ríos Lira, Gamaliel

## Instrucciones de compilación
1. Dirigirse al directorio correspondiente a la práctica de interés.
```bash
$ cd <directory>
```

2. Crear un directorio llamado `build/` dentro del directorio anterior y cambiarse a él.
```bash
$ mkdir build/ && cd build/
```

3. Ejecutar `CMake` para crear el `Makefile`.
```bash
$ cmake ..
```

4. Construir el proyecto haciendo uso del `Makefile` generado en el paso anterior.
```bash
$ make
```

5. Dentro del directorio `build/`, se creará un archivo ejecutable, el cual se puede ejecutar con el siguiente comando.
```bash
$ ./<file>    # i.e. `./project`
```