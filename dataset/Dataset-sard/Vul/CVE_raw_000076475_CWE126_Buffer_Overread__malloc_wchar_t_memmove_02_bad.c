void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(1)
    {
        
        VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR1, VAR2'', 50-1); 
        VAR1[50-1] = VAR2''; 
    }
    {
        wchar_t VAR3[100];
        wmemset(VAR3, VAR2'', 100-1);
        VAR3[100-1] = VAR2''; 
        
        memmove(VAR3, VAR1, wcslen(VAR3)*sizeof(wchar_t));
        VAR3[100-1] = VAR2'';
        FUN2(VAR3);
        free(VAR1);
    }
}