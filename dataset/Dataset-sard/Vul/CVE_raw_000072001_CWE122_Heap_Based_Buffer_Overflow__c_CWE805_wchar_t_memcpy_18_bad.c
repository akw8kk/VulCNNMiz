void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    
    VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
    VAR1[0] = VAR3''; 
    {
        wchar_t VAR2[100];
        wmemset(VAR2, VAR3'', 100-1); 
        VAR2[100-1] = VAR3''; 
        
        memcpy(VAR1, VAR2, 100*sizeof(wchar_t));
        VAR1[100-1] = VAR3''; 
        FUN2(VAR1);
        free(VAR1);
    }
}