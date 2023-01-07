void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3;
    VAR1 = VAR2;
    if(VAR4==5)
    {
        {
            
            size_t VAR5 = wcslen(VAR1);
            
            if (100-VAR5 > 1)
            {
                
                if (FUN2(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
                {
                    
                    VAR5 = wcslen(VAR1);
                    if (VAR5 > 0 && VAR1[VAR5-1] == VAR6'')
                    {
                        VAR1[VAR5-1] = VAR6'';
                    }
                }
                else
                {
                    FUN3("");
                    
                    VAR1[VAR5] = VAR6'';
                }
            }
        }
    }
    
    if (FUN4(VAR1) <= 0)
    {
        FUN3("");
        FUN5(1);
    }
}