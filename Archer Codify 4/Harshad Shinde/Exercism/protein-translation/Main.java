#include "protein_translation.h"
#include <string.h>

proteins_t proteins(const char *rna) 
{
    proteins_t res = { .valid = true, .count = 0 };
    if (!rna || strlen(rna) % 3 != 0) 
    {
        res.valid = false;  
        return res;
    }

    for (size_t i = 0; i < strlen(rna); i += 3) 
    {
        char codon[4] = { rna[i], rna[i + 1], rna[i + 2], '\0' };

        protein_t protein;
        if (strcmp(codon, "AUG") == 0) protein = Methionine;
        else if (strcmp(codon, "UUU") == 0 || strcmp(codon, "UUC") == 0) protein = Phenylalanine;
        else if (strcmp(codon, "UUA") == 0 || strcmp(codon, "UUG") == 0) protein = Leucine;
        else if (strcmp(codon, "UCU") == 0 || strcmp(codon, "UCC") == 0 ||
                 strcmp(codon, "UCA") == 0 || strcmp(codon, "UCG") == 0) protein = Serine;
        else if (strcmp(codon, "UAU") == 0 || strcmp(codon, "UAC") == 0) protein = Tyrosine;
        else if (strcmp(codon, "UGU") == 0 || strcmp(codon, "UGC") == 0) protein = Cysteine;
        else if (strcmp(codon, "UGG") == 0) protein = Tryptophan;
        else if (strcmp(codon, "UAA") == 0 || strcmp(codon, "UAG") == 0 || strcmp(codon, "UGA") == 0)
        {
            break;  
        } else 
        {
            res.valid = false;  
            return res;
        }

        res.proteins[res.count++] = protein;
    }

    return res;
}
