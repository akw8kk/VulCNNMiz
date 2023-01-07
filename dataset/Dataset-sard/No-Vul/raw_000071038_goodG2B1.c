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
        size_t VAR4, VAR5;
        VAR5 = wcslen(VAR2);
        
        
        for (VAR4 = 0; VAR4 < VAR5 + 1; VAR4++)
        {
            VAR1[VAR4] = VAR2[VAR4];
        }
        FUN3(VAR1);
        free(VAR1);
    }
}