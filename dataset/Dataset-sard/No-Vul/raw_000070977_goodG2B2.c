static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(1)
    {
        
        VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    }
    {
        wchar_t VAR2[10+1] = VAR3;
        
        wcscpy(VAR1, VAR2);
        FUN2(VAR1);
        free(VAR1);
    }
}