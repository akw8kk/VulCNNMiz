static void FUN1()
{
    wchar_t * VAR1;
    wchar_t * *VAR2 = &VAR1;
    wchar_t * *VAR3 = &VAR1;
    wchar_t VAR4[100] = VAR5"";
    VAR1 = VAR4;
    {
        wchar_t * VAR1 = *VAR2;
        {
            
            size_t VAR6 = wcslen(VAR1);
            wchar_t * VAR7 = FUN2(VAR8);
            
            if (VAR7 != NULL)
            {
                
                wcsncat(VAR1+VAR6, VAR7, 100-VAR6-1);
            }
        }
        *VAR2 = VAR1;
    }
    {
        wchar_t * VAR1 = *VAR3;
        {
            wchar_t VAR9[100] = VAR5"";
            
            FUN3(VAR9, 100-1, VAR5"", VAR1);
            FUN4(VAR9);
        }
    }
}