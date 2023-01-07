void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(VAR1, VAR3'', 50-1); 
    VAR1[50-1] = VAR3''; 
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1);
        VAR4[100-1] = VAR3''; 
        
        memmove(VAR4, VAR1, wcslen(VAR4)*sizeof(wchar_t));
        VAR4[100-1] = VAR3'';
        FUN2(VAR4);
        free(VAR1);
    }
}