void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    wmemset(VAR3, VAR5'', 50-1); 
    VAR3[50-1] = VAR5''; 
    wmemset(VAR4, VAR5'', 100-1); 
    VAR4[100-1] = VAR5''; 
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        size_t VAR1, VAR6;
        wchar_t VAR7[100];
        wmemset(VAR7, VAR5'', 100-1);
        VAR7[100-1] = VAR5''; 
        VAR6 = wcslen(VAR7);
        
        for (VAR1 = 0; VAR1 < VAR6; VAR1++)
        {
            VAR7[VAR1] = VAR2[VAR1];
        }
        VAR7[100-1] = VAR5'';
        FUN2(VAR7);
    }
}