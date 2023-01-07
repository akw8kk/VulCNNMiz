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
        
        
        memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
        FUN2(VAR2);
        free(VAR2);
    }
}