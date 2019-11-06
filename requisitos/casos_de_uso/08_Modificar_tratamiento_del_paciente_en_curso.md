
## Modificar tratamiento del paciente en curso
**ID:** 08 **Descripción:** Se introduce el nombre del paciente del que se quiera modificar el tratamiento y se muestra por pantalla.

**Actores principales:** Secretario **Actores secundarios:** Paciente

**Flujo principal:**
1. El secretario desea modificar el tratamiento del paciente, pero solo puede hacerlo si está en curso.
2. El secretario abre el cuadro de diálogo de modificar tratamiento.
3. El secretario introduce nombre del paciente.
4. El sistema muestra los tratamientos del paciente.
5. El secretario selecciona el tratamiento que se quiere modificar.
6. El secretario introduce los nuevos datos del tratamiento.

**Flujos alternativos:**

3.a. Si el sistema detecta que el paciente introducido no existe, mostrará un mensaje de error.
5.a. Si el tratamiento no está en curso, no se puede modificar, por lo que mostrará un mensaje de error.
