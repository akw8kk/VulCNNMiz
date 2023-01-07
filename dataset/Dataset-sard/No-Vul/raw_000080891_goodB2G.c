static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
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
                if (VAR5 > 0 && VAR1[VAR5-1] == VAR3'')
                {
                    VAR1[VAR5-1] = VAR3'';
                }
            }
            else
            {
                FUN3("");
                
                VAR1[VAR5] = VAR3'';
            }
        }
    }
    goto VAR6;
VAR6:
    
    FUN4(VAR3"", VAR1);
}