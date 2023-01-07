void FUN1()
{
    char * VAR1;
    CWE127_Buffer_Underread__char_declare_ncpy_34_unionType VAR2;
    char VAR3[100];
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
            
            strncpy(VAR6, VAR1, strlen(VAR6));
            
            VAR6[100-1] = '';
            FUN2(VAR6);
        }
    }
}