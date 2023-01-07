void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[100];
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        wmemset(VAR2, VAR4'', 100-1); 
        VAR2[100-1] = VAR4''; 
    }
    {
        wchar_t VAR5[50] = VAR4"";
        size_t VAR1, VAR6;
        VAR6 = wcslen(VAR2);
        
        for (VAR1 = 0; VAR1 < VAR6; VAR1++)
        {
            VAR5[VAR1] = VAR2[VAR1];
        }
        VAR5[50-1] = VAR4''; 
        FUN2(VAR2);
    }
}