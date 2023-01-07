static void FUN1()
{
    wchar_t * VAR1;
    void (*VAR2) (wchar_t *) = VAR3;
    VAR1 = NULL;
    
    VAR1 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    FUN2(VAR1);
}