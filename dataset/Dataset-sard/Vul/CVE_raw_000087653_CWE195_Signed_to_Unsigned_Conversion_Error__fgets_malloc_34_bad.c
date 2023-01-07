void FUN1()
{
    int VAR1;
    CWE195_Signed_to_Unsigned_Conversion_Error__fgets_malloc_34_unionType VAR2;
    
    VAR1 = -1;
    {
        char VAR3[VAR4] = "";
        
        if (fgets(VAR3, VAR4, stdin) != NULL)
        {
            
            VAR1 = FUN2(VAR3);
        }
        else
        {
            FUN3("");
        }
    }
    VAR2.VAR5 = VAR1;
    {
        int VAR1 = VAR2.VAR6;
        
        if (VAR1 < 100)
        {
            
            char * VAR7 = (char *)malloc(VAR1);
            
            memset(VAR7, '', VAR1-1);
            VAR7[VAR1-1] = '';
            FUN3(VAR7);
            free(VAR7);
        }
    }
}