void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        wmemset(VAR2, VAR3'', 100-1); 
        VAR2[100-1] = VAR3''; 
    }
    {
        wchar_t VAR4[50] = VAR3"";
        
        memmove(VAR4, VAR2, wcslen(VAR2)*sizeof(wchar_t));
        VAR4[50-1] = VAR3''; 
        FUN2(VAR2);
        free(VAR2);
    }
}