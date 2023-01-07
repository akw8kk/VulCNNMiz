void FUN1()
{
    void * VAR1;
    
    void (*VAR2) (void *) = VAR3;
    VAR1 = NULL;
    {
        wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR4, VAR5'', 50-1);
        VAR4[50-1] = VAR5'';
        
        VAR1 = (void *)VAR4;
    }
    
    FUN2(VAR1);
}