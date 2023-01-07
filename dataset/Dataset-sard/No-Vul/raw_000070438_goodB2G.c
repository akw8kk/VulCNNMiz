static void FUN1()
{
    void * VAR1;
    void * VAR2[5];
    VAR1 = NULL;
    {
        wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR3, VAR4'', 50-1);
        VAR3[50-1] = VAR4'';
        
        VAR1 = (void *)VAR3;
    }
    VAR2[2] = VAR1;
    FUN2(VAR2);
}