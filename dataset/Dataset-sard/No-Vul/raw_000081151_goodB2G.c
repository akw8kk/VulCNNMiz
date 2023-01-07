static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t VAR4[100] = VAR5"";
    VAR1 = VAR4;
    {
        
        size_t VAR6 = wcslen(VAR1);
        wchar_t * VAR7 = FUN2(VAR8);
        
        if (VAR7 != NULL)
        {
            
            wcsncat(VAR1+VAR6, VAR7, 100-VAR6-1);
        }
    }
    FUN3(VAR1);
}