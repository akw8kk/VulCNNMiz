void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR2[50] = VAR3"";
        size_t VAR4, VAR5;
        VAR5 = wcslen(VAR1);
        
        for (VAR4 = 0; VAR4 < VAR5; VAR4++)
        {
            VAR2[VAR4] = VAR1[VAR4];
        }
        VAR2[50-1] = VAR3''; 
        FUN3(VAR1);
        free(VAR1);
    }
}