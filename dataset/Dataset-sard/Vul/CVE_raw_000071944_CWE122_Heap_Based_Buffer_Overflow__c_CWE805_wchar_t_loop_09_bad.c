void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        VAR1[0] = VAR3''; 
    }
    {
        size_t VAR4;
        wchar_t VAR5[100];
        wmemset(VAR5, VAR3'', 100-1); 
        VAR5[100-1] = VAR3''; 
        
        for (VAR4 = 0; VAR4 < 100; VAR4++)
        {
            VAR1[VAR4] = VAR5[VAR4];
        }
        VAR1[100-1] = VAR3''; 
        FUN2(VAR1);
        free(VAR1);
    }
}