# Laboratorio de Computación Gráfica e Interacción Humano Computadora
- **Semestre:** 2024-1
- **Alumno:** Ríos Lira, Gamaliel

## Configuración del proyecto
1. Dentro del archivo `CMakeLists.txt` se puede modificar el comando 
   `project()` para que reciba el nombre del proyecto en cuestión.

## Instrucciones de compilación
1. Dirigirse al directorio correspondiente a la práctica de interés.
```bash
cd <directory>
```

2. Crear un directorio llamado `build/` dentro del directorio anterior.
```bash
mkdir build/
```

3. Ejecutar `CMake` para crear el `Makefile`.
```bash
cmake -B build/
```

4. Construir el proyecto haciendo uso del `Makefile` generado en el paso anterior.
```bash
make -C build/
```

5. Dentro del directorio `build/`, se creará un archivo ejecutable, el cual se puede ejecutar con el siguiente comando.
```bash
./build/<file>    # i.e. `./build/project`
```

6. De igual forma, si se cuenta con una **tarjeta gráfica dedicada**, se puede 
hacer uso del siguiente comando para ejecutar el programa con la tarjeta 
gráfica dedicada:
```bash
DRI_PRIME=1 ./build/project
```
