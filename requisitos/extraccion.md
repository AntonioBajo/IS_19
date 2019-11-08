## EXTRACCIÓN DE REQUISITOS
#### Partes interesadas:

  - Clínica
  - Desarrolladores
  
#### Datos que gestiona el sistema:
  - Paciente:
    * Nombre
    * Apellidos
    * Teléfono
    * Dirección
    * Fecha de nacimiento
    * Seguro médico
   - Citas:
     * Fecha
     * Hora
   - Historial médico
   - Tratamiento

#### Requisitos funcionales (ordenados por prioridad):
 1. Añadir paciente al sistema
 2. Editar datos personales del paciente 
 3. Consultar paciente
 4. Borrar paciente
 5. Mostrar historial médico del paciente
 6. Añadir entrada al historial médico del paciente
 7. Mostrar tratamientos del paciente
 8. Modificar tratamiento del paciente en curso
 9. Borrar tratamiento del paciente en curso 
 10. Mostrar lista de pacientes
 11. Asignar cita
 12. Modificar cita
 13. Anular cita
 14. Mostrar citas disponibles
 
 #### Requisitos no funcionales:
- Sistema operativo Linux
- Interfaz CLI
- Lenguaje de implementación: C++
- Máximo 10 GB de almacenamiento
- Evitar que se borre un historial médico
- Confirmar antes del borrado
