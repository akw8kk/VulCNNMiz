static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(FUN2())
    {
        
        VAR1 = (void *)VAR2;
    }
    if(FUN2())
    {
        {
            
            size_t VAR3 = wcslen((wchar_t *)VAR1);
            void * VAR4 = (void *)calloc(VAR3+1, sizeof(wchar_t));
            memcpy(VAR4, VAR1, (VAR3+1)*sizeof(wchar_t));
            FUN3((wchar_t *)VAR4);
            free(VAR4);
        }
    }
}