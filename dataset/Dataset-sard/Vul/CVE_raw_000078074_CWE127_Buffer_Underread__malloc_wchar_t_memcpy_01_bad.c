void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR2, VAR3'', 100-1);
        VAR2[100-1] = VAR3'';
        
        VAR1 = VAR2 - 8;
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        memcpy(VAR4, VAR1, 100*sizeof(wchar_t));
        
        VAR4[100-1] = VAR3'';
        FUN2(VAR4);
        
    }
}