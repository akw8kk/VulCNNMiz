static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(VAR2!=5)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    }
    {
        wchar_t VAR3[10+1] = VAR4;
        
        
        memmove(VAR1, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
        FUN3(VAR1);
        free(VAR1);
    }
}