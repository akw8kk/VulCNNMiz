static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    goto VAR4;
VAR4:
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
                    
                    VAR1[VAR5] = VAR3'';
                }
                fclose(VAR7);
            }
        }
    }
    goto VAR9;
VAR9:
    
    fwprintf(VAR10, VAR3"", VAR1);
}