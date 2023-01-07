static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t * VAR4 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
    wchar_t * VAR5 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
    
    VAR1 = VAR5;
    VAR1[0] = VAR6''; 
    FUN3(VAR1);
}