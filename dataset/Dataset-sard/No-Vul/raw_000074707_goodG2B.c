static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    VAR1 = NULL;
    {
        wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR4, VAR5'', 100-1);
        VAR4[100-1] = VAR5'';
        
        VAR1 = VAR4;
    }
    FUN2(VAR1);
}