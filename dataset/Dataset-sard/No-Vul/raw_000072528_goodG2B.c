static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        wmemset(VAR2, VAR3'', 50-1); 
        VAR2[50-1] = VAR3''; 
    }
    {
        wchar_t VAR4[50] = VAR3"";
        size_t VAR5, VAR6;
        VAR6 = wcslen(VAR2);
        
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR4[VAR5] = VAR2[VAR5];
        }
        VAR4[50-1] = VAR3''; 
        FUN2(VAR2);
        free(VAR2);
    }
}