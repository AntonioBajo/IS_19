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
| Dni | cadena | *Documento Nacional de Identidad* |
| Dirección | cadena | *Domicilio del paciente* |
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

---

|CLASE: Citas|                         |                        |        
|:--------------|:-----------------------:|-----------------------:|
| Esta clase contendrá las funciones relacionadas con la gestión de las citas. Entre ellas se encuentran la función de asignar cita, modificar cita...|
||
| **DATOS** |   |   |
| Nombre | cadena | *Nombre del paciente* |
| Apellidos | cadena | *Apellidos del paciente* |
| Dni | cadena | *Documento Nacional de Identidad* |
| Fecha | cadena | *Día asignado para el reconocimiento del paciente* |
| Hora | número | *Hora asignada para el reconocimiento del paciente*|
||
| **MÉTODOS** |      
| Asignar citas | *Función que asigna una cita al paciente en cuestión*|
| Modificar cita | *Función que modifica la cita asignada al paciente*|
| Anular cita | *Función que elimina la cita registrada para el paciente*|
| Mostrar cita | *Función que muestra por pantalla la cita asignada*|

---

|CLASE: Tratamiento|                         |                        |        
|:--------------|:-----------------------:|-----------------------:|
| Esta clase contendrá las funciones relacionadas con el tratamiento del paciente. Entre ellas se encuentran la función de mostrar tratamientos, anular tratamiento...|
||
| **DATOS** |   |   |
| Paciente | clase | *Datos personales del paciente almacenados por el sistema* |
| Dolencia | cadena | *Diagnóstico del paciente* |
| Medicamento | cadena | *Fármaco asignado para el tratamiento de la dolencia*|
||
| **MÉTODOS** |      
| Mostrar tratamientos del paciente | *Función que muestra por pantalla los tratamientos que han sido asignados al paciente en cuestión históricamente*|
| Modificar tratamiento del paciente en curso | *Función que modifica el tratamiento a seguir del paciente en cuestión*|
| Borrar tratamiento del paciente en curso | *Función que elimina el tratamiento a seguir por el paciente en cuestión*|

---

|CLASE: Historial|                         |                        |        
|:--------------|:-----------------------:|-----------------------:|
| Esta clase contendrá las funciones relacionadas con el historial del paciente. Entre ellas se encuentran la función de mostrar el historial médico del paciente y la función de añadir una entrada al historial médico del paciente|
||
| **DATOS** |   |   |
| Paciente | clase | *Datos personales del paciente almacenados por el sistema* |
| Citas | clase | *Fechas en las que el paciente ha acudido a consulta* |
| Tratamientos | clase | *Tratamientos que han sido asignados al paciente*|
||
| **MÉTODOS** |      
| Mostrar historial médico del paciente | *Función que muestra por pantalla el historial del paciente*|
| Añadir entrada al historial médico del paciente  | *Función que añade al sistema una nueva entrada al historial del paciente en cuestión*|
