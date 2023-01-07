void FUN1()
{
    int VAR1,VAR2;
    wchar_t * VAR3;
    wchar_t VAR4[100] = VAR5"";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            
            size_t VAR6 = wcslen(VAR3);
            wchar_t * VAR7 = FUN2(VAR8);
            
            if (VAR7 != NULL)
            {
                
                wcsncat(VAR3+VAR6, VAR7, 100-VAR6-1);
            }
        }
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        FUN3(VAR3, VAR3);
    }
}