static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    while(1)
    {
        
        VAR1 = (void *)VAR2;
        break;
    }
    while(1)
    {
        {
            
            size_t VAR3 = wcslen((wchar_t *)VAR1);
            void * VAR4 = (void *)calloc(VAR3+1, sizeof(wchar_t));
            memcpy(VAR4, VAR1, (VAR3+1)*sizeof(wchar_t));
            FUN2((wchar_t *)VAR4);
            free(VAR4);
        }
        break;
    }
}