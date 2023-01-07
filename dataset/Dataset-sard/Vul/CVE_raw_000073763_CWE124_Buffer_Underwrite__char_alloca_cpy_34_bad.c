void FUN1()
{
    char * VAR1;
    CWE124_Buffer_Underwrite__char_alloca_cpy_34_unionType VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    
    VAR1 = VAR3 - 8;
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            
            strcpy(VAR1, VAR6);
            FUN3(VAR1);
        }
    }
}