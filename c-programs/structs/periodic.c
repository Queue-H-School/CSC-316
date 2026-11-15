/**************************************************************
* Quinn Helfand
* CSC-316
* Structs Lab 1 11/12/2026
* periodic.c
***************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int shelltrons[NUMTRONS];
};

void printElement(struct element e) {

    printf("%3d    %-20s  %-3s    %-25s   %f\t", e.atomicNum, e.name, e.symbol, e.elemClass, e.weight);
    // string of shelltrons
    for (int i = 0; i < NUMTRONS; i++) {
        printf("%2d  ", *(e.shelltrons + i));
    }
    printf("\n");

}

int main(void) {
    int nullInt = -1;

    // open csv
    FILE *fp = fopen("periodic-table.csv", "r");

    struct element temp = {nullInt, "NULL", "NULL", "NULL", nullInt, {0, 0, 0, 0, 0, 0, 0}};

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }

    // iterate over file lines
    char buf[1024];
    while (fgets(buf, 1024, fp)) {
        // i couldn't get fscanf to work :(
        // split line into field and iterate
        char *field = strtok(buf, ",");
        for (int i = 0; field; i++) {

            switch (i % 12)
            {
                case 0:
                    temp.atomicNum = atoi(field);
                    break;
                case 1:
                    temp.name = field;
                    break;
                case 2:
                    temp.symbol = field;
                    break;
                case 3:
                    temp.elemClass = field;
                    break;
                case 4:
                    temp.weight = atof(field);
                    break;
                case 5:
                    temp.shelltrons[0] = atoi(field);
                    break;
                case 6:
                    temp.shelltrons[1] = atoi(field);
                    break;
                case 7:
                    temp.shelltrons[2] = atoi(field);
                    break;
                case 8:
                    temp.shelltrons[3] = atoi(field);
                    break;
                case 9:
                    temp.shelltrons[4] = atoi(field);
                    break;
                case 10:
                    temp.shelltrons[5] = atoi(field);
                    break;
                case 11:
                    temp.shelltrons[6] = atoi(field);
                    break;
                default: continue;
            }
            field = strtok(NULL, ",");
        }
        printElement(temp);
    }

}

