static void FUN1()
{
    int VAR1,VAR2;
    wchar_t * VAR3;
    wchar_t VAR4[100] = VAR5"";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR6 = wcslen(VAR3);
            
            if (100-VAR6 > 1)
            {
                
                if (FUN2(VAR3+VAR6, (int)(100-VAR6), stdin) != NULL)
                {
                    
                    VAR6 = wcslen(VAR3);
                    if (VAR6 > 0 && VAR3[VAR6-1] == VAR5'')
                    {
                        VAR3[VAR6-1] = VAR5'';
                    }
                }
                else
                {
                    FUN3("");
                    
                    VAR3[VAR6] = VAR5'';
                }
            }
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        
        fwprintf(VAR7, VAR5"", VAR3);
    }
}