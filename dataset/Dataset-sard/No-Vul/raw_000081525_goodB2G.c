static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t VAR4[100] = VAR5"";
    VAR1 = VAR4;
    {
        
        size_t VAR6 = wcslen(VAR1);
        VAR7 * VAR8;
        
        if (100-VAR6 > 1)
        {
            VAR8 = fopen(VAR9, "");
            if (VAR8 != NULL)
            {
                
                if (FUN2(VAR1+VAR6, (int)(100-VAR6), VAR8) == NULL)
                {
                    FUN3("");
                    
                    VAR1[VAR6] = VAR5'';
                }
                fclose(VAR8);
            }
        }
    }
    FUN4(VAR1);
}