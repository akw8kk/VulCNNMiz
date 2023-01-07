void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        VAR2[0] = VAR3''; 
    }
    {
        size_t VAR1;
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        for (VAR1 = 0; VAR1 < 100; VAR1++)
        {
            VAR2[VAR1] = VAR4[VAR1];
        }
        VAR2[100-1] = VAR3''; 
        FUN2(VAR2);
        free(VAR2);
    }
}