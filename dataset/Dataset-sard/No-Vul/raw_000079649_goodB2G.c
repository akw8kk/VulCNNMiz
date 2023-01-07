static void FUN1()
{
    char * VAR1;
    CWE134_Uncontrolled_Format_String__char_console_w32_vsnprintf_34_unionType VAR2;
    char VAR3[100] = "";
    VAR1 = VAR3;
    {
        
        size_t VAR4 = strlen(VAR1);
        
        if (100-VAR4 > 1)
        {
            
            if (fgets(VAR1+VAR4, (int)(100-VAR4), stdin) != NULL)
            {
                
                VAR4 = strlen(VAR1);
                if (VAR4 > 0 && VAR1[VAR4-1] == '')
                {
                    VAR1[VAR4-1] = '';
                }
            }
            else
            {
                FUN2("");
                
                VAR1[VAR4] = '';
            }
        }
    }
    VAR2.VAR5 = VAR1;
    {
        char * VAR1 = VAR2.VAR6;
        FUN3(VAR1, VAR1);
    }
}