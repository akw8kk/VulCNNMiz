void FUN1()
{
    wchar_t * VAR1;
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    VAR1 = FUN2(VAR1);
    {
        wchar_t VAR2[50] = VAR3"";
        
        memcpy(VAR2, VAR1, wcslen(VAR1)*sizeof(wchar_t));
        VAR2[50-1] = VAR3''; 
        FUN3(VAR1);
        free(VAR1);
    }
}