

#define n 3

struct alumno
{
    char nombre[50];
    char sexo;
    char materia[16];
    int nota;
};

void aprobados(struct alumno[], int, int);
float promedio(struct alumno[]);

int main()
{

    int i, x; //  i recorrido de entrada de alumnos, x recorrido del printf de alumnos.
    float prom;

    struct alumno j[n];

    for (i = 0; i < n; i++)
    {

        printf("\nalumno N%d", i + 1);
        printf("\nIngrese el nombre (hasta 50 caracteres):");
        gets(j[i].nombre);
        fflush(stdin);
        printf("Sexo (m o f):");
        scanf("%c", &j[i].sexo);
        getc(stdin);
        printf("Materia:");
        gets(j[i].materia);
        fflush(stdin);
        printf("nota:");
        scanf("%d", &j[i].nota);
        getc(stdin);
    }

    aprobados(j, i, x);

    for (x = 0; x < n; x++)
    {
        if (j[x].nota > 4)
        {
            printf("\nlos alumnos aprobados son:");
            printf("\nnombre:%s", j[x].nombre);
            printf("\nsexo:%c", j[x].sexo);
            printf("\nmateria:%s", j[x].materia);
            printf("\nnota:%d", j[x].nota);
        }
    }

    promedio(j);

    printf("El promedio de nota de los alumnos ingresados es: %f", promedio);

    return 0;
}

void aprobados(struct alumno alum[], int i, int x)
{

    struct alumno al;

    for (i = 0; i < n; i++)
    {
        for (x = 0; x < n - 1; x++)
        {
            if (alum[x].nota > 4 && (strcmp(alum[x].nombre, alum[x + 1].nombre) > 0))
            {
                al = alum[i];
                alum[i] = alum[x + 1];
                alum[x + 1] = al;
            }
        }
    }
}

float promedio(struct alumno alumn[])
{

    int i;
    float prom;

    for (i = 0; i < n; i++)
    {
        prom = ((alumn[i].nota + alumn[i + 1].nota) / 2);
    }
    return prom;
}