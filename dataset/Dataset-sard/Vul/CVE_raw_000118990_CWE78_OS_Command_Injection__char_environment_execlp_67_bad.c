void FUN1()
{
    char * VAR1;
    CWE78_OS_Command_Injection__char_environment_execlp_67_structType VAR2;
    char VAR3[100] = "";
    VAR1 = VAR3;
    {
        
        size_t VAR4 = strlen(VAR1);
        char * VAR5 = FUN2(VAR6);
        
        if (VAR5 != NULL)
        {
            
            strncat(VAR1+VAR4, VAR5, 100-VAR4-1);
        }
    }
    VAR2.VAR7 = VAR1;
    FUN3(VAR2);
}