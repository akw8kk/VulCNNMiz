static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100] = VAR5"";
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        {
            
            size_t VAR6 = wcslen(VAR1);
            
            if (100-VAR6 > 1)
            {
                
                if (FUN2(VAR1+VAR6, (int)(100-VAR6), stdin) != NULL)
                {
                    
                    VAR6 = wcslen(VAR1);
                    if (VAR6 > 0 && VAR1[VAR6-1] == VAR5'')
                    {
                        VAR1[VAR6-1] = VAR5'';
                    }
                }
                else
                {
                    FUN3("");
                    
                    VAR1[VAR6] = VAR5'';
                }
            }
        }
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        
        fwprintf(VAR7, VAR5"", VAR1);
    }
}