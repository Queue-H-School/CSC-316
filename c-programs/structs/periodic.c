/**************************************************************
* Quinn Helfand
* CSC-316
* Structs Lab 1 11/12/2026
* periodic.c
***************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define NUMELEM 111
#define NUMTRONS 7

// class types
#define NONMETAL "Non Metal"
#define NOBLEGAS "Noble Gas"
#define ALKALIMETAL "Alkali Metal"
#define ALKALIEARTHMETAL "Alkali Earth Metal"
#define HALOGEN "Halogen"
#define TRANSITIONMETAL "Transition Metal"
#define METAL "Metal"
#define RAREEARTH "Rare Earth"

struct element {
    int atomicNum;
    char *name;
    char *symbol;
    char *elemClass;
    float weight;
    int *shelltrons;
};

void printElement(struct element e) {

    printf("%d  %s   %s  %s\t%f\t", e.atomicNum, e.name, e.symbol, e.elemClass, e.weight);
    // string of shelltrons
    for (int i = 0; i < NUMTRONS; i++) {
        printf("%d ", *(e.shelltrons + i));
    }
    printf("\n");

}

int main(void) {
    int nullInt = -1;

    // open csv
    FILE *fp = fopen("periodic-table.csv", "r");

    int atomicNum = nullInt;
    char *name = "NULL";
    char *symbol = "NULL";
    char *elemClass = "NULL";
    float weight = nullInt;
    int *shelltrons = &nullInt;

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }

    // iterate over file lines
    //for (int j = 0; j < 3; j++) {
        // read initial values
        printf("%x\n", &fp);
        int scanres = fscanf(fp, "%d,%[^,],%[^,],%[^,],%f\n", &atomicNum, &name, &symbol, &elemClass, &weight);
        printf("%d\n%x\n", scanres, &fp);

        // if (fscanf(fp, "%d,%s,%s,%s,%f", &atomicNum, name, symbol, elemClass, &weight) == 5)
        // {
        //     printf("%d", atomicNum);
        //     // iterate over shelltrons
        //     for (int i = 0; i < NUMTRONS; i++)
        //     {
        //         // error handling
        //         if (fscanf(fp, "%d", shelltrons + i) != 1)
        //         {
        //             printf("Unable to read in shell electron array.\n");
        //             return 1;
        //         }
        //     }
        // }
        struct element temp;
        temp.atomicNum = atomicNum;
        temp.name = name;
        temp.symbol = symbol;
        temp.elemClass = elemClass;
        temp.weight = weight;
        temp.shelltrons = shelltrons;
        printElement(temp);
    //}

}

