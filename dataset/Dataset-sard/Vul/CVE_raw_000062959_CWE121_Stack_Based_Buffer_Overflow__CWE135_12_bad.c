void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (void *)VAR2;
    }
    else
    {
        
        VAR1 = (void *)VAR3;
    }
    if(FUN2())
    {
        {
            
            size_t VAR4 = strlen((char *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, 1);
            memcpy(VAR5, VAR1, (VAR4+1));
            FUN3((char *)VAR5);
            free(VAR5);
        }
    }
    else
    {
        {
            
            size_t VAR4 = wcslen((wchar_t *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, sizeof(wchar_t));
            memcpy(VAR5, VAR1, (VAR4+1)*sizeof(wchar_t));
            FUN4((wchar_t *)VAR5);
            free(VAR5);
        }
    }
}