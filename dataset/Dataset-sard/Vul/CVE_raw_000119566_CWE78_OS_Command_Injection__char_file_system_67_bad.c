void FUN1()
{
    char * VAR1;
    CWE78_OS_Command_Injection__char_file_system_67_structType VAR2;
    char VAR3[100] = VAR4;
    VAR1 = VAR3;
    {
        
        size_t VAR5 = strlen(VAR1);
        VAR6 * VAR7;
        
        if (100-VAR5 > 1)
        {
            VAR7 = fopen(VAR8, "");
            if (VAR7 != NULL)
            {
                
                if (fgets(VAR1+VAR5, (int)(100-VAR5), VAR7) == NULL)
                {
                    FUN2("");
                    
                    VAR1[VAR5] = '';
                }
                fclose(VAR7);
            }
        }
    }
    VAR2.VAR9 = VAR1;
    FUN3(VAR2);
}