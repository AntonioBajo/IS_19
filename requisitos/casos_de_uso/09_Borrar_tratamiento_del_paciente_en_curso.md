## Borrar tratamiento del paciente en curso
**ID:** 09 **Descripción:** Se introduce el DNI del paciente del que se quiera borrar el tratamiento y el sistema lo elimina.

**Actores principales:** Secretario **Actores secundarios:** Paciente

**Flujo principal:**
1. El secretario desea borrar el tratamiento del paciente, pero solo puede hacerlo si está en curso.
2. El secretario abre el cuadro de diálogo de borrar tratamiento.
3. El secretario introduce el DNI del paciente.
4. El sistema muestra los tratamientos del paciente.
5. El secretario selecciona el tratamiento que se quiere borrar.
6. El sistema muestra por pantalla que el tratamiento se ha borrado correctamente.

**Flujos alternativos:**

3.a. Si el sistema detecta algún fallo tras haberle introducido por teclado el DNI del paciente mostrará ERROR por pantalla

5.a. Si el tratamiento no está en curso, no se puede borrar, por lo que mostrará ERROR por pantalla.
