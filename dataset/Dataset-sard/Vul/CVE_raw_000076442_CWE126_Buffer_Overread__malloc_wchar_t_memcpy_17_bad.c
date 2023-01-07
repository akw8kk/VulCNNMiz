void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR2, VAR3'', 50-1); 
        VAR2[50-1] = VAR3''; 
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1);
        VAR4[100-1] = VAR3''; 
        
        memcpy(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
        VAR4[100-1] = VAR3'';
        FUN2(VAR4);
        free(VAR2);
    }
}