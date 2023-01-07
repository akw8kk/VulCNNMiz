static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    VAR1 = VAR4;
    
    wmemset(VAR1, VAR5'', 50-1); 
    VAR1[50-1] = VAR5''; 
    FUN3(VAR1);
}