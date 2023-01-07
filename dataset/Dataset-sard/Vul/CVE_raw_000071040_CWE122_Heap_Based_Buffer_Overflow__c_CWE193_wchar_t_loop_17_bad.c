void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc(10*sizeof(wchar_t));
    }
    {
        wchar_t VAR3[10+1] = VAR4;
        size_t VAR1, VAR5;
        VAR5 = wcslen(VAR3);
        
        
        for (VAR1 = 0; VAR1 < VAR5 + 1; VAR1++)
        {
            VAR2[VAR1] = VAR3[VAR1];
        }
        FUN2(VAR2);
        free(VAR2);
    }
}