## DESCRIPCIÓN DE CLASES

~~~
Especificación de las clases utilizadas por los desarrolladores en el programa
~~~

|CLASE: Paciente|                         |                        |        
|:--------------|:-----------------------:|-----------------------:|
| Esta clase contendrá las funciones del paciente. Entre ellas se encuentran la función de añadir un paciente al sistema, editar sus datos personales...|
||
| **DATOS** |   |   |
| Nombre | cadena | *Nombre del paciente* |
| Apellidos | cadena | *Apellidos del paciente* |
| Teléfono | número | *Teléfono de contacto con el paciente*|
| Fecha de nacimiento | cadena | *Fecha de nacimiento del paciente*|
| Seguro médico | cadena | *Especificación de si el paciente en cuestión está asegurado*|
||
| **MÉTODOS** |      
| Añadir paciente al sistema | *Función que incorpora un paciente al sistema*|
| Editar datos personales del paciente | *Función que modifica los datos que guarda el sistema del paciente introducido*|
| Consultar paciente | *Función que muestra los datos personales que guarda el sistema del paciente introducido*|
| Borrar paciente | *Función que elimina del sistema los datos personales guardados del paciente introducido*|
| Mostrar lista de pacientes | *Función que muestra por pantalla todos los pacientes que el sistema almacena con sus correspondientes datos personales*|


|CLASE: Citas|                         |                        |        
|:--------------|:-----------------------:|-----------------------:|
| Esta clase contendrá las funciones relacionadas con la gestión de las citas. Entre ellas se encuentran la función de asignar cita, modificar cita...|
||
| **DATOS** |   |   |
| Paciente | clase | *Datos personales del paciente almacenados por el sistema* |
| Fecha | cadena | *Día asignado para el reconocimiento del paciente* |
| Hora | número | *Hora asignada para el reconocimiento del paciente*|
||
| **MÉTODOS** |      
| Asignar citas | *Función que asigna una cita al paciente en cuestión*|
| Modificar cita | *Función que modifica la cita asignada al paciente*|
| Anular cita | *Función que elimina la cita registrada para el paciente*|
| Mostrar citas disponibles | *Función que muestra por pantalla la agenda disponible para asignar una cita al paciente*|
