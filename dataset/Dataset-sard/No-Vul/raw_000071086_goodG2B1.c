static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    switch(5)
    {
    case 6:
        
        FUN2("");
        break;
    default:
        
        VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
        break;
    }
    {
        wchar_t VAR2[10+1] = VAR3;
        
        
        memcpy(VAR1, VAR2, (wcslen(VAR2) + 1) * sizeof(wchar_t));
        FUN3(VAR1);
        free(VAR1);
    }
}