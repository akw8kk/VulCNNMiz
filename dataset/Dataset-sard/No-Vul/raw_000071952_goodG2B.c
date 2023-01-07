static void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
        VAR2[0] = VAR3''; 
    }
    {
        size_t VAR4;
        wchar_t VAR5[100];
        wmemset(VAR5, VAR3'', 100-1); 
        VAR5[100-1] = VAR3''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR2[VAR4] = VAR5[VAR4];
        }
        VAR2[100-1] = VAR3''; 
        FUN2(VAR2);
        free(VAR2);
    }
}