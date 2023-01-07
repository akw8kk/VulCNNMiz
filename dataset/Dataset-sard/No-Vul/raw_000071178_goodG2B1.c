static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    }
    {
        wchar_t VAR2[10+1] = VAR3;
        
        
        wcsncpy(VAR1, VAR2, wcslen(VAR2) + 1);
        FUN4(VAR1);
        free(VAR1);
    }
}