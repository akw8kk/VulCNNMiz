static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    switch(6)
    {
    case 6:
        
        VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
        break;
    default:
        
        FUN2("");
        break;
    }
    {
        wchar_t VAR2[10+1] = VAR3;
        
        wcscpy(VAR1, VAR2);
        FUN3(VAR1);
        free(VAR1);
    }
}