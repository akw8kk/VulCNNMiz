void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    while(1)
    {
        {
            wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR2, VAR3'', 50-1);
            VAR2[50-1] = VAR3'';
            
            VAR1 = (void *)VAR2;
        }
        break;
    }
    while(1)
    {
        {
            
            size_t VAR4 = strlen((char *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, 1);
            memcpy(VAR5, VAR1, (VAR4+1));
            FUN2((char *)VAR5);
            free(VAR5);
        }
        break;
    }
}