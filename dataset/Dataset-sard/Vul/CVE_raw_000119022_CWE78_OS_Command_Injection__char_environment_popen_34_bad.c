void FUN1()
{
    char * VAR1;
    CWE78_OS_Command_Injection__char_environment_popen_34_unionType VAR2;
    char VAR3[100] = VAR4;
    VAR1 = VAR3;
    {
        
        size_t VAR5 = strlen(VAR1);
        char * VAR6 = FUN2(VAR7);
        
        if (VAR6 != NULL)
        {
            
            strncat(VAR1+VAR5, VAR6, 100-VAR5-1);
        }
    }
    VAR2.VAR8 = VAR1;
    {
        char * VAR1 = VAR2.VAR9;
        {
            VAR10 *VAR11;
            
            VAR11 = FUN3(VAR1, "");
            if (VAR11 != NULL)
            {
                FUN4(VAR11);
            }
        }
    }
}