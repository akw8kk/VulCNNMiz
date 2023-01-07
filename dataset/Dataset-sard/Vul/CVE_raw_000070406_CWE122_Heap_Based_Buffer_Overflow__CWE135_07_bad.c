void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        {
            wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR3, VAR4'', 50-1);
            VAR3[50-1] = VAR4'';
            
            VAR1 = (void *)VAR3;
        }
    }
    if(VAR2==5)
    {
        {
            
            size_t VAR5 = strlen((char *)VAR1);
            void * VAR6 = (void *)calloc(VAR5+1, 1);
            memcpy(VAR6, VAR1, (VAR5+1));
            FUN2((char *)VAR6);
            free(VAR6);
        }
    }
}