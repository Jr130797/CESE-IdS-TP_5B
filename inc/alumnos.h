/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/** \brief Estructura de Alumnos
 */ 
typedef struct alumno_s {
    char apellidos[30]; //!< Instancia de apellidos.  
    char nombres[30];   //!< Instancia de nombres.  
    char documento[11]; //!< Instancia de documentos DNI.    
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/


/** \brief Función SerializarAlumno
 * Creación de cadena de caráteres con datos de las estructuras
 * @param cadena Puntero donde de se guardan los datos de las estructuras
 * @param espacio Entero sin signo tipo size_t
 * @param alumno Variable de la estructura alumno_s
 * * @return Devolución de TRUE o FALSE
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/** \brief Función SerializarAlumno
* @param cadena Puntero donde se guardan los datos de las estructuras
* @param espacio Entero sin signo del tipo size_t
* @return Devolución de TRUE o FALSE
*/
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
