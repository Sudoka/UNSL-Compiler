#define TAM_LEXEMA 200

typedef struct
{
    long codigo;
    char lexema[TAM_LEXEMA];
} token;


#define COD_IMP_ERRORES -1

EXTERNA char * linea;
EXTERNA char *liberar;
EXTERNA int nro_linea;
EXTERNA token token1;

// Vbles globales agregadas por nosotros

EXTERNA int cantParReales; // se usa para controlar la cant de par actuales contra la de formales, en una llamada a fcion
EXTERNA char ultimoID[TAM_LEXEMA]; // se usa para hacer controles con la TS
EXTERNA int ultimoTipo; // se usa para hacer controles con la TS
EXTERNA int existeReturn; // se usa para determinar si una funcion tiene sentencia return
EXTERNA char ultimoIdentificadorFuncion[TAM_LEXEMA]; // usado para identificar la ultima funcion definida. se usa en controles, por ej si existe return







