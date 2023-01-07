void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    {
        wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
        wmemset(VAR3, VAR4'', 50-1);
        VAR3[50-1] = VAR4'';
        
        VAR1 = (void *)VAR3;
    }
    goto VAR5;
VAR5:
    {
        
        size_t VAR6 = strlen((char *)VAR1);
        void * VAR7 = (void *)calloc(VAR6+1, 1);
        memcpy(VAR7, VAR1, (VAR6+1));
        FUN2((char *)VAR7);
        free(VAR7);
    }
}