void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    {
        wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR3, VAR4'', 100-1);
        VAR3[100-1] = VAR4'';
        
        VAR1 = VAR3 - 8;
    }
    {
        wchar_t VAR2[100];
        wmemset(VAR2, VAR4'', 100-1); 
        VAR2[100-1] = VAR4''; 
        
        memcpy(VAR1, VAR2, 100*sizeof(wchar_t));
        
        VAR1[100-1] = VAR4'';
        FUN2(VAR1);
        
    }
}