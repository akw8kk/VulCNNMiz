void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR2, VAR3'', 50-1); 
        VAR2[50-1] = VAR3''; 
    }
    {
        size_t VAR1, VAR4;
        wchar_t VAR5[100];
        wmemset(VAR5, VAR3'', 100-1);
        VAR5[100-1] = VAR3''; 
        VAR4 = wcslen(VAR5);
        
        for (VAR1 = 0; VAR1 < VAR4; VAR1++)
        {
            VAR5[VAR1] = VAR2[VAR1];
        }
        VAR5[100-1] = VAR3'';
        FUN2(VAR5);
        free(VAR2);
    }
}