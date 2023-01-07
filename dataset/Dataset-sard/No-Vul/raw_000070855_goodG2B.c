static void FUN1()
{
    char * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc((10+1)*sizeof(char));
    VAR2.VAR3 = VAR1;
    {
        char * VAR1 = VAR2.VAR4;
        {
            char VAR5[10+1] = VAR6;
            
            
            memcpy(VAR1, VAR5, (strlen(VAR5) + 1) * sizeof(char));
            FUN2(VAR1);
            free(VAR1);
        }
    }
}