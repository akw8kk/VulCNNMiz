void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3;
    VAR1 = VAR2;
    goto VAR4;
VAR4:
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
    {
        VAR7 *VAR8;
        
        VAR8 = FUN4(VAR1, VAR6"");
        if (VAR8 != NULL)
        {
            FUN5(VAR8);
        }
    }
}