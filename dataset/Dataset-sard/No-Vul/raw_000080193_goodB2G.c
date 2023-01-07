static void FUN1()
{
    char * VAR1;
    CWE134_Uncontrolled_Format_String__char_file_vprintf_67_structType VAR2;
    char VAR3[100] = "";
    VAR1 = VAR3;
    {
        
        size_t VAR4 = strlen(VAR1);
        VAR5 * VAR6;
        
        if (100-VAR4 > 1)
        {
            VAR6 = fopen(VAR7, "");
            if (VAR6 != NULL)
            {
                
                if (fgets(VAR1+VAR4, (int)(100-VAR4), VAR6) == NULL)
                {
                    FUN2("");
                    
                    VAR1[VAR4] = '';
                }
                fclose(VAR6);
            }
        }
    }
    VAR2.VAR8 = VAR1;
    FUN3(VAR2);
}