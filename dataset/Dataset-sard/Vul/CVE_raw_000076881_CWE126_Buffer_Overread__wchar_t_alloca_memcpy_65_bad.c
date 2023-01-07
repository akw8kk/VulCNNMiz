void FUN1()
{
    wchar_t * VAR1;
    
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t * VAR4 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    wmemset(VAR4, VAR6'', 50-1); 
    VAR4[50-1] = VAR6''; 
    wmemset(VAR5, VAR6'', 100-1); 
    VAR5[100-1] = VAR6''; 
    
    VAR1 = VAR4;
    
    FUN3(VAR1);
}