void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    goto VAR4;
VAR4:
    {
        
        size_t VAR5 = wcslen(VAR1);
        wchar_t * VAR6 = FUN2(VAR7);
        
        if (VAR6 != NULL)
        {
            
            wcsncat(VAR1+VAR5, VAR6, 100-VAR5-1);
        }
    }
    goto VAR8;
VAR8:
    FUN3(VAR1, VAR1);
}