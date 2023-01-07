static void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100] = VAR3"";
    VAR1 = VAR2;
    {
        
        size_t VAR4 = wcslen(VAR1);
        wchar_t * VAR5 = FUN2(VAR6);
        
        if (VAR5 != NULL)
        {
            
            wcsncat(VAR1+VAR4, VAR5, 100-VAR4-1);
        }
    }
    VAR7 = 1; 
    FUN3(VAR1, VAR1);
}