void FUN1()
{
    char * VAR1;
    CWE78_OS_Command_Injection__char_console_execl_67_structType VAR2;
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
    FUN3(VAR2);
}