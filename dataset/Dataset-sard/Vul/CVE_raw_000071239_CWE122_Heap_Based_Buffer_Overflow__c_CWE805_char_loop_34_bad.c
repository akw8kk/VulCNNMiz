void FUN1()
{
    char * VAR1;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_34_unionType VAR2;
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(50*sizeof(char));
    VAR1[0] = ''; 
    VAR2.VAR3 = VAR1;
    {
        char * VAR1 = VAR2.VAR4;
        {
            size_t VAR5;
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            
            for (VAR5 = 0; VAR5 < 100; VAR5++)
            {
                VAR1[VAR5] = VAR6[VAR5];
            }
            VAR1[100-1] = ''; 
            FUN2(VAR1);
            free(VAR1);
        }
    }
}