void FUN1()
{
    wchar_t * VAR1;
    
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t * VAR4 = (wchar_t *)FUN2(50*sizeof(wchar_t));
    wchar_t * VAR5 = (wchar_t *)FUN2(100*sizeof(wchar_t));
    
    VAR1 = VAR4;
    VAR1[0] = VAR6''; 
    
    FUN3(VAR1);
}