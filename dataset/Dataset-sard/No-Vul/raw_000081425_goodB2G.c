static void FUN1()
{
    wchar_t * VAR1;
    CWE134_Uncontrolled_Format_String__wchar_t_file_fprintf_34_unionType VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    {
        
        size_t VAR5 = wcslen(VAR1);
        VAR6 * VAR7;
        
        if (100-VAR5 > 1)
        {
            VAR7 = fopen(VAR8, "");
            if (VAR7 != NULL)
            {
                
                if (FUN2(VAR1+VAR5, (int)(100-VAR5), VAR7) == NULL)
                {
                    FUN3("");
                    
                    VAR1[VAR5] = VAR4'';
                }
                fclose(VAR7);
            }
        }
    }
    VAR2.VAR9 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR10;
        
        fwprintf(VAR11, VAR4"", VAR1);
    }
}