void FUN1()
{
    char * VAR1;
    CWE127_Buffer_Underread__malloc_char_memmove_34_unionType VAR2;
    VAR1 = NULL;
    {
        char * VAR3 = (char *)malloc(100*sizeof(char));
        memset(VAR3, '', 100-1);
        VAR3[100-1] = '';
        
        VAR1 = VAR3 - 8;
    }
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            char VAR6[100];
            memset(VAR6, '', 100-1); 
            VAR6[100-1] = ''; 
            
            memmove(VAR6, VAR1, 100*sizeof(char));
            
            VAR6[100-1] = '';
            FUN2(VAR6);
            
        }
    }
}