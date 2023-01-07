void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR1, VAR2'', 50-1); 
        VAR1[50-1] = VAR2''; 
        break;
    }
    {
        size_t VAR3, VAR4;
        wchar_t VAR5[100];
        wmemset(VAR5, VAR2'', 100-1);
        VAR5[100-1] = VAR2''; 
        VAR4 = wcslen(VAR5);
        
        for (VAR3 = 0; VAR3 < VAR4; VAR3++)
        {
            VAR5[VAR3] = VAR1[VAR3];
        }
        VAR5[100-1] = VAR2'';
        FUN2(VAR5);
        free(VAR1);
    }
}