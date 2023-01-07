void FUN1()
{
    wchar_t * VAR1;
    
    void (*VAR2) (wchar_t *) = VAR3;
    wchar_t VAR4[100];
    VAR1 = VAR4;
    
    wmemset(VAR1, VAR5'', 100-1); 
    VAR1[100-1] = VAR5''; 
    
    FUN2(VAR1);
}