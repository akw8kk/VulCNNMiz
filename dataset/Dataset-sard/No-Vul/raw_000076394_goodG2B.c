static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR2, VAR3'', 100-1); 
        VAR2[100-1] = VAR3''; 
    }
    {
        size_t VAR4, VAR5;
        wchar_t VAR6[100];
        wmemset(VAR6, VAR3'', 100-1);
        VAR6[100-1] = VAR3''; 
        VAR5 = wcslen(VAR6);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR6[VAR4] = VAR2[VAR4];
        }
        VAR6[100-1] = VAR3'';
        FUN2(VAR6);
        free(VAR2);
    }
}