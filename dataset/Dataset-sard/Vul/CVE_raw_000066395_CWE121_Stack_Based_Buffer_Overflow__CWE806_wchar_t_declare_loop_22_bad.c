void FUN1()
{
    wchar_t * VAR1;
    wchar_t VAR2[100];
    VAR1 = VAR2;
    VAR3 = 1; 
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR4[50] = VAR5"";
        size_t VAR6, VAR7;
        VAR7 = wcslen(VAR1);
        
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            VAR4[VAR6] = VAR1[VAR6];
        }
        VAR4[50-1] = VAR5''; 
        FUN3(VAR1);
    }
}