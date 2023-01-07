static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(VAR1, VAR4'', 100-1); 
    VAR1[100-1] = VAR4''; 
    FUN2(VAR1);
}