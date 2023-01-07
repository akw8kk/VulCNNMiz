void FUN1()
{
    int VAR1;
    CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memmove_34_unionType VAR2;
    
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
        {
            char VAR7[100];
            char VAR8[100] = "";
            memset(VAR7, '', 100-1);
            VAR7[100-1] = '';
            if (VAR1 < 100)
            {
                
                memmove(VAR8, VAR7, VAR1);
                VAR8[VAR1] = ''; 
            }
            FUN3(VAR8);
        }
    }
}