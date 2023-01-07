void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[100] = VAR4"";
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR5 = wcslen(VAR2);
            
            if (100-VAR5 > 1)
            {
                
                if (FUN2(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
                {
                    
                    VAR5 = wcslen(VAR2);
                    if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
                    {
                        VAR2[VAR5-1] = VAR4'';
                    }
                }
                else
                {
                    FUN3("");
                    
                    VAR2[VAR5] = VAR4'';
                }
            }
        }
    }
    
    
    FUN4(VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}