void FUN1()
{
    wchar_t * VAR1;
    wchar_t * VAR2 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR2, VAR3'', 100-1);
    VAR2[100-1] = VAR3'';
    goto VAR4;
VAR4:
    
    VAR1 = VAR2 - 8;
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR3'', 100-1); 
        VAR5[100-1] = VAR3''; 
        
        wcsncpy(VAR5, VAR1, wcslen(VAR5));
        
        VAR5[100-1] = VAR3'';
        FUN3(VAR5);
    }
}