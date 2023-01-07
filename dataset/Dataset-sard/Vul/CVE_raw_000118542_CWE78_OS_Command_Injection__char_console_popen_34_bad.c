void FUN1()
{
    char * VAR1;
    CWE78_OS_Command_Injection__char_console_popen_34_unionType VAR2;
    char VAR3[100] = VAR4;
    VAR1 = VAR3;
    {
        
        size_t VAR5 = strlen(VAR1);
        
        if (100-VAR5 > 1)
        {
            
            if (fgets(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                
                VAR5 = strlen(VAR1);
                if (VAR5 > 0 && VAR1[VAR5-1] == '')
                {
                    VAR1[VAR5-1] = '';
                }
            }
            else
            {
                FUN2("");
                
                VAR1[VAR5] = '';
            }
        }
    }
    VAR2.VAR6 = VAR1;
    {
        char * VAR1 = VAR2.VAR7;
        {
            VAR8 *VAR9;
            
            VAR9 = FUN3(VAR1, "");
            if (VAR9 != NULL)
            {
                FUN4(VAR9);
            }
        }
    }
}