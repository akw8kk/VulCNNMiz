void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2[5];
    wchar_t VAR3[100] = VAR4"";
    VAR1 = VAR3;
    {
        
        size_t VAR5 = wcslen(VAR1);
        
        if (100-VAR5 > 1)
        {
            
            if (FUN2(VAR1+VAR5, (int)(100-VAR5), stdin) != NULL)
            {
                
                VAR5 = wcslen(VAR1);
                if (VAR5 > 0 && VAR1[VAR5-1] == VAR4'')
                {
                    VAR1[VAR5-1] = VAR4'';
                }
            }
            else
            {
                FUN3("");
                
                VAR1[VAR5] = VAR4'';
            }
        }
    }
    
    VAR2[2] = VAR1;
    FUN4(VAR2);
}