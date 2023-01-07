void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__dest_char_alloca_cpy_34_unionType VAR2;
    char * VAR3 = (char *)FUN2(50*sizeof(char));
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    
    VAR1 = VAR3;
    VAR1[0] = ''; 
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        {
            char VAR7[100];
            memset(VAR7, '', 100-1); 
            VAR7[100-1] = ''; 
            
            strcpy(VAR1, VAR7);
            FUN3(VAR1);
        }
    }
}