static void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_char_alloca_memcpy_34_unionType VAR2;
    char * VAR3 = (char *)FUN2((10)*sizeof(char));
    char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
    
    VAR1 = VAR4;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        {
            char VAR7[10+1] = VAR8;
            
            
            memcpy(VAR1, VAR7, (strlen(VAR7) + 1) * sizeof(char));
            FUN3(VAR1);
        }
    }
}