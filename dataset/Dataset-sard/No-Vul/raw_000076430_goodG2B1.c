static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(VAR2)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR1, VAR3'', 100-1); 
        VAR1[100-1] = VAR3''; 
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1);
        VAR4[100-1] = VAR3''; 
        
        memcpy(VAR4, VAR1, wcslen(VAR4)*sizeof(wchar_t));
        VAR4[100-1] = VAR3'';
        FUN3(VAR4);
        free(VAR1);
    }
}