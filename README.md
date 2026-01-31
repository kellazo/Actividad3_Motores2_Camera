# 🎥 Control de Cámara en Unreal Engine 5 | C++

**Asignatura:** Motores de Videojuegos II  
**Grado:** Diseño y Desarrollo de Videojuegos  
**Universidad:** Universidad Internacional de La Rioja (UNIR)  
**Curso:** 2025-2026  
**Alumno:** Guillem Muñoz Pueyo

---

## 📝 Descripción de la Actividad

Este proyecto forma parte de las prácticas del **Laboratorio 3**, cuyo objetivo principal es profundizar en la programación de sistemas de cámara mediante **C++** en Unreal Engine 5.

El ejercicio consiste en la refactorización de un controlador de personaje estándar (*Third Person Character*) para transformarlo en una mecánica de cámara **Top-Down** (vista isométrica/cenital), manipulando directamente el `USpringArmComponent` y la gestión de inputs desde el código fuente.

## 🚀 Objetivos del Proyecto

* **Experimentación:** Entender la relación entre la clase `ACharacter`, el `Controller` y la `Camera`.
* **Programación C++:** Configurar componentes y variables de movimiento desde el constructor de la clase, evitando la dependencia exclusiva de Blueprints.
* **Depuración:** Comprender y solucionar problemas de serialización entre C++ y el Editor de Unreal (CDO vs. Instancias de Blueprint).

## 🛠️ Tecnologías Utilizadas

* **Motor:** Unreal Engine 5.4.4
* **Lenguaje:** C++
* **IDE:** Visual Studio / Rider

## ⚙️ Implementación Técnica

La lógica de la cámara se ha modificado en la clase `ALaboratorioClase14Character` para lograr el comportamiento *Top-Down*:

1.  **Cámara Fija:** Se ha eliminado la herencia de rotación (`bInheritYaw`, `bInheritPitch`, `bInheritRoll`) en el *Spring Arm*.
2.  **Perspectiva:** Se ha establecido una rotación relativa fija y una distancia de brazo (`TargetArmLength`) elevada.
3.  **Movimiento Independiente:** El personaje se mueve en relación a los ejes del mundo sin afectar la orientación de la cámara.

## 📄 Instrucciones de Instalación

1.  Clonar el repositorio.
2.  Hacer clic derecho en el archivo `.uproject` y seleccionar **"Generate Visual Studio project files"**.
3.  Abrir la solución `.sln` y compilar el proyecto.
4.  Abrir el proyecto en Unreal Engine y ejecutar el nivel principal.

---
_Actividad realizada para la asignatura de Motores II._
