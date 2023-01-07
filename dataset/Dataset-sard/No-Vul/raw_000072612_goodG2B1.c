static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    if(VAR2)
    {
        
        FUN2("");
    }
    else
    {
        
        wmemset(VAR1, VAR3'', 50-1); 
        VAR1[50-1] = VAR3''; 
    }
    {
        wchar_t VAR4[50] = VAR3"";
        
        memmove(VAR4, VAR1, wcslen(VAR1)*sizeof(wchar_t));
        VAR4[50-1] = VAR3''; 
        FUN3(VAR1);
        free(VAR1);
    }
}