void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    if(FUN2())
    {
        {
            
            size_t VAR4 = wcslen(VAR1);
            
            if (100-VAR4 > 1)
            {
                
                if (FUN3(VAR1+VAR4, (int)(100-VAR4), stdin) != NULL)
                {
                    
                    VAR4 = wcslen(VAR1);
                    if (VAR4 > 0 && VAR1[VAR4-1] == VAR3'')
                    {
                        VAR1[VAR4-1] = VAR3'';
                    }
                }
                else
                {
                    FUN4("");
                    
                    VAR1[VAR4] = VAR3'';
                }
            }
        }
    }
    
    
    FUN5(VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}