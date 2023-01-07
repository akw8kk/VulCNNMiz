static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    }
    {
        wchar_t VAR3[10+1] = VAR4;
        size_t VAR5, VAR6;
        VAR6 = wcslen(VAR3);
        
        
        for (VAR5 = 0; VAR5 < VAR6 + 1; VAR5++)
        {
            VAR2[VAR5] = VAR3[VAR5];
        }
        FUN2(VAR2);
        free(VAR2);
    }
}