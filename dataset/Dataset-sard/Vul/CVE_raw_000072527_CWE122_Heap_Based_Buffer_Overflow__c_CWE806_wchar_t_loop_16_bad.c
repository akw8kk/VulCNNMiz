void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    while(1)
    {
        
        wmemset(VAR1, VAR2'', 100-1); 
        VAR1[100-1] = VAR2''; 
        break;
    }
    {
        wchar_t VAR3[50] = VAR2"";
        size_t VAR4, VAR5;
        VAR5 = wcslen(VAR1);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR3[VAR4] = VAR1[VAR4];
        }
        VAR3[50-1] = VAR2''; 
        FUN2(VAR1);
        free(VAR1);
    }
}