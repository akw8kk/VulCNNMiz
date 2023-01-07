static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR2, VAR3'', 50-1);
        VAR2[50-1] = VAR3'';
        
        VAR1 = (void *)VAR2;
    }
    FUN2(&VAR1);
}