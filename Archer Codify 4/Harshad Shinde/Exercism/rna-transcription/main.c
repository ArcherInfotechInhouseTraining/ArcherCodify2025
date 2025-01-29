#include <stdio.h>
#include <string.h>


void transcribe_dna_to_rna(const char *dna, char *rna) 
{
    
    for (int i = 0; dna[i] != '\0'; i++) 
    {
        switch (dna[i])
        {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
            default:
                rna[i] = '?'; 
        }
    }
    rna[strlen(dna)] = '\0';  
}

int main()
{
    
    const char *dna = "GCTAAGCT";
    char rna[100];  
    
    transcribe_dna_to_rna(dna, rna);
    
    
    printf("DNA Sequence: %s\n", dna);
    printf("RNA Sequence: %s\n", rna);

    return 0;
}
